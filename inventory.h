#ifndef INVENTORY_H_
#define INVENTORY_H_

#include <string>
#include <vector>
#include "item.h"
using namespace std;

class inventory
{
private:
    int totalWeightOfItems;
    int weightLimit;
    int numberOfItems;
    vector<Item> inventoryItems;

public:
    void displayInventory();
    void addItem();
    void removeItem();
    void setTotalWeightOfItems(int w){
        totalWeightOfItems += w;
    }
    int getTotalWeightOfItems(){
        return totalWeightOfItems
    }
    
};
#endif /*INVENTORY_H_*/