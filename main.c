#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getattr1()
{
    char *p1 = "abcd";
    return p1;
}

char * getattr2()
{
    char *p2 = "abcd";
    return p2;
}


char * getattr3()
{
    char buf[30];
    strcpy(buf, "abcd");
    return buf;
}

int main()
{
    int a = 10;
    int b = 10;
    int *p1 = NULL;
    int *p2 = NULL;

    char *p3 = (char *)malloc(sizeof(char));
    char *p4 = (char *)malloc(sizeof(char));

    int buf[10] = {90};




    printf("&a: %#x, &b: %#x,\n", &a, &b);
    printf("p1: %#x, p2: %#x\n", &p1, &p2);
    printf("p3: %#x, p4: %#x\n", &p3, &p4);
    printf("buf: %#x\n", &buf);

     //printf("p3: %s\n", p3);

    return 0;
}

int main2()
{
    int i = 10;
    char *p1 = getattr1();
    char *p2 = getattr2();

    char *p3 = getattr3();

    printf("p1: %d\n", p1);
    printf("p2: %d\n", p2);

     printf("p3: %s\n", p3);

    return 0;
}

int main1()
{
    int i = 10;
    char *p1 = getattr1();
    char *p2 = getattr2();



    printf("p1: %d\n", p1);
    printf("p2: %d\n", p2);



    return 0;
}
