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

//1. �������ķ���
//2. �ݹ�
//3. ָ��-ָ��
#include <assert.h>

//size_t == unsigned int
//

//strlenʵ��

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
//	////����ʾ��
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

//strcpy ʵ��

//char* my_strcpy(char* dest, const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";//2
//
//	//�����ʾ��
//	//char *arr1 = "abcdefghi";//�������޸�
//	
//	
//	char arr2[] = "bit";//4
//	//�����ʾ��
//	//char arr2[] = { 'b', 'i', 't' };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strcatʵ��

//char* my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//
//	//1. �ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')//\0ֱ����������
//	{
//		dest++;
//	}
//	//2. ׷��Դ�ַ���������\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
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

//strcmpʵ��

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
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
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
//	//strncpy--ģ��ʵ��
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