#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,7,8,9,10,11 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}
//��������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,7,8,9,10,11 };
//	int(*parr)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*parr) + i));//(*parr)������ĵ�ַ���൱��ָ����������Ԫ�صĵ�ַ��(*parr)+i���൱����������ȷ��ÿһλ��
//									  //*(*(parr)+i)���൱�ڶ�������ÿ��Ԫ�ؽ��н����ã�������printf���������
//									  //��������д�������ڶ�ά���飬˭Ҫ��Ҫ��һά���������ôд��������ȥҽԺ�Һš�
//	}
//	return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*parr)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d  ", *(*(parr + i) + j));
//		}
//		//�ڶ�ά������������������ǵ�һ�У�����{1��3��5��7��9}������飬��(parr + i)������ǵ�i=1������{2��4��6��8��10}
//		//������飬��i=2ʱ����{11,13,15,17,19}������顣��*(parr + i)���н����õõ��ľ���ÿ����������Ԫ�صĵ�ַ��
//		//*(*(parr + i)+j)��*(parr + i)+j���ǵõ���Ԫ�ص�ַ�󣬼�j�õ��������֮���Ԫ�صĵ�ַ������ٶ�������ã��õ��ľ���
//		//�����ά������ÿ��Ԫ���ˡ�
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,3,5,7,9},{2,4,6,8,10},{11,13,15,17,19} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}


//дһ��������(δ�����Ż����������İ汾�ǶԱ��õ�)
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("*********************************\n");
//	printf("******  1.Add       2.Sub  ******\n");
//	printf("******  3.Mul       4.Div  ******\n");
//	printf("******        0.Exit       ******\n");
//	printf("*********************************\n");
//
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����!\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//ʹ�ú���ָ����������Ż�
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*********************************\n");
	printf("******  1.Add       2.Sub  ******\n");
	printf("******  3.Mul       4.Div  ******\n");
	printf("******        0.Exit       ******\n");
	printf("*********************************\n");

}
int main()
{
	int (*pfarr[5])(int, int) = { NULL, Add, Sub, Mul, Div };
	//���￪��5��ռ䣬����һ�����ָ��NULL��ԭ���ǣ�Ŀ¼ѡ����1-4��ѡ��ͬ�Ĳ�������0���˳������õģ�����Ϊ�������Ǵ�1��ʼ��
	//����������ơ�
	int input = 0;
	do
	{
		int ret = 0;
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			int x = 0;
			int y = 0;
			printf("����������������:>");
			scanf("%d %d", &x, &y);
			ret = (pfarr[input])(x, y);
			//pfarr[input]��pfarr�Ǻ�����������input�Ĳ�ͬ��ȥ����ָ���������ҵ���Ӧ�ĺ�����
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
		}
		else
		{
			printf("�����������������\n");
		}
	} while (input);
	return 0;
}
