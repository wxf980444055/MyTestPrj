#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//��2��ָ�루ͨ�����βΣ���ȥ�޸�1��ָ�루ͨ����ʵ�Σ���ֵ
//�൱���ڱ����ú�����������ڴ棬�ѽ����������
int getMemBuf03(char **p2 /*out*/)
{
	char *tmp = NULL;

	//*(p2) = 0x33444 ;//p2��p1�ĵ�ַ  *(p�ĵ�ַ)ȥ����޸�p��
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
	char buf[10]; //bufָ�� const buf

	//��p��ֵ���޸��� �ѱ����ú���������ڴ��׵�ַ������ʵ��
	//p ====>Ӧ�����޸�  p = 1;
	getMemBuf03(&buf);
	printf("%s", buf);

	if (buf != NULL)
	{
		free(buf);
	}
	system("pause");
}
