
#include <iostream>
using namespace std;

struct Node {

    int screenAsInt;
    Node* next;
};

class NavLinkedList {
    private:
    Node* head;

    public:
    // constructor
    NavLinkedList() {
        head = nullptr;
    }
    
    void navigator_push( int newScreenAsInt ) {
        Node* new_node = new Node;
        new_node->screenAsInt = newScreenAsInt;
        new_node-> next = nullptr; 

        if (head == NULL)
            head = new_node;
        else {
             new_node->next = head;
             head = new_node;
        }

    }

    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~`

    int top() {
        if (head != nullptr) {
            return head->screenAsInt;
        } else {
            cout << "you are at home screen" << endl;
            return -1;
        }
    }

    int pop() {
        // return val of curr head then replace head with head->next
        // if empty then just return -1
        if (head == nullptr) {
            cout << "you are at home screen";
            return -1;
        }else{
            int val = head->screenAsInt;
            // I think head is now distroyed in memory, so it should be memory efficieant
            head = head->next;
            return val;
        }
    }

    
    
    
};