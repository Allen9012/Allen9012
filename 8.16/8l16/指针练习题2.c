#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//T1

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//T2

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int *p;
//	p = a[0];
//
//	printf("%d\n", p[0]);
//
//	return 0;
//}

//T3

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//int (*)[4]  ----- int (*) [5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//T4

//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	int* p = arr;
//	//*(p + 2) == p[2] ==> *(arr+2) == arr[2]
//	arr[2]; // ==> *(arr+2)
//	/*int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));// aa[1]
//
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));*/
//
//	return 0;
//}


//T5

int main()
{
	char* a[] = { "work", "at", "alibaba" };
	char**pa = a;

	pa++;
	printf("%s\n", *pa);//
	return 0;
}



//T6

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}





//int main()
//{
//	char *p = "abcdef";//
//	return 0;
//}

//
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//
//	printf("%d, %d\n", *pulPtr, *(pulPtr + 3));
//
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr);//abcdef ---> fedcba
//	gets(arr);//读取一行
//	//逆序函数
//	reverse(arr);
//
//	printf("逆序后的字符串：%s\n", arr);//
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);//2 5
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	//2 22 222 2222 22222
//	//
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}