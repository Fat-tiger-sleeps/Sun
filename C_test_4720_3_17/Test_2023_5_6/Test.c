#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//方法一：
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
//方法二：
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,7,8,9,10,11 };
//	int(*parr)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*parr) + i));//(*parr)是数组的地址，相当于指向的数组的首元素的地址，(*parr)+i，相当于数组往后确认每一位，
//									  //*(*(parr)+i)，相当于对数组中每个元素进行解引用，再利用printf函数输出。
//									  //但是这种写法适用于二维数组，谁要是要求一维数组必须这么写，建议他去医院挂号。
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
//		//在二维数组中数组名代表的是第一行，就是{1，3，5，7，9}这个数组，而(parr + i)代表的是当i=1，就是{2，4，6，8，10}
//		//这个数组，当i=2时就是{11,13,15,17,19}这个数组。对*(parr + i)进行解引用得到的就是每个数组中首元素的地址，
//		//*(*(parr + i)+j)中*(parr + i)+j就是得到首元素地址后，加j得到这个数组之后的元素的地址，最后再对其解引用，得到的就是
//		//这个二维数组中每个元素了。
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


//写一个计算器(未进行优化，很垃圾的版本是对比用的)
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序!\n");
//			break;
//		default:
//			printf("选择错误，请重新选择!\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//使用函数指针数组进行优化
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
	//这里开辟5块空间，而第一块给空指针NULL的原因是：目录选项上1-4是选择不同的操作，而0是退出程序用的，所以为了让他们从1开始，
	//所以这样设计。
	int input = 0;
	do
	{
		int ret = 0;
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			int x = 0;
			int y = 0;
			printf("请输入两个操作数:>");
			scanf("%d %d", &x, &y);
			ret = (pfarr[input])(x, y);
			//pfarr[input]：pfarr是函数名，根据input的不同，去函数指针数组中找到对应的函数。
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	return 0;
}
