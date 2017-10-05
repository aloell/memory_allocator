#include "memlib.h"
#include "mm.h"
#include <stdio.h>
int main()
{
    //printf("hello world!\n");
	mem_init();
	mm_init();
	char* myspace;
    char* test1;
    /*char* test2;
    char* test3;
    char* test4;
    char* test5;
    char* test6;
    char* test7;
    char* test8;
    char* test9;
    char* test10;
    char* test11;
    char* test12;*/
	myspace=(char*)mm_malloc(2040);
    test1=(char*)mm_malloc(2040);
    /*test2=(char*)mm_malloc(48);
    test3=(char*)mm_malloc(4072);
    test4=(char*)mm_malloc(4072);
    test5=(char*)mm_malloc(4072);
    test6=(char*)mm_malloc(4072);
    test7=(char*)mm_malloc(4072);
    test8=(char*)mm_malloc(4072);
    test9=(char*)mm_malloc(1008);
    test10=(char*)mm_malloc(504);
    test11=(char*)mm_malloc(1008);
    test12=(char*)mm_malloc(42);*/
	return 0;
}