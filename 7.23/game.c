#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j=0; j < col; j++)
		{
			board[i][j]=' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0,j=0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//1.��ӡһ�е�����
	/*	printf(" %c | %c | %c \n", board[i][0], board[i][1],board[i][2]);*//*���������ⲻ�ܱ�֤��������*/
		//2.��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x=0, y = 0;
	printf("�����:\n");
	printf("������Ҫ�µ����꣺");
	while (1)
	{
		scanf("%d%d",&x,&y);//�ÿո����x��y
	//�ж�xy����Ϸ���
	if (x >= 1 && x <= ROW &&y >= 1 && y <= col)
	{
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("�����걻ռ��\n");
		}
	}
	else
	{
		printf("����Ƿ�����������");
	}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("�����ߣ�\n");
	while (1)//��һ��ѭ�������ѭ��
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
			
	}
}
//����1��ʾ��
//����0��ʾû��
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//û��
			}
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)//����char
{
	int i = 0;
	for (i = 0; i < row; i++)//������
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//���÷���*���ж���Ӯ��ô�жϷ���Ҳ��*�ܷ����ж��ǵ��Ի���ѡ��
		}
	}
	for (i = 0; i < col; i++)//������
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//�ж�ƽ��
	if (i == IsFull(board, ROW, COL))
	{
		return 'Q';
	}//����
	return 'C';
}
