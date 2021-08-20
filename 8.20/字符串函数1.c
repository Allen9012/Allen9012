#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = "abc";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//1. 计数器的方法
//2. 递归
//3. 指针-指针
#include <assert.h>

//size_t == unsigned int
//

//strlen实现

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = my_strlen("abcdef");
//	////错误示范
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//int len = my_strlen(arr);
//
//	//printf("%d\n", len);
//	    //3           -     6 = -3
//	if (my_strlen("abc") - my_strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//strcpy 实现

//char* my_strcpy(char* dest, const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";//2
//
//	//错误的示范
//	//char *arr1 = "abcdefghi";//不可以修改
//	
//	
//	char arr2[] = "bit";//4
//	//错误的示范
//	//char arr2[] = { 'b', 'i', 't' };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcat实现

//char* my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//
//	//1. 找到目的字符串的'\0'
//	while (*dest != '\0')//\0直接跳出来了
//	{
//		dest++;
//	}
//	//2. 追加源字符串，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

//strcmp实现

//int main()
//{
//	//VS2013
//	//> 1
//	//== 0
//	//< -1
//
//	//linux-gcc
//	//> >0
//	//== 0
//	//< <0
//	char* p1 = "qbc";//6
//	char* p2 = "abc";//5
//
//	//int ret = strcmp(p1, p2);
//	if (strcmp(p1, p2)>0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("pa == p2\n");
//	}
//	else if (strcmp(p1, p2)<0)
//	{
//		printf("p1<p2\n");
//	}
//	//printf("%d\n", ret);
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//
//	//strncpy--模拟实现
//	strncpy(arr1, arr2, 6);
//
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxx";
//	char arr2[] = "world";
//	//
//	strncat(arr1, arr2, 8);
//	printf("%s\n", arr1);
//
//	return 0;
//}