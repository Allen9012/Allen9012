#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//BC87 ͳ�Ƴɼ�
//int main()
//{
//	int n = 0;
//	double sum = 0.0;
//	double avg = 0.0;
//	double min = 100.0;
//	double max = 0.0;
//	double score = 0.0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//	scanf("%lf", &score);
//	sum += score;
//	if (score > max)
//	max = score;
//	if (score < min)
//	min = score;
//	}
//	avg = sum / n;
//	printf("%.2lf %.2lf %.2lf\n", max, min, avg);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//
//	{
//	for (j = 0; j < m; j++)
//	{
//	scanf("%d", &tmp);
//	if (tmp > 0)
//	sum += tmp;
//	}
//	}
//	printf("%d", sum);
//	return 0;
//}

//BC92 �������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i > 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//BC95 ��߷�����ͷ�֮��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int score = 0;
//    int max = 0;
//    int min = 100;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &score);
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//    }
//    printf("%d\n", max - min);
//
//    return 0;
//}

////BC96 ���������ж�
//#include<stdio.h>
//int  main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int flag1 = 0;
//    int flag2 = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//            {
//                flag1 = 1;
//            }
//            else
//            {
//                flag2 = 1;
//            }
//        }
//    }
//    if (flag1 + flag2 == 1)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//    return 0;
//}

//BC98 ������ɾ��ָ������
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[50];
    //��n��
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del = 0;
    scanf("%d", &del);
    //Ҫɾ��������
    int j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != del)
        {
            arr[j++] = arr[i];
        }

    }
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

}


//BC99 ����������ȥ��
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                //���ȥ�� �����Ԫ����ǰ�渲��
//                int k = 0;
//                for (k = j; k < n - 1; k++)//��ֹԽ��
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;//��һ��Ԫ��
//                j--;//�п���������ȥ�ز��ܱ�©��
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//BC100 �������кϲ�
#include <stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    int arr1[100] = { 0 };
    int arr2[100] = { 0 };
    //����
    scanf("%d %d", &n, &m);
    int i = 0;
    
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //����
    int j = 0;
    i = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    else
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }
    return 0;
}