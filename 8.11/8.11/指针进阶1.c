#define _CRT_SECURE_NO_WARNINGS 1
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz); //
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef" ��һ�������ַ������൱�ڰ�����ĸa����p
//	/**p = 'W';*/
//	printf("%s\n", p);
//
//	//printf("%c\n", *p);//�����ĸa
//	//printf("%s\n", p);//����ַ���
//
//	return 0;
//}

//
//www.stackoverflow.com
//Segmentation fault - �δ���
//segmentfault.com  
//
//

//

//ָ������ �����飬�������ָ���

//int main()
//{
//	int arr[10] = {0};//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a, &b, &c, &d};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));//������
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//����ָ��- ָ��


//int main()
//{
//	//int *p = NULL; //p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	               //����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = {0};
//	//arr- ��Ԫ�ص�ַ
//	//&arr[0] -��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];//�ַ�ָ������
//	char* (*pa)[5] = &arr;//pa���ַ�ָ�������ָ��
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{ 
//		printf("%d ", *(p + i));//�������׵�ַ+i
//	}
//
//	/*int (*pa)[10] = &arr;
//	int i = 0;*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa == arr�൱���׵�ַ  ����������
//	//}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	*/
//	return 0;
//}



//�������������ʽ
void print1(int arr[3][5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//������ָ�����ʽ
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}
int main()//��ά����
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };

	//print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
	print2(arr, 3, 5);//
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	//int i = 0;
	//int* p = arr;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", p[i]);
	//	printf("%d ", *(p + i));
	//	printf("%d ", *(arr + i));
	//	printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
	//}
	return 0;
}

//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//
//	//print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
//	print2(arr, 3, 5);//
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//	//}
//	return 0;
//}