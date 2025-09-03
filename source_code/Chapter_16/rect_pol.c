/* Ch16_14_rect_pol.c -- 把直角坐标转换为极坐标 */
#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (180 / (4 * atan(1)))

// 极坐标
typedef struct polar_v {
    double magnitude;   // 极径
    double angle;       // 极角
} Polar_V;

// 直角坐标
typedef struct rect_v 
{
    double x;
    double y;
} Rect_V;

Polar_V rect_to_polar(Rect_V);

int main(void)
{
    Rect_V input;
    Polar_V result;

    puts("Enter x and y cordinates (Enter q to quit): ");
    while (scanf("%lf %lf", &input.x, &input.y) == 2)
    {
        result = rect_to_polar(input);
        printf("manitude = %0.2f, angle = %0.2f\n", result.magnitude, result.angle);
    }
    puts("Bye!\n");

    return 0;
}

Polar_V rect_to_polar(Rect_V rv)
{
    Polar_V pv;

    pv.magnitude = sqrt(rv.x * rv.x + rv.y * rv.y);
    if (pv.magnitude == 0)
        pv.angle = 0.0;
    else 
        pv.angle = RAD_TO_DEG * atan2(rv.y, rv.x);

    return pv;
}

/* Output
Enter x and y cordinates (Enter q to quit): 
10 10
manitude = 14.14, angle = 45.00
-12 -5
manitude = 13.00, angle = -157.38
q
Bye!
*/