#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
	
	//int main()
	//{
	//	short s = 0;
	//	int a = 10;
	//	printf("%d\n", sizeof(s = a + 5));//2
	//	printf("%d\n", s);//0
	//
	//	//int a = 0;
	//	//char b = 'w';
	//	//int arr[10] = { 0 };
	//
	//	//printf("%d\n", sizeof a);
	//	//printf("%d\n", sizeof(int));
	//
	//	//printf("%d\n", sizeof(b));
	//	//printf("%d\n", sizeof(char));
	//
	//	//printf("%d\n", sizeof(arr));//10*4 = 40
	//	//printf("%d\n", sizeof(int [10]));
	//
	//	return 0;
	//}
	//int main()
	//{
	//	int a = 11;
	//	a = a | (1 << 2);
	//	printf("%d\n", a);//15
	//	a = a & (~(1<<2));
	//	printf("%d\n", a);//11
	//
	//	//0000000000000000000000000000001011
	//	//0000000000000000000000000000000100//1<<2
	//	//0000000000000000000000000000000001//1
	//	//��ԭ����
	//	//0000000000000000000000000000001111>>a= a | (1 << 2)
	//	//1111111111111111111111111111111011��λ��
	//	//0000000000000000000000000000000100��λȡ��
	//	//0000000000000000000000000000001011
	//	//
	//	//
	//	//int a = 0;
	//	////~ ����2���ƣ�λȡ��
	//	////00000000000000000000000000000000
	//	////11111111111111111111111111111111 - ����
	//	////11111111111111111111111111111110 - ����
	//	////10000000000000000000000000000001 - ԭ��
	//	////-1
	//	//printf("%d\n", ~a);
	//
	//	return 0;
	//}
//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//ǰ��++����++����ʹ��
//	printf("%d\n", a++);//����++����ʹ�ã���++
//	
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//int a = int(3.14);//err
//	printf("%d", a);
//	return 0;
//}


//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };//int4���ֽ�
//	char ch[10] = { 0 };//char1���ֽ�
//	printf("%d\n", sizeof(arr));//
//	printf("%d\n", sizeof(ch));//
//	test1(arr);//4���δ����׵�ַ ��ָ��  ��ƽ̨32λĬ��Ϊ4���ֽ�
//	test2(ch);//4
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++||++b||d++;//�л�����Ҳ����
//
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//2335
//	//
//	return 0;
//}
//��������Ľ����ʲô��
//int main() 
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4; 
//	i = a++ && ++b && d++; //��0�ͺ����ֱ�Ӳ���
//	//i = a++||++b||d++; 
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d); 
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//	
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//
//	//b = (a > 5 ? 3 : -3);
//
//	return 0;
//}
//int main()
//{
//	 int a = 1; //����1
//	int b = 2; 
//	int c = (a>b, a=b+10, a, b=a+1);//���ű��ʽ  c=13
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//	1 + 2;
//	return 0;
//}
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//���ú�����ʱ���()���Ǻ������ò�����
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
// ѧ��
//int float
//
//����һ���ṹ������-struct Stu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
// int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = {"����", 20, "2019010305"};
//	struct Stu* ps = &s1;//������
//	printf("%s\n", ps->name);//��ַ�ü�ͷ
//	printf("%d\n", ps->age);
	//�ṹ��ָ��->��Ա��

	/*printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);*/

	/*printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);*///��һ
	//�ṹ�����.��Ա��
	//return 0;

//int main()
//{
//		char a = 3;//
//		//00000000000000000000000000000011
//		//00000011 - a  ����Сһ���ֽ�
//		char b = 127; //01111111
//		//a��b������  �ȱ������
//			//00000000000000000000000000000011
//			//00000000000000000000000001111111
//			//00000000000000000000000010000010
//		//10000010-c
//				//11111111111111111111111110000010 - ����
//				//11111111111111111111111110000001 - ����
//				//10000000000000000000000001111110- ԭ��
//				//-126
//		char c = a + b;
//		printf("%d\n", c);
//		return 0;
//}
//ʵ��1
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4
//	printf("%u\n", sizeof(!c));//1
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = b + a + 3;
//
//	return 0;
//}



//int main()//������ʵ ��ͬ�����������һ��
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//
//	printf("a = %d\n", a);
//}
//
//

