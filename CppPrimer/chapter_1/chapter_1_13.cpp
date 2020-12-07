#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout << "sum is " << sum << std::endl;
    return 0;
}

int main()
{
    for (int i = 10; i >= 0; i--)
    {
        std::cout << "num is " << i << std::endl;
    }
    return 0;
}

int main()
{
    int num1, num2;
    std::cin >> num1 >> num2;
    if (num1 < num2)
    {
        for (int i = num1; i <= num2; i++)
        {
            std::cout << "num is " << i << std::endl;
        }
    }
    else
    {
        std::cout << "num1 must smaller than num2 !!!" << std::endl;
    }

    return 0;
}
