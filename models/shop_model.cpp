#include <iostream>
#include <string>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

class Shop_model
{
private:
    std::string name;
    std::string owner_name;
    int inventory_count;
    vector<std::string> inventory; 
    unordered_set<std::string> in_inventory;
public:
    // shop name --- owner_name
    Shop_model(std::string name, std::string owner_name);
    // item as string you want to add
    void add_to_inventory(std::string item);
    // item as string u want to remove
    bool remove_from_inventory(string item);
    // search if is in inventory
    std::string is_in_inventory(std::string item);
    string get_shop_name();
};

Shop_model::Shop_model(std::string name_, std::string owner_name_) { this->name = name_; this->owner_name = owner_name_; }

void Shop_model::add_to_inventory(std::string name)          {  }

bool Shop_model::remove_from_inventory(std::string item)     {  }

 std::string Shop_model::is_in_inventory(std::string item)   {  }

std::string Shop_model::get_shop_name() 
                    
            { cout << "The Shop Has A dang name"; return name;  }
