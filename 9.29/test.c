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
//		int max = 0;//每一组测试，max都恢复到0
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
//    //输入
//    gets(buf);
//    //统计
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
//    //输出
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
//    //输入
//    gets(buf);
//    //统计
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
//    //输出
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
//    //输入并统计
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
//    //输出
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
//    //存放元音字母的数组
//    char vowel[] = "AaEeIiOoUu";
//    //输入
//    while ((ch = getchar()) != EOF)
//    {
//        //判断
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
//        getchar();//处理\n
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
//    //存放元音字母的数组
//    char vowel[] = "AaEeIiOoUu";
//    //输入
//    while ((ch = getchar()) != EOF)
//    {
//        //判断
//        //strchr 是用来判断 ch是否在字符串中vowel出现
//        //如果出现了，返回在vowel字符串中地址
//        //如果没出现发，
//        if (strchr(vowel, ch))
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//        getchar();//处理\n
//    }
//    return 0;
//}


#include <stdio.h>
#include <string.h>

int main()
{
    int ch = 0;
    //存放元音字母的数组
    char vowel[] = "AaEeIiOoUu";
    //输入
    //在%c的前面加上空格，会消化掉前面所有的空白字符，然后读取一个字符
    while (scanf(" %c", &ch) != EOF)
    {
        //判断
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
//    //存放元音字母的数组
//    char vowel[] = "AaEeIiOoUu";
//    //输入
//    //在%c的后边给一个'\n'，其实在输入时候就会消化掉这个\n字符
//    //不会为下次留下空白字符的隐患
//    while (scanf("%c\n", &ch) != EOF)
//    {
//        //判断
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

//isupper - 判断一个字母是不是大写字母
//islower - 判断一个字母是不是小写字母
//toupper - 把一个小写字母转换成大写
//tolower - 把一个大写字母转换成小写

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