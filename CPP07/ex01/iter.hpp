#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
void iter(T *arr, int size, void print_arr(T elem, int i)){
    for (int i = 0; i < size; i++){
        print_arr(arr[i], i);
    }
    
}

#endif 