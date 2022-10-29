#include <iostream>
#include <fstream>

void replace(std::string &line, std::string what_replaced, std::string replacer)
{
	size_t start_i;
	
	start_i = line.find(what_replaced);
	if (start_i != std::string::npos)
	{
		line.erase(start_i, what_replaced.length());
		line.insert(start_i, replacer);
	}
}

int check_open(char *argv, const std::string replacefile, std::ofstream &repFile, std::ifstream &readFile)
{
    readFile.open(argv);
    if (!readFile.is_open())
		return (1);
    repFile.open(replacefile.c_str());
    if (!repFile.is_open())
		return (1);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments!" << std::endl;
		return (1);
    }
	std::ofstream	repFile;
	std::ifstream	readFile;
	std::string		line;
	const std::string	what_replaced = argv[2]; 
	const std::string	replacer = argv[3];
	const std::string	replacefile = (std::string)argv[1] + ".replace";
    if (check_open(argv[1], replacefile, repFile, readFile) == 1)
    {
        std::cout << "File is invalid." << std::endl;
        return (1);    
    }
	while (!readFile.eof())
	{
		getline(readFile, line);
		replace(line, what_replaced, replacer);
		repFile << line << std::endl;			
	}
	readFile.close();	
	repFile.close();
}
