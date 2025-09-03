/* Exercise_Ch12_09.c --  */

/*
 *  编写一个符合以下描述的函数。
 *  首先，询问用户需要输入多少个单词。
 *  然后，接收用户输入的单词，并显示出来，使用 malloc() 并回答第 1 个问题（即要输入多少个单词），
 *  创建一个动态数组，该书组内含相应的指向 char 的指针（注意，由于数组的每个元素都是指向 char 的指针，
 *  所以用于存储 malloc() 返回值的指针应该是一个指向指针的指针，且它所指向的指针指向 char）。
 *  在读取字符串时，该程序应该把单词读入一个临时的 char 数组，使用 malloc() 分配足够的存储空间来存储单词，
 *  并把地址存入该指针数组（该数组中每个元素都是指向 char 的指针）。然后，从临时数组中把单词拷贝到动态分配的存储空间中。
 *  因此，有一个字符指针数组，每个指针都指向一个对象，该对象的大小正好能容纳被存储的特定单词。
 *  下面是该程序的一个运行示例：
 *  How many words do you wish to enter? 5
 *  Enter 5 words now:
 *  I enjoyed doing this exercise
 *  Here are your words:
 *  I 
 *  enjoyed
 *  doing 
 *  this 
 *  exercise  
 */

/*
 *  
 *  
 */

 #include <stdio.h>

 int main(void)
 {

    return 0;
 }