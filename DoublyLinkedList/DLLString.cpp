//
//  DLLString.cpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#include "DLLString.hpp"

DLLStirng::DLLStirng(string newValue) {
    
    this->value = newValue;
}

DLLStirng::DLLStirng() {
    
    this->value = "";
}

DLLStirng::~DLLStirng() {
    
    this->value = "";
}

void DLLStirng::showValue() {
    cout << this->value << endl;
}

DLLStirng& DLLStirng::operator=(string newValue) {
    
    this->value = newValue;
    return *this;
}
