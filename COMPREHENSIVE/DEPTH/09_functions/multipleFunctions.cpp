#include <iostream>

void a();
void b();
void c();

int main(void)
{
    a();
    return 0;
}

void a()
{
    std::cout << "We're in function 'a'. Let's call function 'b'" << std::endl;
    b();
}

void b()
{
    std::cout << "We're in function 'b'. Let's call function 'c'" << std::endl;
    c();
}

void c()
{
    std::cout << "We're in function 'c'." << std::endl;
}