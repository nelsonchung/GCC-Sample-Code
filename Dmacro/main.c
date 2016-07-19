/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2015年09月09日 (週三) 21時01分53秒
 ************************************************************************/

#include<stdio.h>

#ifdef CONFIG_N
#define DEF_NELSON "Define CONFIG_NELSON" 
#else
#define DEF_NELSON "Not define CONFIG_NELSON"
#endif

int main(int argc, char* argv[])
{
    printf("NelsonDBG: def is \"%s\"\n", DEF_NELSON);
#if CONFIG_N2
    printf("NelsonDBG: define CONFIG_N2\n");
#endif
}
