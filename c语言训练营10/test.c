#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//BC101 �༶�ɼ��������
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        double sum = 0.0;
//        int j = 0;
//        double score = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &score);
//            sum += score;
//            printf("%.1lf ", score);
//
//        }
//        printf("%.1lf\n", sum);
//    }
//    return 0;
//
//}

//BC102-����Ԫ�ض�λ
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int x = 0;
//    int y = 0;
//
//        scanf("%d %d", &n, &m);
//    //����c99�﷨-�䳤���飬�������鲻�ܳ�ʼ��
//    int arr[n][m];//�����ֵҲ��
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    scanf("%d%d", &x, &y);
//    printf("%d\n", arr[x - 1][y - 1]);
//    return 0;
//}

//BC103 �����������
//
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d%d", &n, &m);
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//BC104 ������
//#include<stdio.h>
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int i = 0;
//    int j = 0;
//    int num = 0;
//    int max = 0;
//    int x = 0, y = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &num);
//            if (num > max)
//            {
//                max = num;
//                x = i;
//                y = j;
//
//            }
//        }
//    }
//    printf("%d %d", x + 1, y + 1);
//    return 0;
//}


//BC105 ��������ж�
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int a1[10][10];
//    int a2[10][10];
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &a1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &a2[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (a1[i][j] != a2[i][j])
//                break;
//        }
//    }
//    if (i == n && j == m)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}

////BC106 �����Ǿ����ж�
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a[n][n];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	//�ж�
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i > j)
//			{
//				if (a[i][j] != 0)
//				{
//					//�������в���0�ľͲ�����
//					printf("NO");
//					return 0;
//				}
//			}
//		}
//	}
//	printf("YES");
//
//		return 0;
//}

//����ת��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[n][m];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include<stdio.h>
////BC108 ���󽻻�
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &n, &m);
//    int arr[n][m];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    //��������  �������һ��\n
//    scanf("%d", &k);
//    int a = 0, b = 0;
//    char t;
//    for (int i = 0; i < k; i++)
//    {
//        scanf(" %c %d %d", &t, &a, &b);
//        //�����a��b��Ҫ����-1��
//        if (t == 'r')
//        {
//            for (int j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')
//        {
//            for (int j = 0; j < n; j++)
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//
//        }
//        printf("\n");
//    }
//    return 0;
//}

//�������
#include <stdio.h>
int main()
{
	int arr[30][30] = { 0 };
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
					arr[i][j] = 1;
				if (j == 0)
					arr[i][j] = 1;
				if (i > 1 && j > 0)
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//BC110 ������
#include<stdio.h>
int main()
{
    int i = 0;
    int j = 0;
    int arr[3][3] = { 0 };
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf(" %c", &arr[i][j]);
            getchar();
        }
    }
    char flag = 'c';
    for (i = 0; i < 3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
        {
            flag = arr[i][0];
            break;
        }
        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[2][i] != 'O')
        {
            flag = arr[1][i];
            break;
        }
        if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
        {
            flag = arr[1][1];
            break;
        }
        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')
        {
            flag = arr[1][1];
            break;
        }
    }


    if (flag == 'K')
    {
        printf("KiKi wins!\n");
    }

    else if (flag == 'B')
    {
        printf("BoBo wins!\n");
    }
    else
    {
        printf("No winner!\n");
    }
    return 0;
}
