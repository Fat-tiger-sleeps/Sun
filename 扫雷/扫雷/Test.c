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
	//��ʼ�����̣����飩��������׵����̡�����ʼ��11*11�ķ���
	InitializeBoard(bury, ROWS, COLS, '0');
	//��ʼ�����̣����飩������ʾ�׵ĸ��������̡�����ʼ��11*11�ķ���
	InitializeBoard(show, ROWS, COLS, '*');

	//��ӡ���̡�����ӡ9*9�ķ�����ʾ'0'��'*'
	//PrintBoard(bury, ROW, COL);
	PrintBoard(show, ROW, COL);

	//������
	Layout_Bury(bury, ROW, COL);
	PrintBoard(bury, ROW, COL);		//������ɺ��ӡ����
	//�Ų���
	Investigation_Bury(bury,show, ROW, COL);

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		nemu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
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