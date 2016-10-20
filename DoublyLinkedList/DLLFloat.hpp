//
//  DLLFloat.hpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#ifndef DLLFloat_hpp
#define DLLFloat_hpp

#include "DLLType.hpp"

class DLLFloat : public DLLType
{
private:
    float value;
    
public:
    DLLFloat(float newValue);
    DLLFloat();
    ~DLLFloat();
    void showValue();
    DLLFloat& operator=(float newValue);
};

#endif /* DLLFloat_hpp */
