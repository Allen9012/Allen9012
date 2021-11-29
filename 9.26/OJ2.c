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
//	//输入
//	scanf("%d;%f,%f,%f", &id, &c_score, &math_score, &eng_score);
//	//输出
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
//	//多组输入
//	while ((ch = getchar()) != EOF)
//	{
//		//判断并输出
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();//处理\n
//	}
//	return 0;
//}

//isalpha - 是专门用来判断一个字符是不是字母的
//是字母返回非0的值
//不是字母返回0
//
//#include <ctype.h>
//
//int main()
//{
//	int ch = 0;
//
//	//多组输入
//	while ((ch = getchar()) != EOF)
//	{
//		//判断并输出
//		if (isalpha(ch))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();//处理\n
//	}
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	//输入一个字符
//	char ch = 0;
//	ch = getchar();
//	//输出金字塔
//	int i = 0;
//	//每循环一次，打印一行
//	//每一行由2部分组成，空格和字符
//	for (i = 0; i<5; i++)
//	{
//		//空格
//		int j = 0;
//		for (j = 0; j<4 - i; j++)
//		{
//			printf(" ");
//		}
//		//字符
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
//	//arr是数组，数组是用下标来访问的！
//	//0
//	int i = 0;
//	//计算数组的元素个数
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
//	//按照格式输入
//	scanf("%4d%2d%2d", &year, &month, &date);
//	//输出
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
//	int b = a << 3;//移动的二进制的位
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
//	//交换
//	c = a;
//	a = b;
//	b = c;
//	//输出
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//	char ch = 0;
//	//输入
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
	// / 除法操作符 得到的是商
	// % 取余（取模）操作符，得到的是余数
	int c = a / b;
	int d = a%b;
	printf("%d %d\n", c, d);

	return 0;
}