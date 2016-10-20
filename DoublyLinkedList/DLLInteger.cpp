//
//  DLLInteger.cpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#include "DLLInteger.hpp"

DLLInteger::DLLInteger(int newValue) {
    
    this->value = newValue;
}

DLLInteger::DLLInteger() {
    
    this->value = 0;
}

DLLInteger::~DLLInteger() {
    
    this->value = 0;
}

void DLLInteger::showValue() {
    cout << this->value << endl;
}

DLLInteger& DLLInteger::operator=(int newValue) {

    this->value = newValue;
    return *this;
}
