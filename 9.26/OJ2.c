#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() 
//{
//	printf("%15d",0XABCDEF);
//	return 0;
//}

//
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	printf("%#X\n", 0xABCDEF);
//	return 0;
//}

//int main()
//{
//	int ret = printf("hehe");
//	printf("%d\n", ret);
//	return 0;
//}



//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n");
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int ret = printf("Hello world!");
//	printf("\n%d\n", ret);
//	return 0;
//}

//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}
//


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//
//	return 0;
//}




//
//#include <stdio.h>
//
//int main()
//{
//	int id = 0;
//	float c_score = 0.0;
//	float math_score = 0.0;
//	float eng_score = 0.0;
//	//����
//	scanf("%d;%f,%f,%f", &id, &c_score, &math_score, &eng_score);
//	//���
//	printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.",
//		id, c_score, math_score, eng_score);
//
//	return 0;
//}
//
//



//int main()
//{
//	int ch = 0;
//
//	//��������
//	while ((ch = getchar()) != EOF)
//	{
//		//�жϲ����
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();//����\n
//	}
//	return 0;
//}

//isalpha - ��ר�������ж�һ���ַ��ǲ�����ĸ��
//����ĸ���ط�0��ֵ
//������ĸ����0
//
//#include <ctype.h>
//
//int main()
//{
//	int ch = 0;
//
//	//��������
//	while ((ch = getchar()) != EOF)
//	{
//		//�жϲ����
//		if (isalpha(ch))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();//����\n
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	//����һ���ַ�
//	char ch = 0;
//	ch = getchar();
//	//���������
//	int i = 0;
//	//ÿѭ��һ�Σ���ӡһ��
//	//ÿһ����2������ɣ��ո���ַ�
//	for (i = 0; i<5; i++)
//	{
//		//�ո�
//		int j = 0;
//		for (j = 0; j<4 - i; j++)
//		{
//			printf(" ");
//		}
//		//�ַ�
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("%c\n", 73);
//	return 0;
//}

//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	//arr�����飬���������±������ʵģ�
//	//0
//	int i = 0;
//	//���������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	//���ո�ʽ����
//	scanf("%4d%2d%2d", &year, &month, &date);
//	//���
//	printf("year=%4d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}
//
////

//
//int main()
//{
//	int a = 1;
//	//00000000000000000000000000000001
//	int b = a << 3;//�ƶ��Ķ����Ƶ�λ
//
//	//int b = a + 3;
//	printf("%d\n", b);
//	printf("%d\n", a); 
//
//	return 0;
//}

//#include <stdio.h>
////
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	//����
//	c = a;
//	a = b;
//	b = c;
//	//���
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//	char ch = 0;
//	//����
//	ch = getchar();
//	printf("%d\n", ch);
//	printf("%c\n", ch);
//
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", (-8 + 22)*a - 10 + c / 2);
//
//	return 0;
//}

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	// / ���������� �õ�������
	// % ȡ�ࣨȡģ�����������õ���������
	int c = a / b;
	int d = a%b;
	printf("%d %d\n", c, d);

	return 0;
}