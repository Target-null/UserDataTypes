//
// Created by rollin on 5/11/25.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#pragma once
#include <iostream>
#include <string>

class Employee {
public:
    void Read();
    void Write();

private:
    std::string name;
    short age;
    unsigned int zipcode;
    float wage;
    float hoursWorked;

    static const float TAX; // Declare tax as a static constant
};


#endif //EMPLOYEE_H
