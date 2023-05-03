#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define ROW  3
#define COL  3


//初始化数组
void Initializeboard(char board[ROW][COL], int row, int col);
//打印数组
void Printboard(char board[ROW][COL], int row, int col);
//玩家下棋
void PersonMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char WhoWin(char board[ROW][COL], int row, int col);




//其他人版本的

//关于游戏相关的函数声明，符号声明，头文件的包含
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
////棋盘行列赋值
//#define X 3
//#define Y 3
////初始化棋盘
//void firstboard(char arr[X][Y]);
////打印菜单
//void menu();
////打印棋盘
//void printfboard(char arr[X][Y]);
////玩家下棋
//void playermove(char arr[X][Y]);
////电脑下棋
//void robotmove(char arr[X][Y]);
////判断输赢
//char bywin(char arr[X][Y]);
////判断平局
//char equal(char arr[X][Y]);
////输出结果
//void inwin(char i, char r);