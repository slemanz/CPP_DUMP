#include <iostream>
#include <string>

int main(void)
{
    // String is an array of characters
    std::string s = "Hello world!";
    std::cout << s << std::endl;

    int stringL = s.length();
    char c = s[0];
    std::cout << c << s[1] << s[2] << s[3] << s[4] << std::endl;
    std::cout << "Length of string 's': " << stringL << std::endl;
    
    s[1] = 'a';
    s[(stringL - 1)] = '.';
    std::cout << s << std::endl;

    std::string s2 = "Ola";
    s2 += " Mundo";
    std::cout << s2 << std::endl;

    s2.append("!!!");
    std::cout << s2 << std::endl;

    return 0;
}