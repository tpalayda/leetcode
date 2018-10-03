#include <iostream>
#include <cmath>
#include <string>

// 166. Fraction to Recurring Decimal
// Given two integers representing the numerator and denominator of a fraction, return the fraction in string format.
// If the fractional part is repeating, enclose the repeating part in parentheses.

std::string fractionToDecimal(const int& numerator, const int& denominator) 
{
    std::string decimalString;
    if(numerator < denominator);
//        decimalString = "0.";
    double result = numerator*1.0/denominator;
    std::cout << fmod(result,10) << std::endl;
    return decimalString;
}

int main()
{
    std::cout << fractionToDecimal(1, 2) << std::endl; // "0.5"
    std::cout << fractionToDecimal(2, 1) << std::endl; // "2"
    std::cout << fractionToDecimal(2, 3) << std::endl; // "0.(6)"
}
