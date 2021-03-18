
#include "inventory.h"


//vector<Item> inventoryItems;

//this->
void displayInventory()
{
}

void inventory::addItem(Item &item)
{
    if ((weightGrams + totalWeightOfItems) > weightLimit)
    {
        cout << "You cannot carry anymore items, bag is full.";
    }
    else
    {
        inventoryItems.push_back(item);
        numberOfItems += 1;
        setTotalWeightOfItems();
        cout<< getShortDescription() << "has been added to your inventory."
    }
}

void inventory::removeItem(int index)
{
    delete inventoryItems[index];
    numberOfItems -= 1;
    
}

// void inventory::calcTotalWeightOfItems()
// {
//     for(int i=0; i<inventoryItems.size();i++){
//          setTotalWeightOfItems(inventoryItems[i]);
//     }
    
// }