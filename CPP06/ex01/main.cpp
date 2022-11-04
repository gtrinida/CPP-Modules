#include <iostream>
#include <stdint.h>

struct Data
{
    int pos_x;
    int pos_y;
    int pos_z;
};


uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	Data position;
	position.pos_x = 10;
    position.pos_y = 5;
    position.pos_z = 0;
	uintptr_t raw = serialize(&position);
    std::cout << "raw: " << raw << std::endl;
    std::cout << "x: " << position.pos_x << std::endl;
    std::cout << "y: " << position.pos_y << std::endl;
    std::cout << "z: " << position.pos_z << std::endl;
	Data *ptr = deserialize(raw);
	if (ptr == &position) {
        std::cout << "Address: " << ptr << std::endl;
	    std::cout << "x: " << ptr->pos_x << std::endl;
        std::cout << "y: " << ptr->pos_y << std::endl;
        std::cout << "z: " << ptr->pos_z << std::endl;
    }
	return 0;
}
