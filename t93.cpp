#include <iostream>
#include <string>
#include <vector>
#include <iterator>

// 93. Restore IP Addresses
// Given a string containing only digits, restore it by returning all possible valid IP address combinations.
std::vector<std::string> restoreIpAddresses(const std::string& s)
{
    std::vector<std::string> ipAddresses;
    std::string ip;
    for(unsigned a = 1; a < 4; ++a)
        for(unsigned b = 1; b < 4; ++b)
            for(unsigned c = 1; c < 4; ++c)
                for(unsigned d = 1; d < 4; ++d)
                    if(a+b+c+d == s.length())
                    {
                        /*
                        std::string s1 = s.substr(0, a);
                        std::string s2 = s.substr(a, b);
                        std::string s3 = s.substr(a + b, c);
                        std::string s4 = s.substr(a + b + c, d);
                        if(std::stoi(s1) < 256 && std::stoi(s2) < 256 && std::stoi(s3) < 256 && std::stoi(s4) < 256)
                            if((ip = s1 + "." + s2 + "." + s3 + "." + s4).size() == s.size() + 3)
                                ipAddresses.emplace_back(ip); */
                        int s1 = std::stoi(s.substr(0, a));
                        int s2 = std::stoi(s.substr(a, b));
                        int s3 = std::stoi(s.substr(a + b, c));
                        int s4 = std::stoi(s.substr(a + b + c, d));
                        if (s1 < 256 && s2 < 256 && s3 < 256 && s4 < 256)
                            if ((ip = std::to_string(s1) + "." + std::to_string(s2) + "." +std::to_string(s3) + "." + std::to_string(s4)).size() == s.size() + 3)
                                ipAddresses.emplace_back(ip);
                    }
    return ipAddresses;
}

int main()
{
    std::vector<std::string> result = restoreIpAddresses("010010");
    std::copy(result.begin(), result.end(), std::ostream_iterator<std::string>(std::cout, "\n"));
}
