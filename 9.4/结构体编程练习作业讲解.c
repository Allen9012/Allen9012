#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//T1

//#pragma pack(4)
//struct A
//{
//	int a;
//	short b;//2
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
//#pragma pack()
//int main()
//{
//	struct A sa = { 0 };
//	struct B sb = { 0 };
//	printf("%d\n", sizeof(sa));//16
//	printf("%d\n", sizeof(sb));//12
//	return 0;
//}

//T2

//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()

//t3

//#define A 2
//#define B 3
//
//#define MAX_SIZE A+B
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;//1 - 8bit
//	unsigned char Para1 : 2;
//	unsigned char state;//1
//	unsigned char avail : 1;//1
//}*Env_Alarm_Record;
//
////struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * 2 + 3);
//
//int main()
//{
//	int sz = (sizeof(struct _Record_Struct) * MAX_SIZE);
//	printf("%d\n", sz);
//
//	return  0;
//}


//T4

//#include <stdio.h>
//union Un
//{
//	short s[7];//14 16
//	int n;//4 8 4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));//16
//	return 0;
//}



//T5

//int main()
//{
//    union
//    {
//        short k;
//        char i[2];
//    }*s, a;
//    s = &a;
//    s->i[0] = 0x39;//低
//    s->i[1] = 0x38;//高
//    printf("%x\n", a.k);
//
//    return 0;
//}

//T6

//enum ENUM_A
//{
//	X1,//0
//	Y1,//1
//	Z1 = 255,
//	A1,//256
//	B1,//257
//};
//
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);//1 257
//
//	return 0;
//}

//T7

//typedef struct {
//	int a;//0-3
//	char b;//4
//	//5 - 浪费
//	short c;//6-7
//	short d;//8-9
//	//10-11
//	
//	//12字节
//}AA_t;
//
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}

//T8
//int main()
//{
//	char* p = "1234";
//	int ret = atoi(p);
//	printf("%d", ret);
//	return 0;
//}

//<剑指offer>
//实现atoi

#include <assert.h>
#include <ctype.h>
#include <limits.h>

enum State
{
	INVALID,//0
	VALID   //1
};
//state 记录的是my_atoi 返回的值是合法转化的值，还是非法的状态
enum State state = INVALID;
int my_atoi(const char* s)
{
	int flag = 1;
	//assert(NULL != s);//assert就不传值了
	// 
	//空指针
	if (NULL == s)
	{
		return 0;
	}
	//空字符
	if (*s == '\0')
	{
		return 0;
	}
	//跳过空白字符
	while (isspace(*s))
	{
		s++;
	}
	//+/-
	if (*s == '+')
	{
		flag = 1;
		s++;
	}
	else if (*s == '-')
	{
		flag = -1;
		s++;
	}
	//处理数字字符的转换
	long long n = 0;
	while (isdigit(*s))
	{
		n = n * 10 + flag*(*s - '0');
		if (n > INT_MAX || n < INT_MIN)
		{
			return 0;
		}
		s++;
	}
	if (*s == '\0')
	{
		state = VALID;
		return (int)n;//改回int
	}
	else//其他情况
	{
		state = INVALID;
		//非数字字符的情况
		return (int)n;
	}
}
int main()
{
	//1. 空指针
	//2. 空字符串
	//3. 遇到了非数字字符
	//4. 超出范围
	
	//const char* p = "-123111111111111111111111111111111111111";
	////"0"？
	//int ret = my_atoi(p);
	/*printf("%d\n", ret);*/
	const char* p = "     -a";//跳过空白字符
	int ret = my_atoi(p);

	if (state == VALID)
		printf("正常的转换：%d\n", ret);
	else
		printf("非法的转换：%d\n", ret);

	return 0;
}
