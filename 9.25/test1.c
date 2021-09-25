#define _CRT_SECURE_NO_WARNINGS 1

//包含/引入头文件

//函数 - getchar() - 获取一个字符，输入一个字符
//     - putchar() - 打印/输出一个字符


#include <stdio.h>

int main()
{
	int ch = 0;
	//EOF -- end of file - 文件结束标志 - 通常是为文件的末尾的
	while ((ch = getchar()) != EOF)
	{
		putchar(ch + 32);
		printf("\n");
		getchar();//读取\n
	}

	return 0;
}



//int main()
//{
//	int ch = 0;
//
//	ch = getchar();
//	putchar(ch+32);
//
//	return 0;
//}



//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);//1234
//
//	//输出
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//
//	//1234 % 10 = 4;
//	//1234 / 10 = 123;
//
//	//123 % 10 = 3;
//	//123 / 10 = 12;
//
//	//12 % 10 = 2;
//	//12 / 10 = 1;
//
//	//1 % 10 = 1;
//	//1 / 10 = 0;
//	return 0;
//}

//
//int main()
//{
//	//printf("0%o 0X%X\n", 1234, 1234);
//	printf("%#o %#X\n", 1234, 1234);
//	return 0;
//}


//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//
//	return 0;
//}



//\n 是一个转义字符 - 换行

//int main()
//{
//	printf("v   v\n");//换行
//	printf(" v v \n");
//	printf("  v  \n");
//	return 0;
//}

//int main()
//{
//	printf("v   v\n v v \n  v  \n");//换行
//	return 0;
//}


//写主函数
//main函数是程序的入口 - 代码是从main函数的第一行开始执行的！
//一个工程中，有且仅有一个main函数

//int main()
//{
//	//printf -库函数 - 输出操作 - 得引入头文件 - stdio.h
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}

//运行 