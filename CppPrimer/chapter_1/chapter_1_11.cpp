#include <iostream>

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    if (num1 < num2)
    {
        while (num1 <= num2)
        {
            std::cout << "num1 - num2 : " << num1++ << std::endl;
        }
    }
    else
    {
        std::cout << "num1 must smaller than num2 !!!" << std::endl;
    }
}
