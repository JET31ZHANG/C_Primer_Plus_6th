/* Exercise_Ch02_08.c --  */

/*
在C语言中，一个函数可以调用另一个函数。编写一个程序，用于调用一个名为 one_three() 函数，该函数在一行打印 “One”，再调用另一个函数 two()，然后在另一行打印单词“three”。two() 函数在一行显示单词 “two”。main()函数在调用 one_three() 函数前要打印短语 “Starting now:”，并在调用完毕后显示短语 “Done!” 。因此，该程序的输出应如下所示：

``````
Starting now:
one
two
three
done!
``````
*/

#include <stdio.h>

int one_three(void);
int two(void);

int main(void)
{
    printf("Starting now:\n");
    one_three();
    printf("done!\n");
    return 0;
}

int one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
    return 0;
}

int two(void)
{
    printf("two\n");
    return 0;
}

/* Output:
Starting now:
one
two
three
done!
*/