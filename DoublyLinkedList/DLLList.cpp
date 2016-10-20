//
//  DLLList.cpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#include "DLLList.hpp"

DLLList::DLLList() {

    this->begin = NULL;
    this->end   = NULL;
    this->numberOfItems = 0;
}

DLLList::~DLLList() {
    
    while (this->begin != NULL) {
        delete this->begin;
        this->begin = this->begin->next;
    }
    this->numberOfItems = 0;
}

void DLLList::addValueToEnd(DLLType *value) {
    
    DLLListItem *newItem = new DLLListItem;
    newItem->next = NULL;
    newItem->value = value;
    
    if (this->isEmpty()) {
        
        newItem->previous = NULL;
        this->begin = newItem;
        this->end   = newItem;
        
    } else {
    
        newItem->previous = this->end;
        this->end->next = newItem;
        this->end = newItem;
    }
    this->numberOfItems++;
}

void DLLList::addValueToFront(DLLType *value) {
    
    DLLListItem *newItem = new DLLListItem;
    
    newItem->previous = NULL;
    newItem->value = value;
    
    if (this->isEmpty()) {
        
        newItem->next = NULL;
        this->begin = newItem;
        this->end   = newItem;
        
    } else {
        
        newItem->next = this->begin;
        this->begin->previous = newItem;
        this->begin = newItem;
    }
    this->numberOfItems++;
    
}

void DLLList::removeLastObject() {
    
    if (!this->isEmpty()) {
        
        DLLListItem *newEnd = this->end->previous;
    
        newEnd->next = NULL;
        this->end = newEnd;

        this->numberOfItems--;
    }
}

void DLLList::removeFirstObject() {
    
    if (!this->isEmpty()) {
        
        DLLListItem *newBegin = this->begin->next;
        
        newBegin->previous = NULL;
        this->begin = newBegin;
        
        this->numberOfItems--;
    }
}

DLLType *DLLList::getValueByIndex(int index) {

    DLLListItem *beginItem = this->begin;
    
    if (index <= this->numberOfItems-1 && index >= 0) {
        
        int count = 0;
        
        while (beginItem != NULL) {
            if (count == index) {
                return beginItem->value;
            }
            beginItem = beginItem->next;
            count++;
        }
        
    }
    return NULL;
}

int DLLList::size() {
    
    return this->numberOfItems;
}

bool DLLList::isEmpty() {

    if (this->numberOfItems == 0) {
        return true;
    } else {
        return false;
    }
}

void DLLList::showList() {
    
    DLLListItem *beginItem = this->begin;
    int count = 1;
    
    while (beginItem != NULL) {
        cout << "\t" << count << " element: ";
        beginItem->value->showValue();
        beginItem = beginItem->next;
        count++;
    }
}
