//
//  DLLFloat.cpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#include "DLLFloat.hpp"

DLLFloat::DLLFloat(float newValue) {
    
    this->value = newValue;
}

DLLFloat::DLLFloat() {
    
    this->value = 0.0f;
}

DLLFloat::~DLLFloat() {
    
    this->value = 0.0f;
}

void DLLFloat::showValue() {
    cout << this->value << endl;
}

DLLFloat& DLLFloat::operator=(float newValue) {
    
    this->value = newValue;
    return *this;
}
