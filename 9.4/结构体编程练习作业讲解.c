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

//#pragma pack(4)/*����ѡ���ʾ4�ֽڶ��� ƽ̨��VS2013�����ԣ�C����*/
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
//    s->i[0] = 0x39;//��
//    s->i[1] = 0x38;//��
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
//	//5 - �˷�
//	short c;//6-7
//	short d;//8-9
//	//10-11
//	
//	//12�ֽ�
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

//<��ָoffer>
//ʵ��atoi

#include <assert.h>
#include <ctype.h>
#include <limits.h>

enum State
{
	INVALID,//0
	VALID   //1
};
//state ��¼����my_atoi ���ص�ֵ�ǺϷ�ת����ֵ�����ǷǷ���״̬
enum State state = INVALID;
int my_atoi(const char* s)
{
	int flag = 1;
	//assert(NULL != s);//assert�Ͳ���ֵ��
	// 
	//��ָ��
	if (NULL == s)
	{
		return 0;
	}
	//���ַ�
	if (*s == '\0')
	{
		return 0;
	}
	//�����հ��ַ�
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
	//���������ַ���ת��
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
		return (int)n;//�Ļ�int
	}
	else//�������
	{
		state = INVALID;
		//�������ַ������
		return (int)n;
	}
}
int main()
{
	//1. ��ָ��
	//2. ���ַ���
	//3. �����˷������ַ�
	//4. ������Χ
	
	//const char* p = "-123111111111111111111111111111111111111";
	////"0"��
	//int ret = my_atoi(p);
	/*printf("%d\n", ret);*/
	const char* p = "     -a";//�����հ��ַ�
	int ret = my_atoi(p);

	if (state == VALID)
		printf("������ת����%d\n", ret);
	else
		printf("�Ƿ���ת����%d\n", ret);

	return 0;
}
