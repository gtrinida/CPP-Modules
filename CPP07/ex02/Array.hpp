#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <cstdlib>

template<typename T>
class Array{
private:
    T *arr;
    unsigned int len;
public:
    Array<T>() : arr(new T[0]), len(0) { }
    Array<T>(unsigned int n) : arr(new T[n]), len(n){ }
    Array<T>(const Array<T> &src){
        arr = 0;
        len = 0;
        *this = src;
    }
    
    Array<T> &operator=(const Array &src)
	{
		if (arr)
			delete[] arr;
		arr = new T[src.size()];
		len = src.size();
		for (unsigned int i = 0; i < src.size(); ++i)
			arr[i] = src[i];
		return *this;
	}

    T &operator[](unsigned int index) const{
        if (len <= index)
            throw(std::exception());
        return arr[index];
    }

    ~Array<T>(){
        delete[] arr;
    }
    unsigned int size() const{
        return this->len;
    }
    void print() const
	{
		for (unsigned int i = 0; i < len; ++i)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}

};

#endif