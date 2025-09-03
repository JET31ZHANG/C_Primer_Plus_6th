/* Ch09_09_usehotel.c -- 房间费率程序 */
//

#include <stdio.h>
#include "hotel.h"      /* 定义符号常量，声明函数 */ 

int main(void)
{
    int nights;
    double hotel_rate;
    int code;

    while((code = menu()) != QUIT)
    {
        switch (code)
        {
            case 1 : hotel_rate = HOTEL1;
                break;
            case 2 : hotel_rate = HOTEL2;
                break;
            case 3 : hotel_rate = HOTEL3;
                break;
            case 4 : hotel_rate = HOTEL4;
                break;
            default : hotel_rate = 0.0;
                printf("Oops!\n");
                break;
        }
        nights = getnights();
        showprice(hotel_rate, nights);
    }
    printf("Thank you and goodbye.\n");

    return 0;
}

/*
* Output:

********************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms           2) Hotel Olympic
3) Chertworthy Plaza        4) The Stockton
5) quit
********************************************************************
3
How many nights are needed? 1
The total cost will be $225.00.

********************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms           2) Hotel Olympic
3) Chertworthy Plaza        4) The Stockton
5) quit
********************************************************************
4
How many nights are needed? 3
The total cost will be $1012.64.

********************************************************************
Enter the number of the desired hotel:
1) Fairfield Arms           2) Hotel Olympic
3) Chertworthy Plaza        4) The Stockton
5) quit
********************************************************************
5
Thank you and goodbye.
*/

