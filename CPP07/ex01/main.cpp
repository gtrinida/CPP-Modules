#include "iter.hpp"

template<typename T>
void print_array(T elem, int i){
    std::cout << "Elem of index " << i << " is: " << elem << std::endl;
}

int main (){
    int intarr[5];
    std::string array[3] = {
        "This is the string!",
        "This is the string, too!",
        "The largest string in the array!!!"
        };
    ::iter(array, 3, print_array);
    for (int i = 0; i < 5; i++)
    {
        srand(time(NULL) + i);
        intarr[i] = rand() % 100;
    }
    ::iter(intarr, 5, print_array);
       
}