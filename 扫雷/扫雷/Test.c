#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void nemu()
{
	printf("*****************************************\n");
	printf("*********        1.Play       ***********\n");
	printf("*********        0.Exit       ***********\n");
	printf("*****************************************\n");
}

void game()
{
	char bury[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘（数组）——埋藏雷的棋盘——初始化11*11的方格
	InitializeBoard(bury, ROWS, COLS, '0');
	//初始化棋盘（数组）——显示雷的个数的棋盘——初始化11*11的方格
	InitializeBoard(show, ROWS, COLS, '*');

	//打印棋盘——打印9*9的方格并显示'0'或'*'
	//PrintBoard(bury, ROW, COL);
	PrintBoard(show, ROW, COL);

	//布置雷
	Layout_Bury(bury, ROW, COL);
	PrintBoard(bury, ROW, COL);		//布置完成后打印出来
	//排查雷
	Investigation_Bury(bury,show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		nemu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}