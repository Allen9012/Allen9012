#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a, b);
//	/*int m = ((a)>(b)?(a):(b));*/
//
//	//m = Max(a, b);
//
//	//int m = MAX(a++, b++);
//	printf("a=%d b=%d\n", a, b);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	printf("m = %d\n", m);//?
//
//	return 0;
//}


//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	//malloc(10*sizeof(int));
//	//malloc(10, int);
//	int*p = MALLOC(10, int);
//
//	//(int*)malloc(10 * sizeof(int));
//	return 0;
//}

//#define M 100
//int main()
//{
//	int a = M;
//#undef M
//	printf("%d\n", M);
//
//	return 0;
//}


//
//
//int main()
//{
//    int arr[M] = { 0 };
//    int i = 0;
//
//    for (i = 0; i < M; i++)
//    {
//        arr[i] = i;
//    }
//
//    for (i = 0; i < M; i++)
//    {
//        printf("%d ", i);
//    }
//
//    return 0;
//}
//
//




#if 0
#define PRINT 1

int main()
{
//#ifdef PRINT
//	printf("hehe\n");
//#endif 

#if PRINT
	printf("hehe\n");
#endif

	return 0;
}
#endif

//int main()
//{
//#if 1==2
//	printf("hehe\n");
//#elif 2==3
//	printf("haha\n");
//#else 
//	printf("heihei\n");
//#endif
//
//	return 0;
//}

//#define TEST 0
//#define HEHE 1
//
//int main()
//{
////如果TEST定义了，下面参与编译
////1
//#ifdef TEST
//	printf("test1\n");
//#endif
////2
//#if defined(TEST)
//	printf("test2\n");
//#endif
//
////如果HEHE不定义，下面参与编译
////3
//#ifndef HEHE
//	printf("hehe1\n");
//#endif
////4
//#if !defined(HEHE)
//	printf("hehe2\n");
//#endif
//	return 0;
//}
////



//int main()
//{
//	EOF
//	return 0;
//}


////库文件包含,C语言库中提供的函数的头文件使用<>
//#include <stdio.h>
//
////本地文件包含,自定义的函数的头文件使用""
//#include "add.h"

////<> 和 ""包含头文件的本质区别是：查找的策略的区别
////"" 1. 自己代码所在的目录下查找，2.如果第1不找不到，则在库函数的头文件目录下查找
////<> 直接去库函数头文件所在的目录下查找
//
////VS2019 -D:\Windows Kits\10\Include\10.0.19041.0\ucrt
////
//int main()
//{
//	EOF;
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int arr[n];
//
//	return 0;
//}