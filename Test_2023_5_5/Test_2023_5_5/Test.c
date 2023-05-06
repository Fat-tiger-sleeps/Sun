#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "hello world!";//这两个是数组，他们两个是指向不同空间的变量。
//	if (arr1 == arr2)
//	{
//		printf("arr1 and arr2 are same\n");
//	}
//	else
//	{
//		printf("arr1 and arr2 are not same\n");
//	}
//	char* str1 = "hello world!";//这是两个常量字符串，常量字符串的内容不能修改，所以str1和str2指向的是同一块地址。
//	char* str2 = "hello world!";
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//	return 0;
//}



//int main()
//{
//	char* str = "hello world!";
//	*str = "w";
//	printf("%s\n", str);
//	return 0;
//}
//这个程序会挂掉，因为hello world!是个常量字符串，常量字符串不能修改，所以程序会挂掉。

//int main()
//{
//	char arr[] = "hello world!";
//	arr[0] = "w";
//	printf("%s\n", arr);
//	return 0;
//}
//这个程序就可以修改，因为他是一个数组，数组是在内存中开辟出一块空间，这块空间内的值可以修改。


//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* str[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(str[i] + j));
//			printf("%d ", str[i][j]);//str[i][j] == *(str[i]+j)
//		}
//		printf("\n");
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
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
void print2(int(*parr)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(parr + i) + j));//p+i，p指向的是arr[3][5]中的第一个数组就是arr[5]的地址。所以p+i（当i等于0的时候）
											  //*（p+i）就指向了第一个数组中第一个元素的地址，再*(p+i)+j,就是指向第一个数组中
											  //每个元素的地址，随后再进行*（*（p+i）+j），对其进行解引用得到该地址的数值。
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {3,4,5,6,7},{4,5,6,7,8},{5,6,7,8,9} };
	//print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}