//
//  main.cpp
//  DoublyLinkedList
//
//  Created by Anthony on 20.10.16.
//  Copyright © 2016 AntonYereshchenko. All rights reserved.
//

#include <iostream>
#include "DLLList.hpp"
#include "DLLInteger.hpp"
#include "DLLFloat.hpp"
#include "DLLString.hpp"

using namespace std;

void valueTypesMenu() {

    cout << "1 - Integer"   << endl;
    cout << "2 - Float"     << endl;
    cout << "3 - String"    << endl;
}

void menu() {

    cout << "1 - Add value to end"      << endl;
    cout << "2 - Add value to front"    << endl;
    cout << "3 - Remove last object"    << endl;
    cout << "4 - Remove first object"   << endl;
    cout << "5 - Get value by index"    << endl;
    cout << "6 - Show list"             << endl;
    cout << "7 - Show size of list"     << endl;
    cout << "8 - Info"                  << endl;
    cout << "9 - Exit"                  << endl;
}

int main(int argc, const char * argv[]) {

    DLLList *list = new DLLList();
    
    DLLType *value = NULL;
    
    bool flag   = true;
    int command = 0;
    int index   = 0;
    
    int intValue        = 0;
    float floatValue    = 0.0f;
    string stringValue  = "";
    
    menu();
    
    while (flag) {
        
        cout << "Enter number of command : "; cin >> command;
        
        switch(command) {
        
            case 1:
                valueTypesMenu();
                cout << "Enter number of value type : "; cin >> command;
                switch(command) {
                    case 1:
                        cout << "Enter integer value to add : "; cin >> intValue;
                        list->addValueToEnd(new DLLInteger(intValue));
                        break;
                    case 2:
                        cout << "Enter float value to add : "; cin >> floatValue;
                        list->addValueToEnd(new DLLFloat(floatValue));
                        break;
                    case 3:
                        cout << "Enter string value to add : "; cin >> stringValue;
                        list->addValueToEnd(new DLLStirng(stringValue));
                        break;
                    default: cout << "Type error!" << endl; break;
                }
                break;
            case 2:
                valueTypesMenu();
                cout << "Enter number of value type : "; cin >> command;
                switch(command) {
                    case 1:
                        cout << "Enter integer value to add : "; cin >> intValue;
                        list->addValueToFront(new DLLInteger(intValue));
                        break;
                    case 2:
                        cout << "Enter float value to add : "; cin >> floatValue;
                        list->addValueToFront(new DLLFloat(floatValue));
                        break;
                    case 3:
                        cout << "Enter string value to add : "; cin >> stringValue;
                        list->addValueToFront(new DLLStirng(stringValue));
                        break;
                    default: cout << "Type error!" << endl; break;
                }
                break;
            case 3:
                list->removeLastObject();
                break;
            case 4:
                list->removeFirstObject();
                break;
            case 5:
                cout << "Enter element index : "; cin >> index;
                value = list->getValueByIndex(index);
                if (value != NULL) {
                    cout << "Value at index " << index << " is : "; value->showValue();
                    
                } else {
                    cout << "Out of range!" << endl;
                }
                break;
            case 6:
                if (list->isEmpty()) {
                    cout << "List is empty" << endl;
                } else {
                    list->showList();
                }
                break;
            case 7:
                cout << "Size = " << list->size() << endl;
                break;
            case 8:
                menu();
                break;
            case 9:
                cout << "Bye!" << endl;
                flag = false;
                break;
            default: cout << "Command error!" << endl; break;
        }
    }
    return 0;
}
