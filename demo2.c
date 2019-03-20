#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//用1级指针（通常是形参，）去修改0级指针（通常是实参）的值
int getLen(int *p)
{
	*p = 20; // p是a的地址  *(a的地址) 去间接修改a的值
}
void main01()
{
	int a = 0; //定义一个实参变量
	int *p = NULL;//定义一个形参变量

	p =  &a;

	a = 1; //直接修改a的值
	*p = 90; // p是a的地址 *（a的地址）去间接修改a的值

	
	 getLen(&a);
	printf("a:%d \n", b);


	system("pause");
}


//用2级指针（通常是形参，）去修改1级指针（通常是实参）的值
//相当于在被调用函数里面分配内存，把结果给串出来
int getMemBuf(char **p2 /*out*/)
{
	char *tmp = NULL;

	//*(p2) = 0x33 ;//p2是p1的地址  *(p的地址)去间接修改p的
	tmp = (char *)malloc(100);
	*p2 = tmp;
	return 0;
}

void* getMemBuf2()
{
	char *tmp = NULL;

	//*(p2) = 0x33 ;//p2是p1的地址  *(p的地址)去间接修改p的
	tmp = (char *)malloc(100);
	return tmp;
}

void main011()
{
	char *        p = NULL;

	char **p2 = NULL;
	p = 0x11; // 直接修改p的值
	printf("p:%x \n", p);

	p2 = &p ;

	//*p = 10; // p是a的地址 *（a的地址）去间接修改a的值
	*(p2) = 0x22 ;//p2是p1的地址  *(p的地址)去间接修改p的值

	printf("p:%x \n", p);

	getMemBuf(&p);
	printf("p:%x \n", p);

	system("pause");
}