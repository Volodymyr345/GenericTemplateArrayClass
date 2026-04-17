#pragma once
#include <iostream>
#include <cstddef>
class PrintableArray {
friend std::ostream &operator<<(std::ostream &os,const PrintableArray &arr);
    virtual void print(std::ostream &os) const = 0;
};