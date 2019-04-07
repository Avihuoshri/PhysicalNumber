#include <iostream>
#include <string>
#include "PhysicalNumber.h"
#include "Unit.h"

using namespace std;
using namespace ariel;
class PhysicalNumber
{
	double number ;
    Unit type ;
	PhysicalNumber(double num, Unit t)
	{
		number = num;
		type = t;
	}

	//"+" onary
	const PhysicalNumber operator+() const
	{
		return PhysicalNumber(0, Unit::KM);
	}

	//"-" onary
	const PhysicalNumber operator-() const
	{
		return PhysicalNumber(0, Unit::KM);
	}

	// "+" operator
	PhysicalNumber operator+(const PhysicalNumber& num)
	{/*
		int groupTypeNum1 = this->type/3 ;
		int groupTypeNum2 = num.type/3 ;

		*/

		/*if (groupTypeNum1 != groupTypeNum2)
		{
			throw std::invalid argument("ERROR : can't add two numbers with different types");
		}*/
		return PhysicalNumber(0, Unit::KM);
	}

	// "-" operator
	PhysicalNumber operator-(const PhysicalNumber& num1)
	{
		return PhysicalNumber(0, Unit::KM);

	}

	// "+=" operator
	PhysicalNumber& operator+=(const PhysicalNumber& size)
	{
		return *this;

	}
	// "-=" operator
	PhysicalNumber& operator-=(const PhysicalNumber& size)
	{
		return *this;

	}
	// "=" operator
	PhysicalNumber& operator=(const PhysicalNumber& size)
	{
		return *this;

	}

	// "==" operator
	const bool ariel::operator==(const PhysicalNumber& num1)
	{
		return false;

	}
	// "!=" operator
	const bool operator!=(const PhysicalNumber& num1)
	{
		return false;

	}
	// ">=" operator
	const bool operator>=(const PhysicalNumber& num1)
	{
		return false;

	}
	// "<=" operator
	const bool operator<=(const PhysicalNumber& num1)
	{
		return false;

	}
	// ">" operator
	const bool operator>(const PhysicalNumber& num1)
	{
		return false;

	}
	// "<" operator
	const bool operator<(const PhysicalNumber& num1)
	{
		return false;

	}

	// "++" operator
	PhysicalNumber& operator++()
	{
		return *this;

	}
	//"--"  operator
	PhysicalNumber& operator--()
	{
		return *this;

	}

	//"<<" operator - output stream
	ostream& ariel::operator<<( ostream& os )
	{
		return os;
	}

	//">>" operator - input stream
	istream& operator>>( istream& is , PhysicalNumber num)
	{
		return is;

	}

    int main(int argc, char const *argv[])
    {
        /* code */
        return 0;
    }


};