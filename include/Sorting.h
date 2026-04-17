#pragma once
#include <cstddef>
#include "Array.h"
template <typename T>
class Sorting {
public:
    static void bubbleSort(Array<T> &unsort_array) {
        size_t size{unsort_array.get_size()};
        for(size_t k {size}; k != 0; k--) {
            for(size_t i{}; i + 1 < k; i++) {
                if(unsort_array[i] > unsort_array[i + 1]){
                    T temp{unsort_array[i]};
                    unsort_array[i] = unsort_array[i + 1];
                    unsort_array[i + 1] = temp;
                }
            }
        }
    }

};