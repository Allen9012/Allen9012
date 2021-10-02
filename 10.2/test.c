#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int t = 0;
//	while (~scanf("%d", &t));
//	{
//		if (t > 0)
//			printf("%d\n", 1);
//		else if (t == 0)
//			printf("%.1f\n", 0.5);
//		else
//			printf("%d", 0);
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int a, b, c = 0;
//	while (~scanf("%d%d%d", &a, &b, &c))
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && a == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}
//
//
//
//#include <stdio.h>
//int main()
//{
//	float weight = 0.0;
//	float hight = 0.0;
//	while (scanf("%f %f", &weight, &hight) != EOF)
//	{
//		float bmi = weight / (hight * hight / 100 / 100);
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5 && bmi <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (bmi > 23.9 && bmi <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else {
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c = 0;
//	double delta = 0;
//	while (~scanf("%lf %lf %lf", &a, &b, &c))
//	{
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//
//		else {
//			delta = b * b - 4 * a * c;
//			if (delta == 0.0)
//			{
//				printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//			}
//			else if (delta > 0.0)
//			{
//				printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(delta)) / (2 * a),
//					(-b + sqrt(delta)) / (2 * a));
//			}
//			else {
//				printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n",
//					(-b) / (2 * a), sqrt(-delta) / (2 * a),
//					(-b) / (2 * a), sqrt(-delta) / (2 * a));
//			}
//		}
//	}
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//月份对应的日数量放入数组
//	while (scanf("%d%d", &y, &m) != EOF)//多组输入
//	{
//		int day = days[m - 1];
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))//判断闰年
//		{
//			if (m == 2)
//				day += 1;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}
//
//#include <stdio.h>
////精度尽量保持高
////这个题使用float精度不满足要求
//int main()
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char op = 0;
//	while (scanf("%lf%c%lf", &n1, &op, &n2) != EOF)
//	{
//		switch (op)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf", n1, n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf", n1, n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf", n1, n2, n1 * n2);
//			break;
//		case '/':
//			if (n2 == 0.0)//这里是有着除法的特殊情况
//				printf("Wrong!Division by zero!\n");
//			else
//				printf("%.4lf/%.4lf=%.4lf", n1, n2, n1 / n2);
//			break;
//			
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {

                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}