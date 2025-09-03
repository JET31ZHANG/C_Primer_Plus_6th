/* Exercise_Ch08_05.c --  */

/*
 *  修改程序清单8.4的猜数字程序，使用更智能的猜测策略。
 *  例如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。
 *  如果猜小了，那么下一次猜测的值应该是50和100中值，也就是75。
 *  如果这次猜大了，那么下一次猜测的值应是50和75的中值，等等。
 *  使用二分查找（binary search）策略，如果用户没有欺骗程序，
 *  那么程序很快就会猜到正确的答案。
 * */

/*
 *  二分查找通过被查找数与区间的中值的大小关系判断，不断缩小查找范围。
 *  其查找效率要高于程序清单 8.4。
 *  二分查找算法的重点：不断缩小目标数据所在的区间。
 *  因此需要修改区间的起始位置和终止位置，并由此得到中值，
 *  然后让用户判断与选择目标数和中值的关系，最终返回查找结果。
 * */

#include <stdio.h>

int main(void)
{
    int low = 1;
    int high = 100;
    int guess = (high + low) / 2;
    
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");

    while ()
    {
        
    }

    printf("The number is %d. I knew I could do it!\n", guess);

    return 0;
}