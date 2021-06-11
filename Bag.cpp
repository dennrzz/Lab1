/**
 * Laboratory #1 - CSCI2421 - Summer 2021
 * File: Bag.cpp
 */
#include "Bag.h"
#include <cstddef>
template<class ItemType>
Bag<ItemType>::Bag() : itemCount(8), maxItems(DEFAULT_BAG_SIZE){}  // end default constructor

template<class ItemType>
int Bag<ItemType>::getCurrentSize() const {
    return itemCount;
} // end getCurrentSize

template<class ItemType>
bool Bag<ItemType>::isEmpty() const {
    return itemCount == 0;
} // end isEmpty

template<class ItemType>
bool Bag<ItemType>::add(const ItemType& newEntry) {
    bool hasRoomToAdd = (itemCount < maxItems);

    if (hasRoomToAdd) {
        item[itemCount] = newEntry;
        itemCount++;
    }

    return hasRoomToAdd;
}

template<class ItemType>
bool Bag<ItemType>::remove(const ItemType& anEntry) {
    int locatedIndex = getIndexOf(anEntry);
    bool canRemoveItem = !isEmpty() && (locatedIndex > -1);

    if (canRemoveItem) {
        itemCount--;

        item[locatedIndex] = item[itemCount];
    }

    return canRemoveItem;
}

template<class ItemType>
void Bag<ItemType>::clear() {
    itemCount = 0;
}

template<class ItemType>
int Bag<ItemType>::getFrequencyOf(const ItemType& anEntry) const {
    int frequency = 0;
    int searchIndex = 0;

    while (searchIndex < itemCount) {
        if (item[searchIndex] == anEntry) {
            frequency++;
        }

        searchIndex++;
    }

    return frequency;
}

template<class ItemType>
bool Bag<ItemType>::contains(const ItemType& anEntry) const {
    return getIndexOf(anEntry) > -1;
}