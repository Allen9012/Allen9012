#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct s1 
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//	
//};
//int main()
//{
//	struct  s1 as = { 0 };
//	struct s2 sa = { 0 };
//	printf("%d\n", sizeof(as));
//	printf("%d\n", sizeof(sa));
//	return 0;
//}
#include <stddef.h>

//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof();
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//
//	return 0;
//}

//���ṹ�崫ֵ�ʹ���ַ

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////��ֵ
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
////��ַ
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);//��ֵ������ֵ̫���˷ѿռ�
//	Print2(&s);//���˸��ֽ�
//
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//
//	printf("%d\n", s.a);*/
//	return 0;
//}




//λ�� - ������λ

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;//4��
//	int d : 30;//4+4=8
//};
////�·���6�� ��ʵ��8��
////47bit - 6���ֽ�*8 = 48bit
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));//8���ֽ�
//
//	return 0;
//}

//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = {0};
//
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//
//
//	return 0;
//}


//ö������


//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
//	MALE,
//	FEMALE = 9,
//	SECRET
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
////c���Ե�Դ����---->��ִ�г���
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	//enum Sex s = MALE;
//
//	//enum Color c = 2;//int 
//
//	int color = RED;
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//
////	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//
//	return 0;
//}
//
//
//


//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}


