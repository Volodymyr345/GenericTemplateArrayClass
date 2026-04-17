#include "PrintableArray.h"

std::ostream &operator<<(std::ostream &os,const PrintableArray &arr) {
    arr.print(os);
    return os;
}