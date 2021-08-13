#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算器
//
//void menu()
//{
//	printf("**************************\n");
//	printf("**  1. add       2. sub **\n");
//	printf("**  3. mul       4. div **\n");
//	printf("**  5. xor       0. exit**\n");
//	printf("**************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//
//
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("**  1. add   2. sub**\n");
//	printf("**  3. mul   4. div**\n");
//	printf("**  5. xor   0.exit**\n");
//	printf("*********************\n");
//}
//void Calc(int(*pf)(int,int))//传地址
//{
//	int a = 0, b = 0;
//	printf("请输入2个操作数\n");
//	scanf("%d%d", pf(a,b));
//}
//int main()//法一  比较繁杂  可优化成回调函数
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);//穿的是函数名就是函数地址
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("请重新输入");
//			break;
//		}
//	} while (input);
//}

//int main()//法二  利用数组
//{
//	int input = 0,a=0,b=0;
//	//pfArr 是一个函数指针数组 - 转移表
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//		printf("请输入两个操作数");
//		scanf("%d%d", &a, &b);
//		int ret=pfArr[input](a,b);
//		printf("%d\n",ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
////指向函数指针数组的指针
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	//ppfArr是一个指向[函数指针数组]的指针
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr 是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//	//
//	return 0;
//}

////
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//
//void test( void (*p)(char*) )
//{
//	printf("test\n");
//	p("bit");//通过指针的函数地址来调用这个函数p就是print，即在函数内部去调用
//}
//
//int main()
//{
//
//	test(print);
//
//	return 0;
//}
//


//void BubbleSort(int arr[], int sz)
//{
//	//...
//}
//
////qsort - 可以排序任意类型的数据
//
//int main()
//{
//	//冒泡排序函数
//	//冒泡排序函数只能排序整形数组
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}