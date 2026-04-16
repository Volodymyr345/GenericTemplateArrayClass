#include <iostream>
#include "Array.h"
int main(int argc, char const *argv[])
{
    std::cout << "Hello world" << std::endl;
    Array <int>arr {1, 2, 3, 4};
    arr.print(); 
    arr.push_back(10);
    arr.print();
}
