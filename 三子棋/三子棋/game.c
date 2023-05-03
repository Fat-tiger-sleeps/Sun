#define _CRT_SECURE_NO_WARNINGS 1

//游戏相关函数的实现

#include "game.h"

int i = 0;
int j = 0;
//初始化棋盘（数组）的函数实现
void Initializeboard(char board[ROW][COL], int row, int col)
{
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


//打印棋盘（数组）的函数实现
void Printboard(char board[ROW][COL], int row, int col) 
{
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
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

//玩家下棋
void PersonMove(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;
	printf("玩家走>\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &i, &j);
		if (i > 0 && i <= row && j > 0 && j <= col)
		{
			if (board[i-1][j-1] != ' ')
			{
				printf("该位置已被占用，请重新选择坐标。\n");
			}
			else
			{
				board[i-1][j-1] = '*';
				break;
			}
		}
		else
		{
			printf("输入的坐标有误，请重新输入。\n");
		}
	}

}

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1)
	{
		int i = rand() % row;
		int j = rand() % col;
		if (board[i ][j ] == ' ')
		{
			board[i][j] = '#';
			break;
		}
		
	}
}



int Full(char board[ROW][COL], int row, int col)
{
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}

	return 1;
}
//判断游戏状态
char WhoWin(char board[ROW][COL], int row, int col)
{
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[0][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
			{
				return board[1][1];
			}
			else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
			{
				return board[1][1];
			}
		}
	}

	int ret = Full(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}
	else
		return  'C';
}




























//其他人版本的


//#include "game.h"
//
//int x = 0;
//int y = 0;
//int i = 0;
//
////初始化棋盘
//void firstboard(char arr[X][Y])
//{
//	for (x = 0; x < X; x++)
//	{
//		for (y = 0; y < Y; y++)
//		{
//			arr[x][y] = ' ';
//		}
//	}
//}
//
////菜单
//void menu()
//{
//	printf("***********************\n");
//	printf("****   三子棋游戏  ****\n");
//	printf("***********************\n");
//	printf("*****   1、开始   *****\n");
//	printf("***********************\n");
//	printf("*****   2、退出   *****\n");
//	printf("***********************\n");
//}
//
////棋盘
//void printfboard(char arr[X][Y])
//{
//	for (x = 0; x < X; x++)
//	{
//		for (y = 0; y < Y; y++)
//		{
//			printf(" %c ", arr[x][y]);
//			if (y < Y - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		for (y = 0; y < Y; y++)
//		{
//			if (x < X - 1)
//			{
//				if (y == Y - 1)
//				{
//					printf("---");
//				}
//				else
//				{
//					printf("----");
//				}
//			}
//		}
//		printf("\n");
//	}
//}
//
////玩家下棋
//void playermove(char arr[X][Y])
//{
//	printf("玩家下棋(请先输入行,空格后,再输入列)\n");
//	printf("请输入坐标:");
//	while (1)
//	{
//		scanf("%d %d", &x, &y);
//		if (x > 0 && x <= X && y > 0 && y <= Y)
//		{
//			if (arr[x - 1][y - 1] == ' ')
//			{
//				arr[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("坐标已被占用，请重新输入：");
//			}
//		}
//		else
//		{
//			printf("坐标非法，请重新输入：");
//		}
//	}
//}
//
////电脑下棋
//void robotmove(char arr[X][Y])
//{
//	printf("电脑下棋\n");
//	while (1)
//	{
//		x = rand() % X;
//		y = rand() % Y;
//		if (arr[x][y] == ' ')
//		{
//			arr[x][y] = '#';
//			break;
//		}
//	}
//}
//
////判断输赢
//char bywin(char arr[X][Y])
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < X; a++)
//	{
//		for (b = 0; b < Y; b++)
//		{
//			if (arr[a][b] == arr[a + 1][b] && arr[a + 1][b] == arr[a + 2][b] && arr[a][b] != ' ')
//			{
//				return arr[a][b];
//			}
//			else if (arr[a][b] == arr[a][b + 1] && arr[a][b + 1] == arr[a][b + 2] && arr[a][b] != ' ')
//			{
//				return arr[a][b];
//			}
//			else if (arr[a][b] == arr[a + 1][b + 1] && arr[a + 1][b + 1] == arr[a + 2][b + 2] && arr[a][b] != ' ')
//			{
//				return arr[a][b];
//			}
//			else if (arr[a][b] == arr[a + 1][b - 1] && arr[a + 1][b - 1] == arr[a + 2][b - 2] && arr[a][b] != ' ')
//			{
//				return arr[a][b];
//			}
//		}
//	}
//	return 0;
//}
//
////判断平局
//char equal(char arr[X][Y])
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < X; a++)
//	{
//		for (b = 0; b < Y; b++)
//		{
//			if (arr[a][b] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return '=';
//}
//
////输出结果
//void inwin(char i, char r)
//{
//	if (i == '*')
//	{
//		printf("恭喜玩家获胜！！！\n\n");
//		main();
//	}
//	else if (i == '#')
//	{
//		printf("电脑获胜！下次努力哦！\n\n");
//		main();
//	}
//	else if (r == '=')
//	{
//		printf("平局了！不服再战！\n\n");
//		main();
//	}
//}