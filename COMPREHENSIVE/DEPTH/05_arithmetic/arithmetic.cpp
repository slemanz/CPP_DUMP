#include <iostream>


int main(void)
{
    // first lets declare some variables
    int i1 = 5;
    float f1 = 10.5;
    double d1 = 15.25;

    // * + / %      These are the basics
    std::cout << i1 + i1 + 1 << std::endl;
    std::cout << f1 * 2 << std::endl;
    std::cout << (i1*2) / 5 << std::endl;
    std::cout << i1 / 2 << std::endl;
    std::cout << i1 / 2.0 << std::endl;
    std::cout << i1 % 2 << std::endl << std::endl;

    // operator precedence */%+-
    std::cout << i1 + 2 * 3 - 1 << std::endl; // result 10
    std::cout << (i1 + 2)*3 - 1 << std::endl; // result 20
    std::cout << std::endl;

    // += -= *=/=   These use assignment
    std::cout << "I1 Value: " << i1 << std::endl;
    i1 = i1 + 2;
    i1 += 2;
    std::cout << "I1 Value: " << i1 << std::endl << std::endl;
    i1 = 5;

    // ++ --        These are for incrementing and decrementing
    std::cout << "I1 Value: " << i1 << std::endl;
    i1 = i1 + 1;
    i1++;
    std::cout << "I1 Value: " << i1 << std::endl << std::endl;
    i1 = 5;

    // ++ and --    prefix vs infix
    std::cout << "I1 Value: " << --i1 << std::endl; // perform the decrement than return the value
    std::cout << "I1 Value: " << i1++ << std::endl; // return the value then perform the increment
    std::cout << "I1 Value: " << i1 << std::endl;

    return 0;
}