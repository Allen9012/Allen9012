#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j]=set;//set �����üȿ�����ʾ*�ֿ���0
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;

	for (i = 0; i <=col; i++)//��ӡ�к�
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)//��Ϊ����ROWS������
	{
		printf("%d ", i);//�к�
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
			count--;//ֱ��0�˳�
		}
	}
}
//˼��׼������Χ���ּ��������м�����
//ע��ÿ������ַ������ַ���ASCII'1' - '0'����������1
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
		printf("�������Ų��׵�����\n");
	    scanf("%d%d", &x,&y);
	if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����2.������
			if (mine[x][y] == '1')
			{
				printf("���ź�,�㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else//������
			{
				//������Χ�м�����
				int count = get_mine_count(mine,x,y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�����������!\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}
