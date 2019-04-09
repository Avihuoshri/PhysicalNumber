#include <iostream>
#include <string>
#include "PhysicalNumber.h"
#include "Unit.h"

using namespace std;
using namespace ariel;

	//double number ;
        //Unit type ;
	PhysicalNumber::PhysicalNumber(double num, Unit t)
	{
		number = num;
		type = t;
	}

	//"+" onary
	const PhysicalNumber PhysicalNumber::operator+() const
	{
		return PhysicalNumber(0, Unit::KM);
	}

	//"-" onary
	const PhysicalNumber PhysicalNumber::operator-() const
	{
		return PhysicalNumber(0, Unit::KM);
	}

	// "+" operator
	PhysicalNumber PhysicalNumber::operator+(const PhysicalNumber& num)
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
	PhysicalNumber PhysicalNumber::operator-(const PhysicalNumber& num1)
	{
		return PhysicalNumber(0, Unit::KM);

	}

	// "+=" operator
	PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& size)
	{
		return *this;

	}
	// "-=" operator
	PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber& size)
	{
		return *this;

	}
	// "=" operator
	PhysicalNumber& PhysicalNumber::operator=(const PhysicalNumber& size)
	{
		return *this;

	}

	// "==" operator
	const bool PhysicalNumber::operator==(const PhysicalNumber& num1)
	{
		return false;

	}
	// "!=" operator
	const bool PhysicalNumber::operator!=(const PhysicalNumber& num1)
	{
		return false;

	}
	// ">=" operator
	const bool PhysicalNumber::operator>=(const PhysicalNumber& num1)
	{
		return false;

	}
	// "<=" operator
	const bool PhysicalNumber::operator<=(const PhysicalNumber& num1)
	{
		return false;

	}
	// ">" operator
	const bool PhysicalNumber::operator>(const PhysicalNumber& num1)
	{
		return false;

	}
	// "<" operator
	const bool PhysicalNumber::operator<(const PhysicalNumber& num1)
	{
		return false;

	}

	// "++" operator
	PhysicalNumber& PhysicalNumber::operator++()
	{
		return *this;

	}
	//"--"  operator
	PhysicalNumber& PhysicalNumber::operator--(int num)
	{
             --this->number;
             return *this;

	}
        // "++" operator
	PhysicalNumber& PhysicalNumber::operator++(int num)
	{
	     ++this->number;
             return *this;

	}
	//"--"  operator
	PhysicalNumber& PhysicalNumber::operator--()
	{
		return *this;

	}
	//"<<" operator - output stream
	ostream& ariel::operator<<(ostream& os,const PhysicalNumber& num)
	{
		return os;
	}

	//">>" operator - input stream
	istream& ariel::operator>>(istream& is,PhysicalNumber& num)
	{
		return is;

	}

   



