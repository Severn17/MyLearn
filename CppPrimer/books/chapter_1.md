## 第一章笔记
```c++
// 头文件
#include <iostream>

int main()
{
    // （<<）输出运算符
    //  (::)作用域运算符
    //  std::cin 读取输入
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout <<"The sum of "<< v1 << " and " << v2 << " is "<< v1 + v2<<std::endl;
    /* code */
    return 0;
}
```

1.3练习: 编写程序，在标准输出上打印hello，world。

```c++
#include <iostream>

int main()
{
    std::cout << "Hello,World" << std::endl;
    return 0;
}
```

1.4练习: 我们的程序使用加法运算符+来将两个数相加。编写程序使用乘法运算符*，来打印两个数的积.

```c++
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int x = 0, y = 0;
    std::cin >> x >> y;
    std::cout << "The mul of " << x << " mul " << y << " is " << x * y;
    /* code */
    return 0;
}
```

1.5练习: 我们将所有输出操作放在一条很长的语句中。重写程序，将每个运算对象的打印操作放在一条独立的语句中。

```c++
#include <iostream>

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int x = 0, y = 0;
    std::cin >> x >> y;
    std::cout << "The mul of ";
    std::cout << x;
    std::cout << " mul ";
    std::cout << y;
    std::cout << " is ";
    std::cout << x * y;
    /* code */
    return 0;
}
```

1.6练习: 解释下面程序片段是否合法

![image-20201202151059210](https://github.com/Severn17/MyLearn/blob/main/CppPrimer/image/image-20201202151059210.png?raw=true)

答: 不合法，多余的分号

```c++
std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << stu::endl;
```

1.7练习: 编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息

![image-20201207111148432](https://github.com/Severn17/MyLearn/blob/main/CppPrimer/image/image-20201207111148432.png?raw=true)



