#define _CRT_SECURE_NO_WARNINGS 1

//����/����ͷ�ļ�

//���� - getchar() - ��ȡһ���ַ�������һ���ַ�
//     - putchar() - ��ӡ/���һ���ַ�


#include <stdio.h>

int main()
{
	int ch = 0;
	//EOF -- end of file - �ļ�������־ - ͨ����Ϊ�ļ���ĩβ��
	while ((ch = getchar()) != EOF)
	{
		putchar(ch + 32);
		printf("\n");
		getchar();//��ȡ\n
	}

	return 0;
}



//int main()
//{
//	int ch = 0;
//
//	ch = getchar();
//	putchar(ch+32);
//
//	return 0;
//}



//
//int main()
//{
//	int n = 0;
//	//����
//	scanf("%d", &n);//1234
//
//	//���
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//
//	//1234 % 10 = 4;
//	//1234 / 10 = 123;
//
//	//123 % 10 = 3;
//	//123 / 10 = 12;
//
//	//12 % 10 = 2;
//	//12 / 10 = 1;
//
//	//1 % 10 = 1;
//	//1 / 10 = 0;
//	return 0;
//}

//
//int main()
//{
//	//printf("0%o 0X%X\n", 1234, 1234);
//	printf("%#o %#X\n", 1234, 1234);
//	return 0;
//}


//int main()
//{
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.\n", sizeof(long long));
//
//	return 0;
//}



//\n ��һ��ת���ַ� - ����

//int main()
//{
//	printf("v   v\n");//����
//	printf(" v v \n");
//	printf("  v  \n");
//	return 0;
//}

//int main()
//{
//	printf("v   v\n v v \n  v  \n");//����
//	return 0;
//}


//д������
//main�����ǳ������� - �����Ǵ�main�����ĵ�һ�п�ʼִ�еģ�
//һ�������У����ҽ���һ��main����

//int main()
//{
//	//printf -�⺯�� - ������� - ������ͷ�ļ� - stdio.h
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}

//���� 