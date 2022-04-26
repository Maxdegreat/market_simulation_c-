#include <iostream>
#include "models/shop_model.cpp"

using namespace std;
void display_menue();
int main() {
    display_menue();
    return 0;
}

void display_menue() {
        // menue 
    cout << "0. View Store" << endl;
    cout << "1. Remove From Store" << endl;
    cout << "2. Add To Store" << endl;
    cout << "3. close for the Day" << endl;

    // have a model that will check for 
}