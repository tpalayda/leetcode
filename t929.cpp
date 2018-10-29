#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <set>

//929. Unique Email Addresses
/*
Every email consists of a local name and a domain name, separated by the @ sign.

For example, in alice@leetcode.com, alice is the local name, and leetcode.com is the domain name.

Besides lowercase letters, these emails may contain '.'s or '+'s.

If you add periods ('.') between some characters in the local name part of an email address, mail sent there will be forwarded to the same address without dots in the local name.  For example, "alice.z@leetcode.com" and "alicez@leetcode.com" forward to the same email address.  (Note that this rule does not apply for domain names.)

If you add a plus ('+') in the local name, everything after the first plus sign will be ignored. This allows certain emails to be filtered, for example m.y+name@email.com will be forwarded to my@email.com.  (Again, this rule does not apply for domain names.)

It is possible to use both of these rules at the same time.

Given a list of emails, we send one email to each address in the list.  How many different addresses actually receive mails? 
*/

unsigned numUniqueEmails(const std::vector<std::string>& emails)
{
    std::set<std::string> actualEmails;
    for(const std::string& email : emails)
    {
        bool isDomain = false;
        bool isPlus = false;
        std::string localName;
        std::string domainName;
        for(const char& ch : email)
        {
            if(!isDomain)
            {
                if(ch == '@')
                    isDomain = true, domainName += ch;
                else if(ch == '.') continue;
                else if(ch == '+') isPlus = true;
                else if(!isPlus)
                    localName += ch;
            }
            else
                    domainName += ch;
        }
        actualEmails.emplace(localName + domainName);
    }
    return actualEmails.size();
}

int main()
{
    std::cout << numUniqueEmails({"test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"}) << std::endl;    
}
