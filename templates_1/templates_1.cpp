// templates_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "max1.hpp"
#include <iostream>
#include <string>

int main()
{
    double f1 = 3.4;
    double f2 = -6.7;
    int i = 42;
    std::cout << "max(7,i): " << ::max(7, i) << std::endl;
    std::cout << "max(f1,f2): " << ::max(f1, f2) << std::endl;
    std::string s1 = "mathematics";
    std::string s2 = "math";
    std::cout << "max(s1,s2): " << ::max(s1, s2) << std::endl;
    void* vp = nullptr;
    ::foo(vp);
}