/* Ch05_12_bottles.c -- 计算机可以是位出色的填词家 */ 
#include <stdio.h>

#define MAX 100

int main(void)
{
    int count = MAX + 1;

    while (--count > 0)     // >、< 是关系运算符（relational operator）
    {
        printf("%d bottles of spirng water on the wall, "
               "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n", count - 1);
    }

    return 0;
}

/* Output:
100 bottles of spirng water on the wall, 100 bottles of spring water!
Take one down and pass it around,
99 bottles of spring water!
99 bottles of spirng water on the wall, 99 bottles of spring water!
Take one down and pass it around,
98 bottles of spring water!
98 bottles of spirng water on the wall, 98 bottles of spring water!
Take one down and pass it around,
97 bottles of spring water!
97 bottles of spirng water on the wall, 97 bottles of spring water!
Take one down and pass it around,
96 bottles of spring water!
96 bottles of spirng water on the wall, 96 bottles of spring water!
Take one down and pass it around,
95 bottles of spring water!
95 bottles of spirng water on the wall, 95 bottles of spring water!
Take one down and pass it around,
94 bottles of spring water!
94 bottles of spirng water on the wall, 94 bottles of spring water!
Take one down and pass it around,
93 bottles of spring water!
93 bottles of spirng water on the wall, 93 bottles of spring water!
Take one down and pass it around,
92 bottles of spring water!
92 bottles of spirng water on the wall, 92 bottles of spring water!
Take one down and pass it around,
91 bottles of spring water!
91 bottles of spirng water on the wall, 91 bottles of spring water!
Take one down and pass it around,
90 bottles of spring water!
90 bottles of spirng water on the wall, 90 bottles of spring water!
Take one down and pass it around,
89 bottles of spring water!
89 bottles of spirng water on the wall, 89 bottles of spring water!
Take one down and pass it around,
88 bottles of spring water!
88 bottles of spirng water on the wall, 88 bottles of spring water!
Take one down and pass it around,
87 bottles of spring water!
87 bottles of spirng water on the wall, 87 bottles of spring water!
Take one down and pass it around,
86 bottles of spring water!
86 bottles of spirng water on the wall, 86 bottles of spring water!
Take one down and pass it around,
85 bottles of spring water!
85 bottles of spirng water on the wall, 85 bottles of spring water!
Take one down and pass it around,
84 bottles of spring water!
84 bottles of spirng water on the wall, 84 bottles of spring water!
Take one down and pass it around,
83 bottles of spring water!
83 bottles of spirng water on the wall, 83 bottles of spring water!
Take one down and pass it around,
82 bottles of spring water!
82 bottles of spirng water on the wall, 82 bottles of spring water!
Take one down and pass it around,
81 bottles of spring water!
81 bottles of spirng water on the wall, 81 bottles of spring water!
Take one down and pass it around,
80 bottles of spring water!
80 bottles of spirng water on the wall, 80 bottles of spring water!
Take one down and pass it around,
79 bottles of spring water!
79 bottles of spirng water on the wall, 79 bottles of spring water!
Take one down and pass it around,
78 bottles of spring water!
78 bottles of spirng water on the wall, 78 bottles of spring water!
Take one down and pass it around,
77 bottles of spring water!
77 bottles of spirng water on the wall, 77 bottles of spring water!
Take one down and pass it around,
76 bottles of spring water!
76 bottles of spirng water on the wall, 76 bottles of spring water!
Take one down and pass it around,
75 bottles of spring water!
75 bottles of spirng water on the wall, 75 bottles of spring water!
Take one down and pass it around,
74 bottles of spring water!
74 bottles of spirng water on the wall, 74 bottles of spring water!
Take one down and pass it around,
73 bottles of spring water!
73 bottles of spirng water on the wall, 73 bottles of spring water!
Take one down and pass it around,
72 bottles of spring water!
72 bottles of spirng water on the wall, 72 bottles of spring water!
Take one down and pass it around,
71 bottles of spring water!
71 bottles of spirng water on the wall, 71 bottles of spring water!
Take one down and pass it around,
70 bottles of spring water!
70 bottles of spirng water on the wall, 70 bottles of spring water!
Take one down and pass it around,
69 bottles of spring water!
69 bottles of spirng water on the wall, 69 bottles of spring water!
Take one down and pass it around,
68 bottles of spring water!
68 bottles of spirng water on the wall, 68 bottles of spring water!
Take one down and pass it around,
67 bottles of spring water!
67 bottles of spirng water on the wall, 67 bottles of spring water!
Take one down and pass it around,
66 bottles of spring water!
66 bottles of spirng water on the wall, 66 bottles of spring water!
Take one down and pass it around,
65 bottles of spring water!
65 bottles of spirng water on the wall, 65 bottles of spring water!
Take one down and pass it around,
64 bottles of spring water!
64 bottles of spirng water on the wall, 64 bottles of spring water!
Take one down and pass it around,
63 bottles of spring water!
63 bottles of spirng water on the wall, 63 bottles of spring water!
Take one down and pass it around,
62 bottles of spring water!
62 bottles of spirng water on the wall, 62 bottles of spring water!
Take one down and pass it around,
61 bottles of spring water!
61 bottles of spirng water on the wall, 61 bottles of spring water!
Take one down and pass it around,
60 bottles of spring water!
60 bottles of spirng water on the wall, 60 bottles of spring water!
Take one down and pass it around,
59 bottles of spring water!
59 bottles of spirng water on the wall, 59 bottles of spring water!
Take one down and pass it around,
58 bottles of spring water!
58 bottles of spirng water on the wall, 58 bottles of spring water!
Take one down and pass it around,
57 bottles of spring water!
57 bottles of spirng water on the wall, 57 bottles of spring water!
Take one down and pass it around,
56 bottles of spring water!
56 bottles of spirng water on the wall, 56 bottles of spring water!
Take one down and pass it around,
55 bottles of spring water!
55 bottles of spirng water on the wall, 55 bottles of spring water!
Take one down and pass it around,
54 bottles of spring water!
54 bottles of spirng water on the wall, 54 bottles of spring water!
Take one down and pass it around,
53 bottles of spring water!
53 bottles of spirng water on the wall, 53 bottles of spring water!
Take one down and pass it around,
52 bottles of spring water!
52 bottles of spirng water on the wall, 52 bottles of spring water!
Take one down and pass it around,
51 bottles of spring water!
51 bottles of spirng water on the wall, 51 bottles of spring water!
Take one down and pass it around,
50 bottles of spring water!
50 bottles of spirng water on the wall, 50 bottles of spring water!
Take one down and pass it around,
49 bottles of spring water!
49 bottles of spirng water on the wall, 49 bottles of spring water!
Take one down and pass it around,
48 bottles of spring water!
48 bottles of spirng water on the wall, 48 bottles of spring water!
Take one down and pass it around,
47 bottles of spring water!
47 bottles of spirng water on the wall, 47 bottles of spring water!
Take one down and pass it around,
46 bottles of spring water!
46 bottles of spirng water on the wall, 46 bottles of spring water!
Take one down and pass it around,
45 bottles of spring water!
45 bottles of spirng water on the wall, 45 bottles of spring water!
Take one down and pass it around,
44 bottles of spring water!
44 bottles of spirng water on the wall, 44 bottles of spring water!
Take one down and pass it around,
43 bottles of spring water!
43 bottles of spirng water on the wall, 43 bottles of spring water!
Take one down and pass it around,
42 bottles of spring water!
42 bottles of spirng water on the wall, 42 bottles of spring water!
Take one down and pass it around,
41 bottles of spring water!
41 bottles of spirng water on the wall, 41 bottles of spring water!
Take one down and pass it around,
40 bottles of spring water!
40 bottles of spirng water on the wall, 40 bottles of spring water!
Take one down and pass it around,
39 bottles of spring water!
39 bottles of spirng water on the wall, 39 bottles of spring water!
Take one down and pass it around,
38 bottles of spring water!
38 bottles of spirng water on the wall, 38 bottles of spring water!
Take one down and pass it around,
37 bottles of spring water!
37 bottles of spirng water on the wall, 37 bottles of spring water!
Take one down and pass it around,
36 bottles of spring water!
36 bottles of spirng water on the wall, 36 bottles of spring water!
Take one down and pass it around,
35 bottles of spring water!
35 bottles of spirng water on the wall, 35 bottles of spring water!
Take one down and pass it around,
34 bottles of spring water!
34 bottles of spirng water on the wall, 34 bottles of spring water!
Take one down and pass it around,
33 bottles of spring water!
33 bottles of spirng water on the wall, 33 bottles of spring water!
Take one down and pass it around,
32 bottles of spring water!
32 bottles of spirng water on the wall, 32 bottles of spring water!
Take one down and pass it around,
31 bottles of spring water!
31 bottles of spirng water on the wall, 31 bottles of spring water!
Take one down and pass it around,
30 bottles of spring water!
30 bottles of spirng water on the wall, 30 bottles of spring water!
Take one down and pass it around,
29 bottles of spring water!
29 bottles of spirng water on the wall, 29 bottles of spring water!
Take one down and pass it around,
28 bottles of spring water!
28 bottles of spirng water on the wall, 28 bottles of spring water!
Take one down and pass it around,
27 bottles of spring water!
27 bottles of spirng water on the wall, 27 bottles of spring water!
Take one down and pass it around,
26 bottles of spring water!
26 bottles of spirng water on the wall, 26 bottles of spring water!
Take one down and pass it around,
25 bottles of spring water!
25 bottles of spirng water on the wall, 25 bottles of spring water!
Take one down and pass it around,
24 bottles of spring water!
24 bottles of spirng water on the wall, 24 bottles of spring water!
Take one down and pass it around,
23 bottles of spring water!
23 bottles of spirng water on the wall, 23 bottles of spring water!
Take one down and pass it around,
22 bottles of spring water!
22 bottles of spirng water on the wall, 22 bottles of spring water!
Take one down and pass it around,
21 bottles of spring water!
21 bottles of spirng water on the wall, 21 bottles of spring water!
Take one down and pass it around,
20 bottles of spring water!
20 bottles of spirng water on the wall, 20 bottles of spring water!
Take one down and pass it around,
19 bottles of spring water!
19 bottles of spirng water on the wall, 19 bottles of spring water!
Take one down and pass it around,
18 bottles of spring water!
18 bottles of spirng water on the wall, 18 bottles of spring water!
Take one down and pass it around,
17 bottles of spring water!
17 bottles of spirng water on the wall, 17 bottles of spring water!
Take one down and pass it around,
16 bottles of spring water!
16 bottles of spirng water on the wall, 16 bottles of spring water!
Take one down and pass it around,
15 bottles of spring water!
15 bottles of spirng water on the wall, 15 bottles of spring water!
Take one down and pass it around,
14 bottles of spring water!
14 bottles of spirng water on the wall, 14 bottles of spring water!
Take one down and pass it around,
13 bottles of spring water!
13 bottles of spirng water on the wall, 13 bottles of spring water!
Take one down and pass it around,
12 bottles of spring water!
12 bottles of spirng water on the wall, 12 bottles of spring water!
Take one down and pass it around,
11 bottles of spring water!
11 bottles of spirng water on the wall, 11 bottles of spring water!
Take one down and pass it around,
10 bottles of spring water!
10 bottles of spirng water on the wall, 10 bottles of spring water!
Take one down and pass it around,
9 bottles of spring water!
9 bottles of spirng water on the wall, 9 bottles of spring water!
Take one down and pass it around,
8 bottles of spring water!
8 bottles of spirng water on the wall, 8 bottles of spring water!
Take one down and pass it around,
7 bottles of spring water!
7 bottles of spirng water on the wall, 7 bottles of spring water!
Take one down and pass it around,
6 bottles of spring water!
6 bottles of spirng water on the wall, 6 bottles of spring water!
Take one down and pass it around,
5 bottles of spring water!
5 bottles of spirng water on the wall, 5 bottles of spring water!
Take one down and pass it around,
4 bottles of spring water!
4 bottles of spirng water on the wall, 4 bottles of spring water!
Take one down and pass it around,
3 bottles of spring water!
3 bottles of spirng water on the wall, 3 bottles of spring water!
Take one down and pass it around,
2 bottles of spring water!
2 bottles of spirng water on the wall, 2 bottles of spring water!
Take one down and pass it around,
1 bottles of spring water!
1 bottles of spirng water on the wall, 1 bottles of spring water!
Take one down and pass it around,
0 bottles of spring water!
*/