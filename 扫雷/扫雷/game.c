#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

int i = 0;
int j = 0;

//��ʼ������
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
//��ӡ����
void PrintBoard(char board[ROWS][COLS], int row, int col)
{
	printf("---------ɨ����Ϸ---------\n");
	abscissa(board, ROW, COL);		//��ӡ������̵��к�
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);		//��ӡ������̵��к�
		for (j = 1; j <= col; j++)
		{
			
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("---------ɨ����Ϸ---------\n");
}


//������
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

//�Ų���
void Investigation_Bury(char bury[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int sum = 0;
	while (sum< row*col-thunder)
	{
		//������Ҫ�Ų������
		printf("��������Ҫ�Ų������:>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)		//�ж�����ĺϷ���
		{
			if (bury[i][j] == '1')
			{
				printf("����ը���ˣ����ź�\n");
				PrintBoard(bury, row, col);
				break;
			}
			else
			{
				//û��ը�����͸�ͳ�����������Χ�ж��ٸ��ף�������Ϣ���͵�show������ȥ
				int count = Statistics_Number(bury,i,j);
				show[i][j] = count + '0';
				PrintBoard(show, row, col);		//��ʾ�Ų�����׵���Ϣ
				sum++;
			}
		}
		else
		{
			printf("���겻�Ϸ���������������\n");
		}
	}
	if (sum == row * col - thunder)
	{
		printf("��ϲ�㣬���׳ɹ���\n");
		PrintBoard(bury, row, col);
	}
}

