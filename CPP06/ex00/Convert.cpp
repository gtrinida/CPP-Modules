#include "Convert.hpp"

Convert::Convert() {}

Convert::~Convert() {}

Convert::Convert(const std::string& str) : _sourceStr(str) {}

Convert::Convert(const Convert& src) : _sourceStr(src.getSourceStr()) {}

const Convert& Convert::operator=(const Convert& src)
{
	if (this != &src)
	{
		this->_sourceStr = src._sourceStr;
	}
	return (*this);
}

const std::string&	Convert::getSourceStr() const
{
	return this->_sourceStr;
}

void	Convert::setSourceStr(const std::string& str)
{
	this->_sourceStr = str;
}

void	Convert::convert() const
{
	OrigType strType = checkOrigType();
	void (Convert::*convertStr[4])() const = {
		&Convert::convertCharStr,
		&Convert::convertIntStr,
		&Convert::convertFloatStr,
		&Convert::convertDoubleStr
	};

	if (strType == empty)
	{
		std::cout << "String not setted!" << std::endl;
		return;
	}
	if (strType == undefinedType)
	{
		std::cout << "Can't convert this string:(" << std::endl;
		return;
	}
	(this->*convertStr[strType])();
}

Convert::OrigType	Convert::checkOrigType() const
{
	bool (Convert::*isType[5])() const = {
		&Convert::isChar,
		&Convert::isInt,
		&Convert::isFloat,
		&Convert::isDouble,
		&Convert::isEmpty
	};
	for (size_t i = 0; i < 5; i++)
	{
		if ((this->*isType[i])())
			return static_cast<OrigType>(i);
	}
	return undefinedType;
}

bool		Convert::isChar() const
{
	return this->_sourceStr.length() == 1 && !isdigit(this->_sourceStr[0]);
}

bool		Convert::isInt() const
{
	const char * ptr = this->_sourceStr.c_str();

	if (*ptr == '+' || *ptr == '-')
	{
		++ptr;
	}
	if (isdigit(*ptr))
	{
		while (*ptr && isdigit(*ptr))
		{
			++ptr;
		}
	}
	return *ptr == '\0';
}

bool		Convert::isFloat() const
{
	if (this->_sourceStr == "nanf" || this->_sourceStr == "+inff" || this->_sourceStr == "-inff"
		|| (this->isFloatPointNmb() && this->_sourceStr[this->_sourceStr.length() - 1] == 'f'))
	{
		return true;
	}
	return false;
}

bool	Convert::isDouble() const
{
	if (this->_sourceStr == "nan" || this->_sourceStr == "+inf" || this->_sourceStr == "-inf"
		|| (this->isFloatPointNmb() && this->_sourceStr[this->_sourceStr.length() - 1] != 'f'))
	{
		return true;
	}
	return false;
}

bool	Convert::isEmpty() const
{
	if (this->_sourceStr.empty())
	{
		return true;
	}
	return false;
}

bool	Convert::isFloatPointNmb() const
{
	bool digitAfterDot = false;
	bool dot = false;
	const char * ptr = this->_sourceStr.c_str();

	if (*ptr == '+' || *ptr == '-')
	{
		++ptr;
	}
	while (*ptr)
	{
		if (isdigit(*ptr) && dot)
		{
			digitAfterDot = true;
		}
		if (*ptr == '.')
		{
			if (dot)
			{
				return false;
			}
			dot = true;
		}
		else if (*ptr == 'f')
		{
			if (*(ptr + 1))
			{
				return false;
			}
			break;
		}
		else if (!isdigit(*ptr))
		{
			return false;
		}
		++ptr;
	}
	if (!digitAfterDot)
	{
		return false;
	}
	return true;
}

void	Convert::convertCharStr() const
{
	char c = this->_sourceStr[0];

	std::cout	<< std::fixed << std::setprecision(1)
				<< "char: " << c << std::endl
				<< "int: " << static_cast<int>(c) << std::endl
				<< "float: " << static_cast<float>(c) << 'f' << std::endl
				<< "double: " << static_cast<double>(c) << std::endl;
}

void	Convert::convertIntStr() const
{
	char * end;

	errno = 0;
	long int longRes = strtol(this->_sourceStr.c_str(), &end, 10);
	if ((errno == ERANGE && longRes == std::numeric_limits<long int>::max())
		|| longRes > std::numeric_limits<int>::max())
	{
		std::cout << "Can't convert this INTEGER, because - OVERFLOW" << std::endl;
		return;
	}
	if ((errno == ERANGE && longRes == std::numeric_limits<long int>::min())
		|| longRes < std::numeric_limits<int>::min())
	{
		std::cout << "Can't convert this INTEGER, because - UNDERFLOW" << std::endl;
		return;
	}
	int intRes = static_cast<int>(longRes);
	std::cout	<< std::fixed << std::setprecision(1)
				<< "char: " << truncateToChar(intRes) << std::endl
				<< "int: " << intRes << std::endl
				<< "float: " << static_cast<float>(intRes) << 'f' << std::endl
				<< "double: " << static_cast<double>(intRes) << std::endl;
}

