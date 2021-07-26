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
	char board[ROW][COL]={0};//先放空格
	initboard(board,ROW,COL);//初始化游戏,每一个元素都是空格
	DisplayBoard(board,ROW,COL);//打印棋盘
	while (1)//下棋
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		DisplayBoard(board, ROW, COL);
		IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局");
		}
	
}
void test()
{
	srand((unsigned int)time(NULL));//随机数生成器
	int input = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("三子棋\n");
			game();
			break;
		case 0:printf("退出游戏\n");
			break; 
		default:printf("选择错误请重新选择\n");
			break;
		}

	} while (input);
}
main()
{
	test();
	return 0;
}