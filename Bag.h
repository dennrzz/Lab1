/**
 * Laboratory #1 - CSCI2421 - Summer 2021
 * File: Bag.h
 */

#ifndef BAG_
#define BAG_

#include <vector>
#include "BagInterface.h"

template<class ItemType>
class Bag : public BagInterface<ItemType>
{
private:
    static const int DEFAULT_BAG_SIZE = 500;
    ItemType item[DEFAULT_BAG_SIZE];  // array of bag items
    int itemCount;                    // current count of bag items
    int maxItems;                     // max capacity of the ba
    int getIndexOf(const ItemType& target) const;

public:
    Bag();
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry);
    void clear();
    bool contains(const ItemType& anEntry) const;
    int getFrequencyOf(const ItemType& anEntry) const;
    std::vector<ItemType> toVector() const;
};

#include "Bag.cpp"

#endif
