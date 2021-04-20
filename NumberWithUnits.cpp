#include <stdio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <stdbool.h>
#include "NumberWithUnits.hpp"
using namespace std;
using namespace ariel;


namespace ariel 
{
   
    
    void NumberWithUnits::read_units(std::ifstream &units_file){};
    NumberWithUnits::NumberWithUnits (double dou , string str)
    {
        this->d=dou;
        this->s=str;
    }
    NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& num){return *this;}
    NumberWithUnits NumberWithUnits::operator+=(const NumberWithUnits& num){return *this;}
    NumberWithUnits NumberWithUnits::operator+(){return *this;}
    NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& num){return *this;}
    NumberWithUnits NumberWithUnits::operator-=(const NumberWithUnits& num){return *this;}
    NumberWithUnits NumberWithUnits::operator-(){return *this;}
    bool  operator<(const NumberWithUnits& num , const NumberWithUnits& num1){return true;}
    bool  operator<=(const NumberWithUnits& num , const NumberWithUnits& num1){return true;}
    bool  operator>(const NumberWithUnits& num , const NumberWithUnits& num1){return true;}
    bool  operator>=(const NumberWithUnits& num , const NumberWithUnits& num1){return true;}
    bool  operator!=(const NumberWithUnits& num , const NumberWithUnits& num1){return true;}
    bool  operator==(const NumberWithUnits& num , const NumberWithUnits& num1){return true;}
    NumberWithUnits NumberWithUnits::operator++(){ return *this;}
    NumberWithUnits NumberWithUnits::operator--(){ return *this;}
    NumberWithUnits NumberWithUnits::operator++(int x){return *this;}
    NumberWithUnits NumberWithUnits::operator--(int x){return *this;}
    // const operator*(double x, NumberWithUnits n){return  n.d * x);}
    const NumberWithUnits operator*(const double x, const NumberWithUnits &n){return NumberWithUnits( n.d * x, n.s);}
    const NumberWithUnits operator*(const NumberWithUnits &n, const double x){return NumberWithUnits( n.d * x, n.s);}

    istream& operator>>(std::istream &is,const NumberWithUnits& num){return is;}
    ostream& operator<<(std::ostream &os,const NumberWithUnits& num){return os;}

}