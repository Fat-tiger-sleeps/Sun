#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW  9
#define COL  9
#define ROWS ROW+2
#define COLS COL+2
#define thunder 80

//初始化数组（扫雷棋盘）
void InitializeBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印数组（扫雷棋盘）
void PrintBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void Layout_Bury(char bury[ROWS][COLS], int row, int col);

//排查雷
void Investigation_Bury(char bury[ROWS][COLS],char show[ROWS][COLS], int row, int col);

