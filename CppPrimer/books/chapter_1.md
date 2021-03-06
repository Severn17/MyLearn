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

1.8练习: 指出下列那些输出语句是合法的(如果有的话)

![image-20201207142142819](F:\Github\MyGithub\MyLearn\CppPrimer\image\image-20201207142142819.png)

第三句是错误的，改成

```c++
std::cout << /* "*/" */";
```

1.9练习: 编写程序，使用while循环将50到100的整数相加

```c++
#include <iostream>

int main()
{
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val;
        val++;
        /* code */
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    /* code */
    return 0;
}
```

1.10练习:除了`++`运算符将运算对象的值增加1之外，还有一个递减运算符`--`实现将值减少1.编写程序与，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。

```c++
#include <iostream>

int main()
{
    int val = 10;
    while (val >= 0)
    {
        std::cout << "val is " << val << std::endl;
        val--;
    }
    return 0;
}
```

1.11练习: 编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。

```c++
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
```

1.12练习: 下面for循环完成了什么功能？sum的终值是多少?

```c++
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 0; i <= 100; ++i)
    {
        sum += i;
    }
    std::cout << "sum is " << sum << std::endl;
    return 0;
}
```

1到100的整数相加，终值为5050

1.13练习: 使用for循环重做1.4.1节中的所有练习

练习1.9

```c++
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
```

练习1.10

```c++
#include <iostream>

int main()
{
    for (int i = 10; i >= 0; i--)
    {
        std::cout << "num is " << i << std::endl;
    }
    return 0;
}
```

练习1.11

```c++
#include <iostream>
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
```

1.14练习:对比for循环和while循环,两种形式的优缺点各是什么?

```markdown
The main difference between the `for`'s and the `while`'s is a matter of pragmatics: 
we usually use `for` when there is a known number of iterations, 
and use `while` constructs when the number of iterations in not known in advance. 
The `while` vs `do ... while` issue is also of pragmatics, 
the second executes the instructions once at start, 
and afterwards it behaves just like the simple `while`.
```

1.15练习:编写程序,包含第14页 "再探编译" 中讨论的常见错误.熟悉编译器生成的错误信息。

```markdown
编译器可以检查出的错误有：

语法错误
类型错误
声明错误
```

1.16练习: 编写程序,从cin读取一组数,输出其和。

```c++
#include <iostream>
int main()
{
    int sum = 0;
    for (int value = 0; std::cin >> value;)
    {
        sum += value;
    }
    std::cout << sum << std::endl;
    return 0;
}
```