void	Convert::convertFloatStr() const
{
	char * end;

	errno = 0;
	double dbl = strtod(this->_sourceStr.c_str(), &end);

	if (errno == ERANGE && fabs(dbl) == HUGE_VAL)
	{
		std::cout << errno << " ";
		std::cout << "Can't convert this FLOAT, because - OVERFLOW" << std::endl;
		return;
	}
	if (errno == ERANGE && fabs(dbl) <= DBL_MIN)
	{
		std::cout << "Can't convert this FLOAT, because - UNDERFLOW" << std::endl;
		return;
	}
	if (std::isfinite(dbl))
	{
		if (dbl > FLT_MAX)
		{
			std::cout << "Can't convert this FLOAT, because - OVERFLOW" << std::endl;
			return;
		}
		if (dbl < -FLT_MAX)
		{
			std::cout << "Can't convert this FLOAT, because - UNDERFLOW" << std::endl;
			return;
		}
	}
	float fltRes = static_cast<float>(dbl);
	//какая-то ебала
	if (ceilf(fltRes) == fltRes)
	{
		std::cout << std::fixed << std::setprecision(1);
	}
	std::cout	<< "char: " << truncateToChar(static_cast<double>(fltRes)) << std::endl
				<< "int: " << truncateToInt(static_cast<double>(fltRes)) << std::endl
				<< "float: " << fltRes << 'f' << std::endl
				<< "double: " << dbl << std::endl;
}

void	Convert::convertDoubleStr() const
{
	char * end;

	errno = 0;
	double dblRes = strtod(this->_sourceStr.c_str(), &end);

	if (errno == ERANGE && fabs(dblRes) == HUGE_VAL)
	{
		std::cout << "Can't convert this DOUBLE, because - OVERFLOW" << std::endl;
		return;
	}
	if (errno == ERANGE && fabs(dblRes) <= DBL_MIN)
	{
		std::cout << "Can't convert this DOUBLE, because - UNDERFLOW" << std::endl;
		return;
	}
	if (ceil(dblRes) == dblRes)
	{
		std::cout << std::fixed << std::setprecision(1);
	}
	std::cout	<< "char: " << truncateToChar(dblRes) << std::endl
				<< "int: " << truncateToInt(dblRes) << std::endl
				<< "float: " << truncateToFloat(dblRes) << ((dblRes > FLT_MAX || dblRes < -FLT_MAX) ? '\0' : 'f') << std::endl
				<< "double: " << dblRes << std::endl;
}

std::string	Convert::truncateToChar(int integer) const
{
	std::string str;

	if (integer > std::numeric_limits<char>::max()
		|| integer < std::numeric_limits<char>::min())
	{
		str = "Overflow!";
	}
	else
	{
		char c = static_cast<char>(integer);
		if (isprint(c))
		{
			str = "'";
			str += c;
			str += "'";
		}
		else
		{
			str = "Non displayable";
		}
	}
	return str;
}

std::string	Convert::truncateToChar(double dbl) const
{
	std::string str;
	
	if (!std::isfinite(dbl))
	{
		str = "impossible";
	}
	else if (dbl > std::numeric_limits<char>::max()
		|| dbl < std::numeric_limits<char>::min())
	{
		str = "Overflow!";
	}
	else
	{
		char c = static_cast<char>(dbl);
		if (isprint(c))
		{
			str = "'";
			str += c;
			str += "'";
		}
		else
		{
			str = "Non displayable";
		}
	}
	return str;
}

std::string	Convert::truncateToInt(double dbl) const
{
	std::string str;
	
	if (!std::isfinite(dbl))
	{
		str = "impossible";
	}
	else if (dbl > std::numeric_limits<int>::max()
		|| dbl < std::numeric_limits<int>::min())
	{
		str = "Overflow!";
	}
	else
	{
		int i = static_cast<int>(dbl);
		std::ostringstream ss;
     	ss << i;
		str = ss.str();
	}
	return str;
}


std::string	Convert::truncateToFloat(double dbl) const
{
	std::string str;
	
	if (std::isfinite(dbl) && (dbl > FLT_MAX || dbl < -FLT_MAX))
	{
		str = "Overflow!";
	}
	else
	{
		float flt = static_cast<float>(dbl);
		std::ostringstream ss;
		if (ceilf(flt) == flt)
		{
			ss << std::fixed << std::setprecision(1);
		}
     	ss << flt;
		str = ss.str();
	}
	return str;
}
