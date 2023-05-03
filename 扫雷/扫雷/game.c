#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

int i = 0;
int j = 0;

//初始化棋盘
void InitializeBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

int abscissa(char board[ROW][COL], int row, int col)
{
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
}
//打印棋盘
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	printf("---------扫雷游戏---------\n");
	abscissa(board, ROW, COL);		//打印输出棋盘的列号
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);		//打印输出棋盘的行号
		for (j = 1; j <= col; j++)
		{
			
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------扫雷游戏---------\n");
}


//布置雷
void Layout_Bury(char bury[ROWS][COLS], int row, int col)
{
	int sum = thunder;
	while (sum)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (bury[x][y] == '0')
		{
			bury[x][y] = '1';
			sum--;
		}
	}
	
}


static int Statistics_Number(char bury[ROWS][COLS], int i, int j)
{
	return  bury[i - 1][j - 1] +
			bury[i - 1][j] +
			bury[i - 1][j + 1] +
			bury[i][j - 1] +
			bury[i][j + 1] +
			bury[i + 1][j - 1]+
			bury[i + 1][j] +
			bury[i + 1][j + 1] - 8 * '0';
}

//排查雷
void Investigation_Bury(char bury[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int sum = 0;
	while (sum< row*col-thunder)
	{
		//输入想要排查的坐标
		printf("请输入想要排查的坐标:>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)		//判断坐标的合法性
		{
			if (bury[i][j] == '1')
			{
				printf("您被炸死了，很遗憾\n");
				PrintBoard(bury, row, col);
				break;
			}
			else
			{
				//没被炸死，就该统计这个坐标周围有多少个雷，并将信息传送到show数组中去
				int count = Statistics_Number(bury,i,j);
				show[i][j] = count + '0';
				PrintBoard(show, row, col);		//显示排查出的雷的信息
				sum++;
			}
		}
		else
		{
			printf("坐标不合法，，请重新输入\n");
		}
	}
	if (sum == row * col - thunder)
	{
		printf("恭喜你，排雷成功！\n");
		PrintBoard(bury, row, col);
	}
}

