/* Ch10_13_ptr_ops.c -- 指针操作 */ 
#include <stdio.h>

int main(void)
{
	int urn[5] = { 100, 200, 300, 400, 500 };
	int* ptr1, * ptr2, * ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];

	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));

	ptr1++;
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	ptr2--;
	printf("\nvalue2 after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

	--ptr1;
	++ptr2;
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);

	printf("\nsubstracting an int from a pointer:\n");
	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

	return 0;
}

/* Output
pointer value, dereferenced pointer, pointer address:
ptr1 = 0000007EFACFFC88, *ptr1 = 100, &ptr1 = 0000007EFACFFCB8

adding an int to a pointer:
ptr1 + 4 = 0000007EFACFFC98, *(ptr1 + 4) = 500

values after ptr1++:
ptr1 = 0000007EFACFFC8C, *ptr1 = 200, &ptr1 = 0000007EFACFFCB8

value2 after --ptr2:
ptr2 = 0000007EFACFFC8C, *ptr2 = 200, &ptr2 = 0000007EFACFFCD8

Pointers reset to original values:
ptr1 = 0000007EFACFFC88, ptr2 = 0000007EFACFFC90

subtracting one pointer from another:
ptr2 = 0000007EFACFFC90, ptr1 = 0000007EFACFFC88, ptr2 - ptr1 = 2

substracting an int from a pointer:
ptr3 = 0000007EFACFFC98, ptr3 - 2 = 0000007EFACFFC90
*/