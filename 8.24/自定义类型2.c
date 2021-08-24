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

//理解结构体传值和传地址

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
////传值
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
////传址
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	Print1(s);//传值，可能值太大浪费空间
//	Print2(&s);//最大八个字节
//
//	/*s.a = 100;
//	s.c = 'w';
//	s.d = 3.14;
//
//	printf("%d\n", s.a);*/
//	return 0;
//}




//位段 - 二进制位

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;//4个
//	int d : 30;//4+4=8
//};
////仿佛是6个 其实是8个
////47bit - 6个字节*8 = 48bit
//
//int main()
//{
//	struct S s;
//
//	printf("%d\n", sizeof(s));//8个字节
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


//枚举类型


//enum Sex
//{
//	//枚举的可能取值-常量
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
////c语言的源代码---->可执行程序
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


