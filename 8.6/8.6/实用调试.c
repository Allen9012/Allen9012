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
//	int i = 0; int sum = 0;//�������ս�� 
//	int n = 0; int ret = 1;//����n�Ľ׳� 
//	scanf("%d", &n); 
//	for(i=1; i<=n; i++) 
//	{
//	int j = 0; 
//	ret = 1;
//	for (j = 1; j <= i; j++) 
//	{
//		ret *= j;//retÿ�εñ��ȥ 
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
//	//VC6.0 ������ <=10 ����ѭ����
//	//gcc ������ <=11 ����ѭ����
//	//VS2013     <=12 ��ѭ��
//
//	for (i = 0; i <= 12; i++)//�ߴ�hehe�߸�0 Խ��
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}//��12����ѭ����
//	system("pause");
//
//	return 0;
//}
//void my_strcpy(char*dest, char*src)
//{
//	while (*src!='\0')
//	{//�������׵�ַ
//	*dest = *src;//�൱�ڰ�ÿһλ����#
//	src++;//src�����ú�ָ��b������++ָ��i
//	dest++;
//	}
//	*dest = *src;//���ð�б��0���ȥ
//}
//void my_strcpy(char*dest, char*src)
//{
//	while (*src != '\0')  //6.5�ִ�
//	{//�������׵�ַ
//		*dest++ = *src++;//�൱�ڰ�ÿһλ����#
//		//src�����ú�ָ��b������++ָ��i
//	}
//	while (*dest++ = *src++)//7�ִ�
//		//�ж����������ȸ�ֵ��++
//	{
//		;//����䷵�ؼ���ѭ��
//	}
//	//б��0  �ַ�ASCII��0 ͣ������
//}
//void my_strcpy(char*dest, char*src)//����ָ���ɶҲ����
//{
//	if (dest != NULL&&src != NULL)
//	{
//       while (*dest++ = *src++)//7.5�ִ�
//		{
//			;
//		}
//	}
//}
//#include<assert.h>
//
//void my_strcpy(char*dest, char*src)//����ָ���ɶҲ����
//{
//	assert(dest!=NULL);//��Ϊ��ʲô�����ᷢ������Ϊ����ᱨ��
//	assert(src != NULL);
//		while (*dest++ = *src++)//8�ִ�
//		{
//			;
//		}
//}
//#include<assert.h>
//
//void my_strcpy(char*dest,const char*src)//����ָ���ɶҲ����,ͬʱ��const���ع��̴���
//{
//	assert(dest!=NULL);//��Ϊ��ʲô�����ᷢ������Ϊ����ᱨ��
//	assert(src != NULL);
//		while (*dest++ = *src++)//9�ִ�
//		{
//			;
//		}
//}
//int main()
//{
//	//strcpy
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);//��arr2 ������ arr1 
//	printf("%s\n",arr1);
//	//������\0���Ը��ƺ���Ȼbit\0#####��������ӡ��bit��ͣ��
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	int n = 100;
//	int  *  p = &num;
//	// const ����ָ�������*���ʱ�����ε���*p,Ҳ����˵������ͨ��p���ı�*p��num����ֵ
//	// const ����ָ�������*�ұ��ǣ����ε���ָ�����p����p���ܱ��ı���
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//(10�֣�
//{
//	char* ret = dest;
//	assert(dest != NULL);//����//��ָ֤�����Ч��
//	assert(src != NULL);//����
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
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
//	//�ַ�������
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
//	assert(str != NULL);//��ָ֤�����Ч��
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