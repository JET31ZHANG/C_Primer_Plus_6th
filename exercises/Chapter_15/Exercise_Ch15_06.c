/* Exercise_Ch15_06.c --  */

/*
 *  设计一个位字段结构以存储下面的信息。
 *  
 *  字体ID：0~255之间的一个数；  
 *  字体大小：0~127之间的一个数；  
 *  对齐：0~2之间的一个数，表示左对齐、居中、右对齐；  
 *  加粗：开（1）或闭（0）；  
 *  斜体：开（1）或闭（0）； 
 *  
 *  在一个程序中使用该结构体来打印字体参数，并使用循环菜单来让用户改变参数。
 *  例如，该程序的一个运行示例如下：
  ID SIZE ALIGNMENT   B   I   U
   1   12   left     off off off
f)change font    s)change size    a)change alignment
b)toggle bold    i)toggle italic  u)toggle underline
q)quit
s
Enter font size (0-127):36

  ID SIZE ALIGNMENT   B   I   U
   1   36   left     off off off
f)change font    s)change size    a)change alignment
b)toggle bold    i)toggle italic  u)toggle underline
q)quit
a
Select alignment:
1)left   c)center   r)right
r

  ID SIZE ALIGNMENT   B   I   U
   1   36  right     off off off
f)change font    s)change size    a)change alignment
b)toggle bold    i)toggle italic  u)toggle underline
q)quit
i

  ID SIZE ALIGNMENT   B   I   U
   1   36  right     off  on off
f)change font    s)change size    a)change alignment
b)toggle bold    i)toggle italic  u)toggle underline
q)quit
q
Bye!
 *  该程序要使用按位与运算符（&）和合适的掩码来把字体ID和字体大小信息转换到指定的范围内。
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
