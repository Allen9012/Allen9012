#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#define N 4
//
//#define Y(n) ((N+2)*n) /*���ֶ����ڱ�̹淶�����ϸ��ֹ��*/
//
//int main()
//{
//	int z = 2 * (N + Y(5 + 1));
//	printf("%d\n", z);
//	return 0;
//}

//#define A 2+2
//#define B 3+3
//#define C A*B
//int main()
//{
//	printf("%d\n", C);
//	return 0;
//}



//
//#include "add.h"
////#include "add.h"//��ΰ�����ζ���
//
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//
// ��η
//
// 
//��Ƭ�����
//
// 


//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������

//#define SWAP(N) ((N & 0xaaaaaaaa)>>1) + ((N & 0x55555555) << 1)
//
//int main()
//{
//	//10
//	//00000000000000000000000000001010
//	int num = 10;
//	int ret = SWAP(num);
//	//int ret = ((num & 0xaaaaaaaa)>>1) + ((num & 0x55555555) << 1);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
#include <stddef.h>
struct A
{
	int a;
	short b;
	int c;
	char d;
};

#define OFFSETOF(struct_name, mem_name)   (int)&(((struct_name*)0)->mem_name)

int main()
{
	printf("%d\n", OFFSETOF(struct A, a));
	printf("%d\n", OFFSETOF(struct A, b));
	printf("%d\n", OFFSETOF(struct A, c));
	printf("%d\n", OFFSETOF(struct A, d));

	return 0;
}