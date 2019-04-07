#include <iostream>
#include "Unit.h"
using std::istream,std::ostream ; 


namespace ariel 
{
    class PhysicalNumber
    {

       
        

        public:
         Unit type ;
         double number ;
       
         //constructor
        PhysicalNumber(double number , Unit type) ;

        //"+" onary
        const PhysicalNumber operator+() const;
        
        //"-" onary
        const PhysicalNumber operator-() const;
       
        // "+" operator
        PhysicalNumber operator+(const PhysicalNumber& num1 ) ;
        
        // "-" operator
        PhysicalNumber operator-(const PhysicalNumber& num1 ) ;

        // "+=" operator
        PhysicalNumber& operator+=(const PhysicalNumber& size) ;
        // "-=" operator
        PhysicalNumber& operator-=(const PhysicalNumber& size) ;
        // "=" operator
        PhysicalNumber& operator=(const PhysicalNumber& size) ;

        // "==" operator
        friend const bool operator==(const PhysicalNumber& num1 ,const PhysicalNumber& num2)  ;
        // "!=" operator
        friend const bool operator!=(const PhysicalNumber& num1 ,const PhysicalNumber& num2)  ;
        // ">=" operator
        friend const bool operator>=(const PhysicalNumber& num1 ,const PhysicalNumber& num2)  ;
        // "<=" operator
        friend const bool operator<=(const PhysicalNumber& num1 ,const PhysicalNumber& num2)  ;
        // ">" operator
        friend const bool operator>( const PhysicalNumber& num1 ,const PhysicalNumber& num2)  ;
        // "<" operator
        friend const bool operator<( const PhysicalNumber& num1 ,const PhysicalNumber& num2)  ;
        
        // "++" operator
        PhysicalNumber& operator++();
        //"--"  operator
        PhysicalNumber& operator--();

        //"<<" operator - output
        friend ostream& operator<<(ostream &os, const PhysicalNumber& num);

        //">>" operator - input
        friend istream& operator>>(istream &is, PhysicalNumber& num);
    };



}
 
