#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*************************\n");
	printf("****1.play     0.exit****\n");
	printf("*************************\n");
}
// c | c | c 
//---|---|---
// c | c | c 
//---|---|---
// c | c | c
void game()
{
	char ret = 0;
	char board[ROW][COL]={0};//�ȷſո�
	initboard(board,ROW,COL);//��ʼ����Ϸ,ÿһ��Ԫ�ض��ǿո�
	DisplayBoard(board,ROW,COL);//��ӡ����
	while (1)//����
	{
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);
		IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else
		{
			printf("ƽ��");
		}
	
}
void test()
{
	srand((unsigned int)time(NULL));//�����������
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("������\n");
			game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break; 
		default:printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);
}
main()
{
	test();
	return 0;
}