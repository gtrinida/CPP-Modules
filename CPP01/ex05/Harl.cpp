#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "Are you listening to me at all?" << std::endl;
}
void    Harl::info(void)
{
    std::cout << "Oh, this happened at my friend's today, you have no idea, I'll tell you everything now..." << std::endl;
}
void    Harl::warning(void)
{
    std::cout << "I found a woman's hair in your coat, WHO IS SHE?" << std::endl;
}
void    Harl::error(void)
{
    std::cout << "Well, yes, it was my hair, but I'm still offended. Because you ..." << std::endl;
}

void    Harl::complain(std::string level)
{
	void	(Harl::*MPointer[4])(void) =
	{
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error 
	};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (levels[i] != level && i < 4) 
		i++;
	switch (i)
	{
	case 4:
		std::cout << level << "I don't even know how to approach this question... BUT I'M A DINOSAUR! AAARGGGGHHHHHH!!!" << std::endl;
		break;
	
	default:
		std::cout << level << ": ";
		(this->*MPointer[i])();
		break;
	}
	// while (levels[i] != level && i < 3) 
	// 	i++;
	// std::cout << level << ": ";
	// (this->*MPointer[i])();
}
