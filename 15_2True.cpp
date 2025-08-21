// && = check if two condition are true
// || = check if at least one of two conditions is true
// !  = reverse the logical state of its operand

#include <iostream>

int main()
{

    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // if (temp > 0 && temp < 30)
    if (temp <= 0 || temp >= 30)
    {
        std::cout << "temperature is bad!\n";
    }
    else
    {
        std::cout << "tempreture is good!\n";
    }

    if (!sunny)
    {
        std::cout << "It is cloudy outside!";
    }
    else
    {
        std::cout << "It is sunny outside";
    }

    return 0;
}