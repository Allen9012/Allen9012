#define _CRT_SECURE_NO_WARNINGS 1
#include <ctype.h>
#include<stdio.h>
#include<assert.h>
//int main()
//{
//	//char ch = '2';
//	////int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//char ch = tolower('q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//#include <assert.h>
//
//struct S
//{
//	char name[20];
//	int age;
//};

//void my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while(num--)//ѭ������
//	{
//		*(char*)dest = *(char*)src;//Ԫ�ر�
//		dest=(char*)dest + 1;//ָ����
//		src = (char*)src + 1;
//	}
//	return ret;
//}

////
////C���Ա�׼��
////memcpy ֻҪ���� ���ص����ڴ濽���Ϳ��� - 60  - 100
////memmove �����ص��ڴ�Ŀ��� - 100
////
//
void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//ǰ->��
		while (num--)
		{
			*(char*)dest = *(char*)src;//Ԫ�ر�
			dest = (char*)dest + 1;//ָ����
			src = (char*)src + 1;
		}
	}
	else
	{
		//��->ǰ
		while(num--)
		{
			*((char*)dest+num) = *((char*)src+num);//Ԫ�ر�
			
		}
	}
		return ret;
}

int  main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i = 0;
	/*my_memcpy(arr+2, arr, 20);*/

	my_memmove(arr + 2, arr, 20);//�����ڴ��ص��������
	//my_memmove(arr , arr+ 2, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
// 
// 
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5};
//	int arr2[5] = { 0 };
//
//	/*struct S arr3[] = { { "����", 20 }, { "����", 30 } };
//	struct S arr4[3] = {0};
//	my_memcpy(arr2, arr1, sizeof(arr1));
//*/
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	//char* dest, const char*src
//	//strcpy(arr2, arr1);
//
//	return 0;
//}