//
//  DLLList.hpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#ifndef DLLList_hpp
#define DLLList_hpp

#include "DLLInteger.hpp"

struct DLLListItem
{
    DLLListItem *next;
    DLLListItem *previous;
    DLLType *value;
};

class DLLList
{
private:
    DLLListItem *begin;
    DLLListItem *end;
    
    int numberOfItems;
    
public:
    DLLList();
    ~DLLList();
    
    void addValueToFront(DLLType *value);
    DLLType *getValueByIndex(int index);
    void addValueToEnd(DLLType *value);
    void removeFirstObject();
    void removeLastObject();
    void showList();
    bool isEmpty();
    int size();
};

#endif /* DLLList_hpp */
