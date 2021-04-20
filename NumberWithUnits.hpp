#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;
//using namespace ariel;

namespace ariel{
    class NumberWithUnits
    {
        public:
            string s;
            double d;
            NumberWithUnits (double dou , string str);

            static void read_units(std::ifstream& );
            NumberWithUnits operator+(const NumberWithUnits& num);
            NumberWithUnits operator+=(const NumberWithUnits& num);
            NumberWithUnits operator+();
            NumberWithUnits operator-(const NumberWithUnits& num);
            NumberWithUnits operator-=(const NumberWithUnits& num);
            NumberWithUnits operator-();
            friend bool operator<(const NumberWithUnits& num , const NumberWithUnits& num1);
            friend bool operator<=(const NumberWithUnits& num , const NumberWithUnits& num1);
            friend bool operator>(const NumberWithUnits& num , const NumberWithUnits& num1);
            friend bool operator>=(const NumberWithUnits& num , const NumberWithUnits& num1);
            friend bool operator!=(const NumberWithUnits& num , const NumberWithUnits& num1);
            friend bool operator==(const NumberWithUnits& num , const NumberWithUnits& num1);
            NumberWithUnits operator++();
            NumberWithUnits operator--();
            NumberWithUnits operator++(int x);
            NumberWithUnits operator--(int x);
            friend const NumberWithUnits operator*(const double x, const NumberWithUnits &n);
            friend const NumberWithUnits operator*(const NumberWithUnits &n, const double x);
            friend istream& operator>>(istream& is,const NumberWithUnits& num);
            friend ostream& operator<<(ostream& os,const NumberWithUnits& num);
    };
}