#include <iostream>
#include <cstdlib>


class Base {

public:
    virtual ~Base() { };
};

class A : public Base{};

class B : public Base{};

class C : public Base{};


Base* generate(void){
    int type = rand() % 3;
    if (type == 0)
        return new A;
    else if (type == 1)
        return new B;
    else
        return new C;

}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cout << "Can't find this type";
	std::cout << std::endl;
}

void identify(Base& p)
{
    try
    {
        dynamic_cast<A&> (p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            dynamic_cast<B&> (p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
             try
             {
                dynamic_cast<C&> (p);
                std::cout << "C" << std::endl;
             }
             catch(const std::exception& e)
             {
                std::cout << "Can't find this type" << std::endl;
             }
        }
        
    }
    
}

int main(void){
    std::srand(time(NULL));
    Base    *ptr = generate();
    Base    &ref = *(generate());
    identify(ptr);
    identify(ref);
    delete ptr;
    delete &ref;
}
