#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������
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
//	printf("����������������:>");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//void Calc(int(*pf)(int,int))//����ַ
//{
//	int a = 0, b = 0;
//	printf("������2��������\n");
//	scanf("%d%d", pf(a,b));
//}
//int main()//��һ  �ȽϷ���  ���Ż��ɻص�����
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);//�����Ǻ��������Ǻ�����ַ
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("����������");
//			break;
//		}
//	} while (input);
//}

//int main()//����  ��������
//{
//	int input = 0,a=0,b=0;
//	//pfArr ��һ������ָ������ - ת�Ʊ�
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//		printf("����������������");
//		scanf("%d%d", &a, &b);
//		int ret=pfArr[input](a,b);
//		printf("%d\n",ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
////ָ����ָ�������ָ��
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	//ppfArr��һ��ָ��[����ָ������]��ָ��
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
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
//	p("bit");//ͨ��ָ��ĺ�����ַ�������������p����print�����ں����ڲ�ȥ����
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
////qsort - ���������������͵�����
//
//int main()
//{
//	//ð��������
//	//ð��������ֻ��������������
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}