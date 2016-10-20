//
//  DLLString.hpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#ifndef DLLString_hpp
#define DLLString_hpp

#include "DLLType.hpp"
#include <cstring>

class DLLStirng : public DLLType
{
private:
    string value;
    
public:
    DLLStirng(string newValue);
    DLLStirng();
    ~DLLStirng();
    void showValue();
    DLLStirng& operator=(string newValue);
};

#endif /* DLLString_hpp */
