
#include <iostream>
#include <string>
#include "PhysicalNumber.h"
#include "Unit.h"

using namespace std ;
using namespace ariel;
class PhysicalNumber
{
double number ;
int type ;
    PhysiclNumber::PhysicalNumber(double num , Unit t)
    {
       number = num ;
       type  = t ;
    }

     //"+" onary
        const PhysicalNumber PhysicalNumber::operator+() const;
        
        //"-" onary
        const PhysicalNumber PhysicalNumber::operator-() const;
       
        // "+" operator
        PhysicalNumber PhysicalNumber::operator+(const PhysicalNumber& num) 
        {
            int groupTypeNum1 = this->type / 3 ;
            int groupTypeNum2 = num. ;
            

            if(groupTypeNum1 != groupTypeNum2)
            {
                throw std::invalid argument("ERROR : can't add two numbers with different types");
            }
        }
        
        // "-" operator
        PhysicalNumber PhysicalNumber::operator-(const PhysicalNumber& num1 ,const PhysicalNumber& num2) ;
        {
    
        }

        // "+=" operator
        PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& size) ;
        {

        }
        // "-=" operator
        PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber& size) 
        {

        }
        // "=" operator
        PhysicalNumber& PhysicalNumber::operator=(const PhysicalNumber& size) 
        {

        }

        // "==" operator
        const bool PhysicalNumber::operator==(const PhysicalNumber& num1 ,const PhysicalNumber& num2)  
        {

        }
        // "!=" operator
        const bool PhysicalNumber::operator!=(const PhysicalNumber& num1 ,const PhysicalNumber& num2) 
        {
            
        }
        // ">=" operator
        const bool PhysicalNumber::operator>=(const PhysicalNumber& num1 ,const PhysicalNumber& num2) 
        {
            
        }
        // "<=" operator
        const bool PhysicalNumber::operator<=(const PhysicalNumber& num1 ,const PhysicalNumber& num2) 
        {
            
        }
        // ">" operator
        const bool PhysicalNumber::operator>( const PhysicalNumber& num1 ,const PhysicalNumber& num2)  
        {
            
        }
        // "<" operator
        const bool PhysicalNumber::operator<( const PhysicalNumber& num1 ,const PhysicalNumber& num2)  
        {
            
        }
        
        // "++" operator
        PhysicalNumber& PhysicalNumber::operator++()
        {
            
        }
        //"--"  operator
        PhysicalNumber& PhysicalNumber::operator--()
        {
            
        }

        //"<<" operator - output stream
         ostream& ariel::operator<<(ostream &os, const PhysicalNumber& num)
         {
            
         }

        //">>" operator - input stream
         istream& ariel::operator>>(istream &is, PhysicalNumber& num)
         {
            
         }

   

};


