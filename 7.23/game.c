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
		//1.打印一行的数据
	/*	printf(" %c | %c | %c \n", board[i][0], board[i][1],board[i][2]);*//*这里有问题不能保证更多棋盘*/
		//2.打印分割行
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
	printf("玩家走:\n");
	printf("请输入要下的坐标：");
	while (1)
	{
		scanf("%d%d",&x,&y);//用空格隔开x和y
	//判断xy坐标合法性
	if (x >= 1 && x <= ROW &&y >= 1 && y <= col)
	{
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("该坐标被占用\n");
		}
	}
	else
	{
		printf("坐标非法请重新输入");
	}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("电脑走：\n");
	while (1)//加一个循环免得死循环
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
//返回1表示满
//返回0表示没满
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
				return 0;//没满
			}
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)//返回char
{
	int i = 0;
	for (i = 0; i < row; i++)//横三行
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//利用返回*来判断输赢那么判断符号也是*很方便判断是电脑还是选手
		}
	}
	for (i = 0; i < col; i++)//竖三列
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//判断平局
	if (i == IsFull(board, ROW, COL))
	{
		return 'Q';
	}//继续
	return 'C';
}
