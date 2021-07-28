#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("******************\n");
	printf("***   1.play   ***\n");
	printf("***   0.exit   ***\n");
	printf("******************\n");
}
void game()
{//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11
	char show[ROWS][COLS] = { 0 };
	//2.排查好的雷的信息
	printf("扫雷\n");
	InitBoard(mine, ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印
	/*DisplayBoard(mine,ROW,COL);*/
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW, COL);//9*9
	//扫雷
	/*DisplayBoard(mine, ROW, COL);*/
	Findmine(mine, show, ROW, COL);

}
void test()
{
	srand((unsigned int)time(NULL));
	int input=0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:  game();
			break;
		case 0: printf("退出\n");
		default:printf("选择错误，重新选择");
		  break;
		}
	} while (input);//1为真0为假非0都为真
}
int main()
{
	test();
	return 0;
}