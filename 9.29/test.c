#define _CRT_SECURE_NO_WARNINGS 1


//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	while (scanf("%d", &num) != EOF)
//	{
//		if (num % 2 == 1)
//			printf("Odd\n");
//		else
//			printf("Even\n");
//	}
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	
//		int score[3] = { 0 };
//	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
//	{
//		int max = 0;//ÿһ����ԣ�max���ָ���0
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			if (score[i] > max)
//				max = score[i];
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}



//
//int main()
//{
//    char buf[100] = { 0 };
//    //����
//    gets(buf);
//    //ͳ��
//    int count_a = 0;
//    int count_b = 0;
//    int i = 0;
//    while (buf[i] != '0')
//    {
//        if (buf[i] == 'A')
//            count_a++;
//        if (buf[i] == 'B')
//            count_b++;
//        i++;
//    }
//    //���
//    if (count_a > count_b)
//    {
//        printf("A\n");
//    }
//    else if (count_a < count_b)
//    {
//        printf("B\n");
//    }
//    else
//    {
//        printf("E\n");
//    }
//    return 0;
//}

//
//int main()
//{
//    char buf[100] = { 0 };
//    //����
//    gets(buf);
//    //ͳ��
//    int flag = 0;
//    int i = 0;
//    while (buf[i] != '0')
//    {
//        if (buf[i] == 'A')
//            flag++;
//        if (buf[i] == 'B')
//            flag--;
//        i++;
//    }
//    //���
//    if (flag > 0)
//    {
//        printf("A\n");
//    }
//    else if (flag < 0)
//    {
//        printf("B\n");
//    }
//    else
//    {
//        printf("E\n");
//    }
//    return 0;
//}

//
//int main()
//{
//    //���벢ͳ��
//    int ch = 0;
//    int flag = 0;
//    while (((ch = getchar()) != '0') && ch != EOF)
//    {
//        if (ch == 'A')
//            flag++;
//        if (ch == 'B')
//            flag--;
//    }
//    if (flag > 0)
//        printf("A\n");
//    else if (flag < 0)
//        printf("B\n");
//    else
//        printf("E\n");
//    //���
//    return 0;
//}

#include <stdio.h>
//
//int main()
//{
//    int iq = 0;
//    while (scanf("%d", &iq) != EOF)
//    {
//        if (iq >= 140)
//            printf("Genius\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int iq = 0;
//    while (~scanf("%d", &iq))
//    {
//        if (iq >= 140)
//            printf("Genius\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    while (~scanf("%d", &score))
//    {
//        if (score >= 90 && score <= 100)
//            printf("Perfect\n");
//    }
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        if (score >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    while (~scanf("%d", &num))
//    {
//        if (num % 2 == 1)
//            printf("Odd\n");
//        else
//            printf("Even\n");
//    }
//    return 0;
//}
//

#include <stdio.h>

//int main()
//{
//    int n1 = 0;
//    int n2 = 0;
//    int n3 = 0;
//    while (~scanf("%d%d%d", &n1, &n2, &n3))
//    {
//        int max = n1 > n2 ? n1 : n2;
//        max = max > n3 ? max : n3;
//        printf("%d\n", max);
//    }
//
//    return 0;
//}

//
//int main()
//{
//    int num[3] = { 0 };
//    while (~scanf("%d%d%d", &num[0], &num[1], &num[2]))
//    {
//        int max = num[0];
//        int i = 0;
//        for (i = 1; i < 3; i++)
//        {
//            if (num[i] > max)
//            {
//                max = num[i];
//            }
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}

//
//
//int main()
//{
//    int num[3] = { 0 };
//    while (~scanf("%d%d%d", &num[0], &num[1], &num[2]))
//    {
//        int max = 0;
//        int i = 0;
//        for (i = 0; i < 3; i++)
//        {
//            if (num[i] > max)
//            {
//                max = num[i];
//            }
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int ch = 0;
//    //���Ԫ����ĸ������
//    char vowel[] = "AaEeIiOoUu";
//    //����
//    while ((ch = getchar()) != EOF)
//    {
//        //�ж�
//        int i = 0;
//        for (i = 0; i < 10; i++)
//        {
//            if (ch == vowel[i])
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        //
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//        getchar();//����\n
//    }
//    return 0;
//}
//


//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int ch = 0;
//    //���Ԫ����ĸ������
//    char vowel[] = "AaEeIiOoUu";
//    //����
//    while ((ch = getchar()) != EOF)
//    {
//        //�ж�
//        //strchr �������ж� ch�Ƿ����ַ�����vowel����
//        //��������ˣ�������vowel�ַ����е�ַ
//        //���û���ַ���
//        if (strchr(vowel, ch))
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//        getchar();//����\n
//    }
//    return 0;
//}


#include <stdio.h>
#include <string.h>

int main()
{
    int ch = 0;
    //���Ԫ����ĸ������
    char vowel[] = "AaEeIiOoUu";
    //����
    //��%c��ǰ����Ͽո񣬻�������ǰ�����еĿհ��ַ���Ȼ���ȡһ���ַ�
    while (scanf(" %c", &ch) != EOF)
    {
        //�ж�
        if (strchr(vowel, ch))
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
    return 0;
}
//
//
//

//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    int ch = 0;
//    //���Ԫ����ĸ������
//    char vowel[] = "AaEeIiOoUu";
//    //����
//    //��%c�ĺ�߸�һ��'\n'����ʵ������ʱ��ͻ����������\n�ַ�
//    //����Ϊ�´����¿հ��ַ�������
//    while (scanf("%c\n", &ch) != EOF)
//    {
//        //�ж�
//        if (strchr(vowel, ch))
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int ch = 0;
//    while (scanf("%c\n", &ch) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//
//    return 0;
//}
//
//#include  <ctype.h> 
//int main()
//{
//    int ch = 0;
//    while (scanf("%c\n", &ch) != EOF)
//    {
//        if (isalpha(ch))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int ch = 0;
//    while (~scanf("%c\n", &ch))
//    {
//        if (ch >= 'A' && ch <= 'Z')
//        {
//            printf("%c\n", ch + 32);
//        }
//        else if (ch >= 'a' && ch <= 'z')
//        {
//            printf("%c\n", ch - 32);
//        }
//    }
//
//    return 0;
//}

//isupper - �ж�һ����ĸ�ǲ��Ǵ�д��ĸ
//islower - �ж�һ����ĸ�ǲ���Сд��ĸ
//toupper - ��һ��Сд��ĸת���ɴ�д
//tolower - ��һ����д��ĸת����Сд

//#include <ctype.h>
//
//int main()
//{
//	int ch = 0;
//	while (~scanf("%c\n", &ch))
//	{
//		if (isupper(ch))
//		{
//			printf("%c\n", tolower(ch));
//		}
//		else if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//	}
//
//	return 0;
//}