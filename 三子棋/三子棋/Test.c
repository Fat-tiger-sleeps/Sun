#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//������Ϸ���߼�

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
	//��������
	char board[ROW][COL];
	//��ʼ�����飨���̣�
	Initializeboard(board, ROW, COL);
	//��ӡ���飨���̣�
	Printboard(board, ROW, COL);
	while (1)
	{
		//�������
		PersonMove(board, ROW, COL);
		Printboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ�ñ���
		ret = WhoWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		Printboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ�ñ���
		ret = WhoWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	Printboard(board, ROW, COL);
	if (ret == '*')
	{
		printf("���ʤ����\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("׼����ʼ��Ϸ\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
	return 0;
}







//�����˰汾��

//#include "game.h"
//game()
//{
//	char arr[X][Y] = { 0 };
//	firstboard(arr);
//	printfboard(arr);
//	while (1)
//	{
//		//�������
//		playermove(arr);
//		printfboard(arr);
//
//		//�ж���Ӯ��ƽ��
//		bywin(arr);
//		char m = bywin(arr);
//		equal(arr);
//		char n = equal(arr);
//		inwin(m, n);
//
//		//��������
//		robotmove(arr);
//		printfboard(arr);
//
//		//�ж���Ӯ��ƽ��
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
//		//����˵�
//		menu();
//		printf("������ѡ�����:");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			//��ʼ��Ϸ
//			game();
//			break;
//		}
//		else if (input == 2)
//		{
//			//�˳���Ϸ
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//}