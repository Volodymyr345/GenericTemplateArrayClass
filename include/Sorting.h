#pragma once
#include <cstddef>
#include <iostream>
#include "Array.h"
template <typename T>
class Sorting {
private:
    static void mySwap(T& elem1, T& elem2) {
        T temp = elem1;
        elem1 = elem2;
        elem2 = temp;
    }

    static int partition(Array<T> &unsort_array, int start, int end) {
        T &pivot = unsort_array[end];
        
        int i = start - 1; 
        
        for(int j {start}; j <= end - 1; j++)
            if(unsort_array[j] < pivot) {
                i++;
                mySwap(unsort_array[i], unsort_array[j]); //swapping the elements
            }
        mySwap(unsort_array[i + 1], unsort_array[end]); 

        return i + 1;
    };

    static void quickSorting(Array<T> &unsort_array, int start, int end) {
        if(start < end) { // to exit from recursive function
            int pi = partition(unsort_array, start, end); //the variable is an index of the pivot


            quickSorting(unsort_array, start, pi - 1); // starting recursion
            quickSorting(unsort_array, pi + 1, end);
        }
    
    }
public:
    static void bubbleSort(Array<T> &unsort_array) {
        size_t size{unsort_array.get_size()};
        for(size_t k {size}; k != 0; k--) {
            for(size_t i{}; i + 1 < k; i++) {
                if(unsort_array[i] > unsort_array[i + 1]){
                    mySwap(unsort_array[i], unsort_array[i + 1]);
                }
            }
        }
    }

    static void quickSort(Array<T> &unsort_array) {

        quickSorting(unsort_array, 0, static_cast<int>(unsort_array.get_size()) - 1);

    }



    

};