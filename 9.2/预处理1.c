#define _CRT_SECURE_NO_WARNINGS 1
//�����ⲿ����
//extern int Add(int x, int y);
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	/*printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	printf("%s\n", __FUNCTION__);*/
//
//	int i = 0;
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen\n");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	//printf("%d\n", __STDC__);//��֧��
//	return 0;
//}


//#define �Ƕ�����ŵ�

//#define M 1000
//#define reg register
//#define do_forever for(;;)//��ѭ��
//
//
//int main()
//{
//	reg int num = 0;
//	do_forever;
//	int m = M;
//	printf("%d\n", m);
//
//	return 0;
//}

//#define CASE break;case
//int main()
//{
//	int n = 0;
//
//	switch (n)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//
//	return 0;
//}

//#define M 1000
//
//int main()
//{
//	//int m = 1000;
//	int a = 10;
//	int b = 0;
//	if (a > 10)
//		b = M;
//	else
//		b = -M;
//
//	return 0;
//}

//#define �����
//���ź���Ҫ

//#define SQUARE(X) ((X)*(X))
//
//#define DOUBLE(X) ((X)+(X))

//int main()
//{
//	printf("%d\n", SQUARE(3+1));//
//	printf("%d\n", 10 * DOUBLE(4));
//
//	//printf("%d\n", 10 * ((4) + (4)));
//	//printf("%d\n", 3 + 1 * 3 + 1);
//	//printf("%d\n", 3 * 3);
//	return 0;
//}
//

//#define M 100
//#define MAX(X, Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int max = MAX(101, M);
//	printf("M = %d\n", M);
//
//	return 0;
//}
// 



//void print(int x)
//{
//	printf("the value of c is %d\n", x);
//}
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//
//	int a = 10;
//	print(a);
//	//the value of a is 10
//
//	int b = 20;
//	print(b);
//	//the value of b is 20
//
//	int c = 30;
//	print(c);
//	//the value of c is 30
//
//	return 0;
//}


//#define PRINT(X, FORMAT) printf("the value of "#X" is "FORMAT"\n", X);
//
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//
//	int a = 10;
//	PRINT(a, "%d");
//	//printf("the value of ""a"" is %d\n", a);
//	//the value of a is 10
//
//	int b = 20;
//	PRINT(b, "%d");
//	//printf("the value of ""b"" is %d\n", b);
//
//	//the value of b is 20
//
//	int c = 30;
//	PRINT(c, "%d");
//	//the value of c is 30
//
//	float f = 5.5f;
//	PRINT(f, "%f");
//	printf("the value of ""F"" is ""%f""\n", f);
//
//
//	return 0;
//}

#define CAT(X,Y,Z) X##Y##Z

int main()
{
	int class101101 = 100;
	printf("%d\n", CAT(class, 101, 101));

	//printf("%d\n", class101);

	return 0;
}
