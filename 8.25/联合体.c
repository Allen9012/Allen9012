#define _CRT_SECURE_NO_WARNINGS 1

//联合-联合体-共用体
#include<stdio.h>
//union Un
//{
//	char c;//1
//	int i; //4
//};
////看上去5个字节，其实
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//	return 0;
//}



//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return *(char*)&a;
//}
//
//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//
//	u.i = 1;//
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	
//	int a = 1;
//	int ret = check_sys();
//
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	//int a = 0x11223344;
//	//
//	//低地址-------------------->高地址
//	//....[][][][][11][22][33][44][][][][][][][]...  大端字节序存储模式
//	//....[][][][][44][33][22][11][][][][][][][]...  小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//	//
//
//	return 0;
//}
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

//
//union Un
//{
//	int a;//4 8 4
//	char arr[5];//5 1 8 1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//
//	return 0;
//}
//