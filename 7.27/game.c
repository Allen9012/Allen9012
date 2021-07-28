#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j]=set;//set 巧妙让既可以显示*又可以0
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;

	for (i = 0; i <=col; i++)//打印列号
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)//因为传了ROWS少两个
	{
		printf("%d ", i);//行号
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand()% row+1;//1-9
		int y = rand() % col + 1;//1-9   mod9=>0-8 need add 1
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;//直到0退出
		}
	}
}
//思考准备把周围数字加起来看有几个雷
//注意每个存的字符都是字符而ASCII'1' - '0'正好是数字1
int get_mine_count(char mine[ROWS][COLS],  int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int win = 0;
	//9 * 9
	while (win<row*col - EASY_COUNT)
	{
		printf("请输入排查雷的坐标\n");
	    scanf("%d%d", &x,&y);
	if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷2.不是雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//不是雷
			{
				//计算周围有几个雷
				int count = get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标非法请重新输入!\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}
