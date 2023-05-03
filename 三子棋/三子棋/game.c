#define _CRT_SECURE_NO_WARNINGS 1

//��Ϸ��غ�����ʵ��

#include "game.h"

int i = 0;
int j = 0;
//��ʼ�����̣����飩�ĺ���ʵ��
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


//��ӡ���̣����飩�ĺ���ʵ��
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

//�������
void PersonMove(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;
	printf("�����>\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &i, &j);
		if (i > 0 && i <= row && j > 0 && j <= col)
		{
			if (board[i-1][j-1] != ' ')
			{
				printf("��λ���ѱ�ռ�ã�������ѡ�����ꡣ\n");
			}
			else
			{
				board[i-1][j-1] = '*';
				break;
			}
		}
		else
		{
			printf("����������������������롣\n");
		}
	}

}

//��������
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");
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
//�ж���Ϸ״̬
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




























//�����˰汾��


//#include "game.h"
//
//int x = 0;
//int y = 0;
//int i = 0;
//
////��ʼ������
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
////�˵�
//void menu()
//{
//	printf("***********************\n");
//	printf("****   ��������Ϸ  ****\n");
//	printf("***********************\n");
//	printf("*****   1����ʼ   *****\n");
//	printf("***********************\n");
//	printf("*****   2���˳�   *****\n");
//	printf("***********************\n");
//}
//
////����
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
////�������
//void playermove(char arr[X][Y])
//{
//	printf("�������(����������,�ո��,��������)\n");
//	printf("����������:");
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
//				printf("�����ѱ�ռ�ã����������룺");
//			}
//		}
//		else
//		{
//			printf("����Ƿ������������룺");
//		}
//	}
//}
//
////��������
//void robotmove(char arr[X][Y])
//{
//	printf("��������\n");
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
////�ж���Ӯ
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
////�ж�ƽ��
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
////������
//void inwin(char i, char r)
//{
//	if (i == '*')
//	{
//		printf("��ϲ��һ�ʤ������\n\n");
//		main();
//	}
//	else if (i == '#')
//	{
//		printf("���Ի�ʤ���´�Ŭ��Ŷ��\n\n");
//		main();
//	}
//	else if (r == '=')
//	{
//		printf("ƽ���ˣ�������ս��\n\n");
//		main();
//	}
//}