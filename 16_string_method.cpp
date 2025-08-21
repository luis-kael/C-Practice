#include <iostream>

int main()
{
    std::string name;

    std::cout << " Enter your name: ";
    std::getline(std::cin, name);

    // if(name.empty()){}
    // if (name.length() > 12){}
    // name.append("@gmail.com");
    // name.clear();
    // std::cout << name.at(0);
    // name.insert(0, "@");
    // std::cout << name.find('  ');
    name.erase(0, 3);

    std::cout << name;

    return 0;
}