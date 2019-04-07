#include <iostream>
#include <string> 
using namespace std ;


double number ;

enum unit  {
                CM , //
                M     , // DISTANCE
                KM  , //
                SEC    , //
                MIN     , // TIME
                HOUR       , // 
                G       , //
                KG   , // WEIGHT
                TON          // 
            } ; 

int printUnit()
{
    cout<<CM<<endl;
}

int main(int argc, char const *argv[])
{
    
printUnit();
    return 0;
}
