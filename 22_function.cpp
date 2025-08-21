#include <iostream>

void happybirthday(std::string name, int age);

int main()
{
    // function = a block of reuseable code
    std::string name = "Bro";
    int age = 21;

    happybirthday(name, age);

    return 0;
}

void happybirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old\n";
}