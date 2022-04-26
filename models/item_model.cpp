#include <iostream>
#include <string>
#include <string>
#include <vector>
#include <unordered_set>

class Item_model {
    private:
    int price, code;
    std::string name;
    
    public:

    Item_model() { this->name = "None", this->price =0; this->code = 0; }
    
    Item_model(std::string name, int price)  { this->name = name; this->price = price; }
    
    void set_price(int new_price);

    void set_code(int val);

    int get_code();
    
    int get_price();
    
    std::string get_name();
};

void Item_model::set_price (int new_price)   { this->price = new_price; }

void Item_model::set_code(int val)           { this->code = val; }
    
int Item_model::get_code()                   { return this->code; }

std::string Item_model::get_name()           { return this->name; }

int Item_model::get_price()                   { return this->price; }

