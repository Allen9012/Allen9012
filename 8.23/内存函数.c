#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>




//��ʦ����


//����һ���ṹ������
//����һ��ѧ�����ͣ������ѧ������������ѧ������������
//����ѧ��������-����+�绰+�Ա�+����

//struct Stu
//{
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;
//} s4,s5,s6;
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	psa = &sa;
//
//	return 0;
//}
//
////�ṹ���������
//struct Node
//{
//	int data;//4
//	struct Node* next;//4/8
//};
//
//int main()
//{
//	
//	return 0;
//}

//
//typedef struct Node
//{
//	double d;
//	int data;//4
//	struct Node* next;//4/8
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = {'c', 100, 3.14, "hello bit"};
//	struct S s = { 'c', {55.6, 30}, 100, 3.14, "hello bit" };
//
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//
//
//	return 0;
//}
//
struct S1
{
	char c1;
	int a;
	char c2;
};

struct S2
{
	char c1;
	char c2;
	int a;
};

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c;
	struct S3 s3;
	double d;
};

int main()
{
	struct S1 s1 = {0};
	printf("%d\n", sizeof(s1));//?
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));//?
	struct S3 s3;
	printf("%d\n", sizeof(s3));
	struct S4 s4;
	printf("%d\n", sizeof(s4));
	return 0;
}

////����Ĭ�϶�����λ4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 4 4
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����


//����Ĭ�϶�����λ1
//#pragma pack(1)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8 4 4
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//
//
//	return 0;
//}

#include <stddef.h>
//
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	offsetof();
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//
//	return 0;
//}