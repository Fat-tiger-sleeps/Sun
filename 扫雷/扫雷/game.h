#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW  9
#define COL  9
#define ROWS ROW+2
#define COLS COL+2
#define thunder 80

//��ʼ�����飨ɨ�����̣�
void InitializeBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ���飨ɨ�����̣�
void PrintBoard(char board[ROWS][COLS], int row, int col);

//������
void Layout_Bury(char bury[ROWS][COLS], int row, int col);

//�Ų���
void Investigation_Bury(char bury[ROWS][COLS],char show[ROWS][COLS], int row, int col);

