#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Teacher 
{
	char name[32];
	int age ;
};

struct Teacher *creatTeacher()
{
	struct Teacher * tmp = (struct Teacher *)malloc(sizeof(struct Teacher ));
	return tmp;
}

//��Ҫ���ű��˸��㴫�ĵ�ַ�ǿ��õģ�����*p����ַ��ָ����ڴ�ռ��ǲ���0 
int creatTeacher2(struct Teacher ** p)
{
	struct Teacher * tmp = NULL;
	if (p == NULL)
	{
		return -1;
	}
	tmp = (struct Teacher *)malloc(sizeof(struct Teacher ));
	*p = tmp;
	return 0;
}


void main222()
{
	struct Teacher * tmp = creatTeacher();
	struct Teacher * tmp2 = NULL;

	creatTeacher2(&tmp2);

	system("pause");
}

int getMeme(char ***p3)
{
	*p3 = 0x5; //����޸�p2��ֵ *��p2�ĵ�ַ�� ȥ��ӵ��޸�p2��ֵ
}


void main31()
{
	char **   p2 = NULL;
	char ***    p3 = NULL;

	p2 = 0x1;
	p2 = 0x3;

	p3 = &p2;
	*p3 = 0x4; //����޸�p2��ֵ *��p2�ĵ�ַ�� ȥ��ӵ��޸�p2��ֵ
	printf("%d\n", p2);
	getMeme(&p2);
	printf("%d\n", p2);

	{
		char *******p7 = NULL;
		char ********p8 = NULL;
		p7 = 0x1;
		
		//p8 = &p7;
		getMeme7(&p7);
		printf("p7:%d\n", p7);
	}


	system("pause");
}

int getMeme7(char ********       p8)
{
	*p8 = 0x5; //����޸�p2��ֵ *��p2�ĵ�ַ�� ȥ��ӵ��޸�p2��ֵ
}

void main()
{
	{
		char *******p7 = NULL;
		char ********p8 = NULL;
		p7 = 0x1;

		//p8 = &p7;
		getMeme7(&p7);
		printf("p7:%d\n", p7);
	}

	system("pause");
}