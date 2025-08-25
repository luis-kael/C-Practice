#include <iostream>

int main()
{
    // std::string students[] = {"Spongbob", "Patrick", "Squidward"};
    int grades[] = {65, 72, 81, 92};

    for (int grade : grades)
    {
        std::cout << grade << '\n';
    }
    return 0;
}