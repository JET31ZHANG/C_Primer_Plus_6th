1. C 语言的基本模块是什么？函数。函数是能够实现特定功能的语句块，当用户按照函数的特定格式完成这个基本模块后，可在后续开发中重复使用这个功能模块，从而提高开发效率。
2. 什么是语法错误？程序设计中的语言不符合 C 语言的语法规范而引起的错误。

- 中文例子：“今天星期一是”（正确写法是“今天是星期一”）

- C语言例子：

  ``````c
  printf('Hello');      // printf("Hello");
  ``````

3. 什么是语义错误？逻辑错误，主要是程序设计中的语句在语法上正确，但在功能和逻辑含义的表达上有错误，从而引起程序的功能或结果出现错误。

- 中文例子：“闰年有365天” （正确写法是“闰年有366天”）

- C语言例子：

  ``````c
  while (i = 1){}       // while (i == 1){}
  ``````

4. Indiana Sloth 编写了下面的程序，并征求你的意见，请帮他评定。

   ``````c
   include studio.h                         // #include <stdio.h>
   int main{void}/* 该程序打印一年有多少周 /*       // int main(void)  /*该程序打印一年有多少周*/
   (                                            // {
    int a                                   // int s;
    s :=56;                                 // s = 52;
    printf(There are a weeks in a year.);   //  printf("There are %d weeks in a year.", s);
    return 0;                               //
                                            // }
   ``````

5. 假设下面的4个例子都是完整程序的一部分，它们分别输出什么结果？
a. printf("Baa Baa Black Sheep.");
   printf("Have you any wool?\n");
b. printf("Begone!\nO Creature of lard!\n");
c. printf("What?\nNo/nfish?\n");
d. int num;
   num = 2;
   printf("%d + %d = %d", num, num, num + num);

6. 在main、int、function、char、=中，那些是 C 语言的关键字？

7. 如何以下面的格式输出变量 words 和 lines 的值（这里，3020 和 350 代表两个变量的值）
There were 3020 words and 350 lines.

8. 考虑下面的程序。请问，在执行完第7、8、9行后，程序的状态分别是什么？
```c
#include <stdio.h>
int main() {
    int a, b;
    a = 5;
    b = 2;      /* 第 7 行 */
    b = a;      /* 第 8 行 */
    a = b;      /* 第 9 行 */
    printf("%d    %d\n", b, a);
    return 0;
}
```

9. 考虑下面的程序。请问，在执行完第7、8、9行后，程序的状态分别是什么？
```c
#include <stdio.h>
int main(void) {
    int x, y;
    x = 10;
    y = 5;
    y = x + y;
    x = x * y;
    printf("%d    %d\n", x, y);
    return 0;
}
```