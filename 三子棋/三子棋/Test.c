#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//测试游戏的逻辑

void menu()
{
	printf("*****************************************\n");
	printf("*********        1.play      ************\n");
	printf("*********        0.exit      ************\n");
	printf("*****************************************\n");
}

void game()
{
	char ret = 0;
	//定义数组
	char board[ROW][COL];
	//初始化数组（棋盘）
	Initializeboard(board, ROW, COL);
	//打印数组（棋盘）
	Printboard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PersonMove(board, ROW, COL);
		Printboard(board, ROW, COL);
		//判断玩家是否赢得比赛
		ret = WhoWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		Printboard(board, ROW, COL);
		//判断电脑是否赢得比赛
		ret = WhoWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	Printboard(board, ROW, COL);
	if (ret == '*')
	{
		printf("玩家胜利！\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜利\n");
	}
	else
	{
		printf("平局\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("准备开始游戏\n");
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







//其他人版本的

//#include "game.h"
//game()
//{
//	char arr[X][Y] = { 0 };
//	firstboard(arr);
//	printfboard(arr);
//	while (1)
//	{
//		//玩家下棋
//		playermove(arr);
//		printfboard(arr);
//
//		//判断输赢与平局
//		bywin(arr);
//		char m = bywin(arr);
//		equal(arr);
//		char n = equal(arr);
//		inwin(m, n);
//
//		//电脑下棋
//		robotmove(arr);
//		printfboard(arr);
//
//		//判断输赢与平局
//		bywin(arr);
//		m = bywin(arr);
//		equal(arr);
//		n = equal(arr);
//		inwin(m, n);
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		//进入菜单
//		menu();
//		printf("请输入选项序号:");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			//开始游戏
//			game();
//			break;
//		}
//		else if (input == 2)
//		{
//			//退出游戏
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//}