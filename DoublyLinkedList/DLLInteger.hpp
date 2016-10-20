//
//  DLLInteger.hpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#ifndef DLLInteger_hpp
#define DLLInteger_hpp

#include "DLLType.hpp"

class DLLInteger : public DLLType
{
private:
    int value;
    
public:
    DLLInteger(int newValue);
    DLLInteger();
    ~DLLInteger();
    void showValue();
    DLLInteger& operator=(int newValue);
};

#endif /* DLLInteger_hpp */
