/* Ch12_15_where.c -- 数据被存储在何处？ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

int static_store = 30;
const char * pcg = "String Literal";

int main(void)
{
    int auto_store = 40;
    char auto_string[] = "Auto char Array";
    int * pi;
    char * pcl;

    pi = (int *) malloc (sizeof(int));
    *pi = 35;
    pcl = (char *) malloc (strlen("Dynamic String") + 1);
    strcpy(pcl, "Dynamic String");

    printf("static_store: %d at %p\n", static_store, &static_store);
    printf("  auto_store: %d at %p\n", auto_store, &auto_store);
    printf("         *pi: %d at %p\n", *pi, pi);
    printf("  %s at %p\n", pcg, pcg);
    printf(" %s at %p\n", auto_string, auto_string);
    printf("  %s at %p\n", pcl, pcl);
    printf("   %s at %p\n", "Quoted String", "Quoted String");

    free(pi);
    free(pcl);

    return 0;
}


/* Output
static_store: 30 at 00007FF7B8CCD000
  auto_store: 40 at 00000016F596FC04
         *pi: 35 at 000001A1DD370850
  String Literal at 00007FF7B8CCABB0
 Auto char Array at 00000016F596FC28
  Dynamic String at 000001A1DD37AAC0
   Quoted String at 00007FF7B8CCADD8
*/