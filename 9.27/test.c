#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	double bmi = 0;
	scanf("%d %d", &a, &b);
	printf("%.2lf", a/(b/100.0)/(b/100.0));
	return 0;
}

#include <stdio.h>
#include <math.h>
//
//
//int main()
//{
//	int n = (int)pow(2, 6);
//	printf("%d\n", n);
//	return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	double r = 0.0;//半径
//	double v = 0.0;//体积
//	double pi = 3.1415926;
//	//输入
//	scanf("%lf", &r);
//	//计算
//	v = 4 / 3.0*pi*r*r*r;
//	//输出
//	printf("%.3lf\n", v);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//局部变量不初始化，默认放的是随机值
//	a++;
//
//	printf("a=%d\n", a);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	int s3 = 0;
//
//	scanf("%d %d %d", &s1, &s2, &s3);
//
//	printf("score1=%d,score2=%d,score3=%d\n", s1, s2, s3);
//
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int score[3] = { 0 };
//	//0 1 2
//	int i = 0;
//	for (i = 0; i<3; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//
//	printf("score1=%d,score2=%d,score3=%d\n", score[0], score[1], score[2]);
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断是i是否为Lily Number
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (i / j)*(i%j);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//计算
//	int sum = (a % 100 + b % 100) % 100;
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//计算
//	int sum = (a + b) % 100;
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}
//
#include <stdio.h>

int main()
{
	double d = 0;
	scanf("%lf", &d);
	int n = (int)d;
	printf("%d\n", n % 10);

	return 0;
}

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//13.141
//	printf("%d\n", n );
//
//	printf("%d\n", n % 10);
//
//	return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//	//计算
//	long long second = age*3.156e7;
//	//输出
//	printf("%lld\n", second);
//	return 0;
}


//int main()
//{
//	float f = 4.0;
//	int* p = (int*)&f;
//
//	printf("%d\n", f);
//	printf("%d\n", *p);
//
//	return 0;
//}