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
////���TEST�����ˣ�����������
////1
//#ifdef TEST
//	printf("test1\n");
//#endif
////2
//#if defined(TEST)
//	printf("test2\n");
//#endif
//
////���HEHE�����壬����������
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


////���ļ�����,C���Կ����ṩ�ĺ�����ͷ�ļ�ʹ��<>
//#include <stdio.h>
//
////�����ļ�����,�Զ���ĺ�����ͷ�ļ�ʹ��""
//#include "add.h"

////<> �� ""����ͷ�ļ��ı��������ǣ����ҵĲ��Ե�����
////"" 1. �Լ��������ڵ�Ŀ¼�²��ң�2.�����1���Ҳ��������ڿ⺯����ͷ�ļ�Ŀ¼�²���
////<> ֱ��ȥ�⺯��ͷ�ļ����ڵ�Ŀ¼�²���
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