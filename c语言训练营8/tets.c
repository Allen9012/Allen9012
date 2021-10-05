#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double score = 0.0;
//	double sum = 0.0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%lf", &score);
//		sum += score;
//	}
//	printf("%.2lf\n", sum / 5);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int s = 0;
//	while (scanf("%d", &s) != EOF)
//	{
//		switch (s)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int min = 100;//假设最小值是100
//	int max = 0;//假设最大值是0
//	int score = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d ", &score);//输入
//		sum += score;//求和
//		if (score > max)
//			max = score;//求最大值
//		if (score < min)
//			min = score;//求最小值
//	}
//	printf("%.2f\n", (sum - min - max) / 5.0);
//	return 0;
//}

//BC77 - 有序序列插入一个数
//#include<stdio.h>
//int main()
//{
//    int input = 0;
//    scanf("%d", &input);
//    int arr[51] = { 0 };
//    int m = 0;
//    int i = 0;
//    for (i = 0; i < input; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &m);
//    for (i = input - 1; i >= 0; i--)
//    {
//        if (arr[i] >= m)
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//
//    }
//    if (i < 0)//排除一个最小 小到比你之前的每一个都来的小
//    {
//        arr[0] = m;
//    }
//    for (int j = 0; j < input + 1; j++)
//    {
//        printf("%d ", arr[j]);
//    }
//
//    return 0;
//}

//BC78 - 筛选法求素数
////求素数两种方法
//#include <stdio.h>
////方法1：筛选法
//int main()
//{
//	int n = 0;

//	while (~scanf("%d", &n))
//	{
// 		int arr[n+1] ;
//		int i = 0;
//		//初始化数组的内容为0-n
//		for (i = 0; i <= n; i++)
//		{
//		
//				arr[i] = i;
//		}
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = i + 1; j <= n; j++)
//			{
//				if (arr[j] % i == 0)
//					arr[j] = 0;
//			}
//		}
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (arr[i] != 0)
//				printf("%d ", arr[i]);
//			else
//				count++;
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}
////方法2：试除法
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	//题目相当于打印n以内的素数
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (is_prime(i) == 1)
//			{
//				printf("%d ", i);
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//	
//}

//BC79-图像相速度
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int a[100][100] = { 0 }, b[100][100] = { 0 };
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	int j = 0;
//	int count = 0.0;
//	//输入数据
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		
//		{
//		scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	//求相同元素的个数
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (a[i][j] == b[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	//求相速度注意乘以100
//	printf("%.2f\n", 100.0 * count / (m * n));
//	return 0;
//}

//BC80 - 验证登录
//#include <stdio.h>
//int main()
//{
//	char name[20] = { 0 };
//	char password[20] = { 0 };
//	while (scanf("%s %s", name, password) != EOF)
//	{
//		if (strcmp(name, "admin") == 0 && strcmp(password, "admin") == 0)
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}

//BC85 包含数字9的数
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		//判断i是否包含9
//		int t = i;
//		while (t)
//		{
//			if (t % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			t = t / 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//BC86 奇偶统计
////代码1
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int odd = 0;//奇数的个数
//	int even = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 1)
//			odd++;
//	}
//	printf("%d %d\n", odd, n - odd);
//	return 0;
//}
//代码2
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int odd = 0;//奇数的个数
	if (n % 2 == 0)
		odd = n / 2;//如果n是偶数，则奇数和偶数一样多
	else
		odd = n / 2 + 1;//如果n是奇数，则奇数比偶数多1
	printf("%d %d\n", odd, n - odd);
	return 0;
}