#include <iostream>

int main()
{
    std::string name;
    int age;

    std::cout << "What's your Full name?: ";
    std::getline(std::cin, name); //(std::cin >> std ::ws,name) if under

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";
    return 0;
}