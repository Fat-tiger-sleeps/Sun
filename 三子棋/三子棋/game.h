#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define ROW  3
#define COL  3


//��ʼ������
void Initializeboard(char board[ROW][COL], int row, int col);
//��ӡ����
void Printboard(char board[ROW][COL], int row, int col);
//�������
void PersonMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char WhoWin(char board[ROW][COL], int row, int col);




//�����˰汾��

//������Ϸ��صĺ�������������������ͷ�ļ��İ���
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
////�������и�ֵ
//#define X 3
//#define Y 3
////��ʼ������
//void firstboard(char arr[X][Y]);
////��ӡ�˵�
//void menu();
////��ӡ����
//void printfboard(char arr[X][Y]);
////�������
//void playermove(char arr[X][Y]);
////��������
//void robotmove(char arr[X][Y]);
////�ж���Ӯ
//char bywin(char arr[X][Y]);
////�ж�ƽ��
//char equal(char arr[X][Y]);
////������
//void inwin(char i, char r);