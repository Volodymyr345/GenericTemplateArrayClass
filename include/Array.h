#pragma once
#include <cstddef>
#include <iostream>
#include <initializer_list>

template <class T>
class Array {
private:
    T *array {nullptr};
    size_t size;
public:
    Array():
        size{0} {
    }
    Array(const std::initializer_list<T> &list) : // creating an array
        size{list.size()} {
        array = new T[size];
        size_t i{};
        
        for(const T &item: list) { 
            array[i] = item;
            i++;
        }
    }

    void push_back(T element) { //pushing the element to array
        T* temp = array;
        array = nullptr;
        size++;
        array = new T[size];
        for(size_t k{}; k < size; k++) {
            array[k] = temp[k];
        }
        array[size-1] = element;
        delete[] temp;
        
    }

    void print() { //printing an array
        std::cout << "Printing Array" << std::endl;
        for(size_t i{}; i < size; i++) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }

    T &operator[](size_t index) {
        return array[index];
    }

    ~Array() {
        delete [] array;
    }

};