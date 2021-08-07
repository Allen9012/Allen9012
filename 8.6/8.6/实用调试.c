#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d", i);
//	}
//	getchar();//system("pause")
//	return;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 12; i++)
//			{
//				printf("hehe\n");
//				arr[i] = 0;
//			}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//
//	return 0;
//}
//int main()
//{
//	{
//		int tmp = 0;
//		printf("tmp = %d\n", tmp);
//	}
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	
//	return 0;
//}
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main() 
//{
//	int i = 0; int sum = 0;//保存最终结果 
//	int n = 0; int ret = 1;//保存n的阶乘 
//	scanf("%d", &n); 
//	for(i=1; i<=n; i++) 
//	{
//	int j = 0; 
//	ret = 1;
//	for (j = 1; j <= i; j++) 
//	{
//		ret *= j;//ret每次得变回去 
//	} 
//	sum += ret;
//}
//printf("%d\n", sum); return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//
//	//VC6.0 环境下 <=10 就死循环了
//	//gcc 编译器 <=11 就死循环了
//	//VS2013     <=12 死循环
//
//	for (i = 0; i <= 12; i++)//边打hehe边改0 越界
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}//到12后死循环了
//	system("pause");
//
//	return 0;
//}
//void my_strcpy(char*dest, char*src)
//{
//	while (*src!='\0')
//	{//传的是首地址
//	*dest = *src;//相当于把每一位赋给#
//	src++;//src解引用后指向b，对其++指向i
//	dest++;
//	}
//	*dest = *src;//还得把斜杠0搞过去
//}
//void my_strcpy(char*dest, char*src)
//{
//	while (*src != '\0')  //6.5分答案
//	{//传的是首地址
//		*dest++ = *src++;//相当于把每一位赋给#
//		//src解引用后指向b，对其++指向i
//	}
//	while (*dest++ = *src++)//7分答案
//		//判断条件里面先赋值后++
//	{
//		;//空语句返回继续循环
//	}
//	//斜杠0  字符ASCII是0 停下来了
//}
//void my_strcpy(char*dest, char*src)//传空指针后啥也不干
//{
//	if (dest != NULL&&src != NULL)
//	{
//       while (*dest++ = *src++)//7.5分答案
//		{
//			;
//		}
//	}
//}
//#include<assert.h>
//
//void my_strcpy(char*dest, char*src)//传空指针后啥也不干
//{
//	assert(dest!=NULL);//若为假什么都不会发生，若为真则会报错
//	assert(src != NULL);
//		while (*dest++ = *src++)//8分答案
//		{
//			;
//		}
//}
//#include<assert.h>
//
//void my_strcpy(char*dest,const char*src)//传空指针后啥也不干,同时用const返回过程错误
//{
//	assert(dest!=NULL);//若为假什么都不会发生，若为真则会报错
//	assert(src != NULL);
//		while (*dest++ = *src++)//9分答案
//		{
//			;
//		}
//}
//int main()
//{
//	//strcpy
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);//把arr2 拷贝到 arr1 
//	printf("%s\n",arr1);
//	//遇到了\0所以复制后虽然bit\0#####但是最后打印到bit就停了
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	int  *  p = &num;
//	// const 放在指针变量的*左边时，修饰的是*p,也就是说：不能通过p来改变*p（num）的值
//	// const 放在指针变量的*右边是，修饰的是指针变量p本身，p不能被改变了
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//(10分）
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言//保证指针的有效性
//	assert(src != NULL);//断言
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int *p = &a;
//	assert(p != NULL);
//	return 0;
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int sum = Add(a, b);
//	//printf("%d\n", sum);
//	printf("hehe\n");
//	printf("%c\n", 9);
//	printf("%c\n", 9);
//
//	printf("hehe\n");
//	puts("01\v2345");
//	return 0;
//}