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
{//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11
	char show[ROWS][COLS] = { 0 };
	//2.�Ų�õ��׵���Ϣ
	printf("ɨ��\n");
	InitBoard(mine, ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ
	/*DisplayBoard(mine,ROW,COL);*/
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW, COL);//9*9
	//ɨ��
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:  game();
			break;
		case 0: printf("�˳�\n");
		default:printf("ѡ���������ѡ��");
		  break;
		}
	} while (input);//1Ϊ��0Ϊ�ٷ�0��Ϊ��
}
int main()
{
	test();
	return 0;
}