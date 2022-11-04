#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <sstream>
#include <limits>
#include <iomanip>
#include <cerrno>
#include <cfloat>
#include <cmath>
#include <ctype.h>

class Convert
{

public:

	Convert();
	Convert(const std::string& str);
	Convert(const Convert& src);
	~Convert();

	const Convert&	operator=(const Convert& src);

	void				convert() const;
	const std::string&	getSourceStr() const;
	void				setSourceStr(const std::string& str);


private:

	enum	OrigType
	{
		charType,
		integerType,
		floatType,
		doubleType,
		undefinedType,
		empty
	};

	std::string	_sourceStr;

	OrigType	checkOrigType() const;
	bool		isChar() const;
	bool		isInt() const;
	bool		isFloat() const;
	bool		isDouble() const;
	bool		isEmpty() const;
	bool		isFloatPointNmb() const;

	void		convertCharStr() const;
	void		convertIntStr() const;
	void		convertFloatStr() const;
	void		convertDoubleStr() const;

	std::string	truncateToChar(int integer) const;
	std::string	truncateToChar(double dbl) const;

	std::string	truncateToInt(double dbl) const;

	std::string	truncateToFloat(double dbl) const;

};

#endif
