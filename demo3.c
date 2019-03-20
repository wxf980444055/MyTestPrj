#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//用2级指针（通常是形参，）去修改1级指针（通常是实参）的值
//相当于在被调用函数里面分配内存，把结果给串出来
int getMemBuf03(char **p2 /*out*/)
{
	char *tmp = NULL;

	//*(p2) = 0x33444 ;//p2是p1的地址  *(p的地址)去间接修改p的
	tmp = (char *)malloc(100);
	strcpy(tmp, "addddddadddddd");

	*p2 = pppp;

	//**p2 = tmp;  (* 0xaa22)     (0xaa22)
	return 0;
}

void main22()
{
	char **p = NULL;
	getMemBuf03(p);

}

void getMem_err(char *p)
{
	char *tmp = NULL;
	tmp = (char *)malloc(100);
	p = tmp;
}

void main222()
{
	char *p = NULL;
	char buf[10]; //buf指针 const buf

	//把p的值给修改了 把被调用函数分配的内存首地址，传给实参
	//p ====>应该能修改  p = 1;
	getMemBuf03(&buf);
	printf("%s", buf);

	if (buf != NULL)
	{
		free(buf);
	}
	system("pause");
}
