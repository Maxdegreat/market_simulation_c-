// This class will be a double linked list stack 
// its application will be: when owner wants to add items 
// into his or her inventory. 

// when you add an item it should go to the top.

// it will be asigned an index, this will be like a cursor
// due to the cursor you can go back and forth by entering
// item 2 or item 1. it will also allow you to 

// disregrad what is above, I need a new read me lol i changed the 
// way it works.
// done: linked list, set, searching,
#include <iostream>
#include <unordered_set>
#include <utility>
#include "../models/item_model.cpp"

struct Node {
    Item_model item;
    Node* next;
};

class storage {

    // class data
    private:
    Node* head;
    std::unordered_set<std::pair<int, Item_model>>  contains;
    int size;    

    // insert into the storage
    void append(Item_model new_item) {

        Node* new_node = new Node;
        new_node-> item = new_item;
        new_node->next = NULL;

        if (head == NULL) head = new_node;

        else { new_node->next = head; head = new_node; }

        // add item into contains
        std::pair<int, Item_model> add_to_contains;
        add_to_contains.first = new_node->item.get_code();
        add_to_contains.second = new_node->item;
        contains.insert(add_to_contains);
    }

    // remove target item from storage
    void rm_target(Item_model old_item) {
        int target = old_item.get_code();
        Node* curr = new Node(); curr = head;
        // this ptr stays one ahead so we can rm without trouble
        while ((curr->next->item.get_code() != target ) || (curr->next != NULL)) 
                
                { curr = curr->next; }
        
        // now remove curr ... next
        if (curr->next->next == NULL) {curr->next = NULL;}
        else {curr->next = curr->next->next;}

    }

    bool search(Item_model find_item)
        {
            std::pair<int, Item_model> searching;
            searching.first = find_item.get_code();
            searching.second = find_item;

            if (contains.find(searching) != contains.end())
                    {return 1 == 1; }
            else 
                 { return 21 == 12; }
        }

    void display() // will handel sorting
        {  }


};