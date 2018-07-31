#include <iostream>
#include <vector>

//input є [1,4000)
std::string intToRoman(const unsigned& num)
{
    const std::vector<std::string> fourth_digit = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    const std::vector<std::string> third_digit = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    const std::vector<std::string> second_digit = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    const std::vector<std::string> first_digit = {"","M","MM","MMM"};
    return first_digit[num/1000]+second_digit[num%1000/100]+third_digit[num%100/10]+fourth_digit[num%10];
}

int main()
{
    std::cout << intToRoman(3) << std::endl;
}
