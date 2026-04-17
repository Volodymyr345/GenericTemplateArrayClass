#include <iostream>
#include "Array.h"
#include "Sorting.h"
int main(int argc, char const *argv[])
{
    std::cout << "Hello world" << std::endl;
    Array <int>arr {4, 3, 6, 5, 1, 2};

    Sorting<int>::bubbleSort(arr);


    std::cout << arr;
}
