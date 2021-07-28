#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10
void InitBoard(char board[ROWS][COLS], int rows,int cols,char set);
void DisplayBoard(char board[ROWS][COLS], int row,int col);
void SetMine(char board[ROWS][COLS], int row, int col);//row和col是要打印或者改变的元素数要操作的是9
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int row,int col);