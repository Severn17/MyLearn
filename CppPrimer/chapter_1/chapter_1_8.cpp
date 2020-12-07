#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    //std::cout << /* "*/" */;
    std::cout << /* "*/" /* "/*" */;

    std::cout << /* "*/" */";
    /* code */
    return 0;
}
