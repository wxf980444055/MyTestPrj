#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//��1��ָ�루ͨ�����βΣ���ȥ�޸�0��ָ�루ͨ����ʵ�Σ���ֵ
int getLen(int *p)
{
	*p = 20; // p��a�ĵ�ַ  *(a�ĵ�ַ) ȥ����޸�a��ֵ
}
void main01()
{
	int a = 0; //����һ��ʵ�α���
	int *p = NULL;//����һ���βα���

	p =  &a;

	a = 1; //ֱ���޸�a��ֵ
	*p = 90; // p��a�ĵ�ַ *��a�ĵ�ַ��ȥ����޸�a��ֵ

	
	 getLen(&a);
	printf("a:%d \n", b);


	system("pause");
}


//��2��ָ�루ͨ�����βΣ���ȥ�޸�1��ָ�루ͨ����ʵ�Σ���ֵ
//�൱���ڱ����ú�����������ڴ棬�ѽ����������
int getMemBuf(char **p2 /*out*/)
{
	char *tmp = NULL;

	//*(p2) = 0x33 ;//p2��p1�ĵ�ַ  *(p�ĵ�ַ)ȥ����޸�p��
	tmp = (char *)malloc(100);
	*p2 = tmp;
	return 0;
}

void* getMemBuf2()
{
	char *tmp = NULL;

	//*(p2) = 0x33 ;//p2��p1�ĵ�ַ  *(p�ĵ�ַ)ȥ����޸�p��
	tmp = (char *)malloc(100);
	return tmp;
}

void main011()
{
	char *        p = NULL;

	char **p2 = NULL;
	p = 0x11; // ֱ���޸�p��ֵ
	printf("p:%x \n", p);

	p2 = &p ;

	//*p = 10; // p��a�ĵ�ַ *��a�ĵ�ַ��ȥ����޸�a��ֵ
	*(p2) = 0x22 ;//p2��p1�ĵ�ַ  *(p�ĵ�ַ)ȥ����޸�p��ֵ

	printf("p:%x \n", p);

	getMemBuf(&p);
	printf("p:%x \n", p);

	system("pause");
}