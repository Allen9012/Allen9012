#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()//���临ϰ
//{
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);Ҳ���� *û��
//			//Add(1, 2);Ҳ����
//	//printf("sum = %d\n", sum);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��ppArr=&pArr
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	
//	return 0;
//}
//void bubble_sort(int arr[],int sz)//�������ڵ�������
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)//i ��
//	{
//		//ĳһ������
//			for (j = 0; j < sz-1-i;j++)
//			if (arr[j]>arr[j + 1])//����ǱȽϷ���
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//	}
//}

//
//void qsort(
//  void *base, 
//	size_t num, 
//	size_t width, 
//	int( *cmp)(const void *e1, const void *e2)
//          );

//int cmp_int(const void* e1,const void *e2)//��ֹ���ͻ�������void
//{
//	return  *(int *)e1 - *(int *)e2;//�Ƚ���������ֵ, ǿ��ת��int*  �ٽ��������Ƚ�
//}
//
//
//void test1()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]),cmp_int);//�ÿ⺯��ʹ�÷���������������С���ֽڳ���,����
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void *e2)//��ֹ���ͻ�������void
//{//��������������int�� ����return��float ���Ҫ�ĳ�ѭ��
//	/*if (*(float *)e1 == *(float *)e2)
//	return  0;
//	else if ((*(float *)e1 > *(float *)e2))
//	return 1;
//	else return -1;*/
//	return ((int)*(float *)e2 - *(float *)e2);//Ҳ����ǿ���ٻ�
//}
//void test2()
//{
//		float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//		int sz = sizeof(f) / sizeof(f[0]);
//		qsort(f, sz, sizeof(f[0]), cmp_float);
//		int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			printf("%f\n", f[i]);
//		}
//}
//
//
//struct Stu
//	{
//		char name[20];
//		int age;
//	};
//
//int cmp_stu_by_age(const void*e1,const void *e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_by_name(const void*e1, const void *e2)
//{//�ַ����ıȽϲ�����><=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s)/sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);//�ṹ��Ƚ��Ǹ��ӵ�
//	int i = 0,j=0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", s[i].age);
//	}
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name); 
//	
//	for (j = 0; j < sz; j++)
//	{
//		printf("%s\n", s[j].name);
//	}
//}
//
////����ð����������ʹ����������������
//////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
//////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//
//void Swap(char* buf1,char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{//����
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void *base, int sz, int width,int(*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��ð�ݵĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪���������Ƚ������е�Ԫ��  �Ǿ�Ҫһ������
//	bubble_sort(arr, sz,sizeof(arr[0]),cmp_int);
//}
//
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]),cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()//qsort������ʾ�ص�����
//{
//
//
//
//	//float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0,4.0 };
//	//bubble_sort(arr, sz);//ֻ��һ�����Ͳ�ͨ��
//	/*test1();
//	test2();
//	test3();*/
//	test4();
//	test5();
//	return 0;
//}



//��void*

//int main()
//{
//	int a = 10;
//	//int* pa = &a;//
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;
//	//p++;
//
//	//p = &ch;
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ��н����ò���
//	//void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
//
//	return 0;
//}






//��ʦ����

////void bubble_sort(int arr[], int sz)
////{
////	int i = 0;
////	//����
////	for (i = 0; i < sz-1; i++)
////	{
////		//һ��ð������
////		int j = 0;
////		for (j = 0; j <sz-1-i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1 -*(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_float(const void*e1, const void*e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//	//           ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//	//
//}
//
////void qsort(void* base, 
////	       size_t num, 
////		   size_t width, 
////		   int( *cmp)(const void *e1, const void *e2)
////		   );
//
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//
//void Swap(char* buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void*base, int sz, int width, int (*cmp)(void*e1, void*e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	test5();
////	bubble_sort(arr, sz);
//
////	bubble_sort(f, sz);
//
//	
//
//	return 0;
//}



//�ڴ��С
int main()
{
	/*����������Ԫ�صĵ�ַ
	1. sizeof(������) - ��������ʾ��������
	2. &������ - ��������ʾ��������
	3.*������- ��ʾ��Ԫ�صĵ�ַ*/
	/*һά����*/
	int a[] = { 1, 2, 3, 4 };//4*4 = 16
	printf("%d\n", sizeof(a));//sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
	printf("%d\n", sizeof(a + 0));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*a));   //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
	printf("%d\n", sizeof(a + 1));//4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(a[1])); //4 - ��2��Ԫ�صĴ�С
	printf("%d\n", sizeof(&a));   //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*&a));  //16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
	printf("%d\n", sizeof(&a + 1));//4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
	printf("%d\n", sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
	//�ַ�����
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ-6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
	printf("%d\n", sizeof(arr));//sizeof��������������С��6*1 = 6�ֽ�
	printf("%d\n", sizeof(arr + 0));//4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
	printf("%d\n", sizeof(*arr));   //1   arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
	printf("%d\n", sizeof(arr[1])); //1
	printf("%d\n", sizeof(&arr));   //4/8 &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
	printf("%d\n", sizeof(&arr + 1));//4/8 &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
	printf("%d\n", sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ


	return 0;
}