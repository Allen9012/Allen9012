#define _CRT_SECURE_NO_WARNINGS 1

//����-������-������
#include<stdio.h>
//union Un
//{
//	char c;//1
//	int i; //4
//};
////����ȥ5���ֽڣ���ʵ
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
//	//����1����ʾС��
//	//����0����ʾ���
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
//	//����1����ʾС��
//	//����0����ʾ���
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
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	//int a = 0x11223344;
//	//
//	//�͵�ַ-------------------->�ߵ�ַ
//	//....[][][][][11][22][33][44][][][][][][][]...  ����ֽ���洢ģʽ
//	//....[][][][][44][33][22][11][][][][][][][]...  С���ֽ���洢ģʽ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
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