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
//	double r = 0.0;//�뾶
//	double v = 0.0;//���
//	double pi = 3.1415926;
//	//����
//	scanf("%lf", &r);
//	//����
//	v = 4 / 3.0*pi*r*r*r;
//	//���
//	printf("%.3lf\n", v);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//�ֲ���������ʼ����Ĭ�Ϸŵ������ֵ
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
//		//�ж���i�Ƿ�ΪLily Number
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
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	int sum = (a % 100 + b % 100) % 100;
//	//���
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
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	int sum = (a + b) % 100;
//	//���
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
//	//����
//	scanf("%d", &age);
//	//����
//	long long second = age*3.156e7;
//	//���
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