#include <iostream>
#include <string>
#include "models/shop_model.cpp"
#include "helpers/store_storage.cpp"
#include "navigation/nav_linked.cpp"

using namespace std;
void display_menue();
void display_menue_nav();
void display_menue_nav_back(int path);
void removeFromStroage();
void navInfo();
void addToStore();
void clear();
void goBack();

NavLinkedList navigator;
Storage storage;

int main() {
    display_menue();
    return 0;
}

void display_menue() {
        // menue 
    cout << " +-+-+-+-+-+-+-+-+-+- HEY WELCOME BACK USER! -+-+-+-+-+-+-+-+-+-+-+"<< endl;
    cout << endl;

    cout << "What Can I Do For You Today?" << endl;

    // if (1) nav to a new console screen and show what contensts are in the store currently
    cout << "(1) Remove From Store" << endl;
    

    // if (2) nav to a new console and give option to nav to a new store
    cout << "(2) Add To Store" << endl;


    // if (3) nav to a new console and give the option to exit ... or just exit
    cout << "(3) close for the Day" << endl;

    display_menue_nav();
}

void display_menue_nav() {
    int x;
    cin >> x;
    if (x == 1) {
        navigator.navigator_push(1);
        removeFromStroage();
    } else if (x == 2) {
        navigator.navigator_push(2);
        addToStore();
    } else if (x == 3) {
        // do this
        navigator.navigator_push(3);
    } else {
        // do this
    }
}

void removeFromStroage() {
    cout << "to do" << endl;
}

void addToStore() {
    clear();
    navInfo();
    std::string title;
    int price;
    int code;
    cout << "ADD THINGS AND, SLEEP AND PEOPLE BUY, EASY GREEN!" << endl;
    cout << "title: ";
    cin >> title;
    cout << endl << "price: ";
    cin >> price;
    cout << endl << "code: ";
    // in a prod release we would use a hash set to make sure no item with the same code 
    // exists. a dictonary could also be used
    cin >> code;
    cout << endl << "great, adding ur item to the store ..." << endl;

    cout << "-=-=-=-=-=-=-=-= DONE -=-=-=-=-=-=-=-==-=-=-=-" << endl;
    cout << "would you like to view your store? (y/n): ";
    char ans;
    cin >> ans;
    cout << ans;
    if (ans == 'y' || ans =='Y') {
        cout << "to do";
    } else if (ans == 'n' || ans == 'N'){
        cout << "going back" << endl;
        goBack();
    }


    
}

void goBack() {
    cout << navigator.top();
    int backTo = navigator.pop();
    display_menue_nav_back(backTo);
}

void navInfo() {
    cout << "to go back press b" << endl;
}


void display_menue_nav_back(int path) {
    if (path == 1) {
        removeFromStroage();
    } else if (path == 2) {
        addToStore();
    }
}

void clear() {cout << "\x1B[2J\x1B[H";}

