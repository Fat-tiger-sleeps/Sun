#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "hello world!";//�����������飬����������ָ��ͬ�ռ�ı�����
//	if (arr1 == arr2)
//	{
//		printf("arr1 and arr2 are same\n");
//	}
//	else
//	{
//		printf("arr1 and arr2 are not same\n");
//	}
//	char* str1 = "hello world!";//�������������ַ����������ַ��������ݲ����޸ģ�����str1��str2ָ�����ͬһ���ַ��
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
//��������ҵ�����Ϊhello world!�Ǹ������ַ����������ַ��������޸ģ����Գ����ҵ���

//int main()
//{
//	char arr[] = "hello world!";
//	arr[0] = "w";
//	printf("%s\n", arr);
//	return 0;
//}
//�������Ϳ����޸ģ���Ϊ����һ�����飬���������ڴ��п��ٳ�һ��ռ䣬���ռ��ڵ�ֵ�����޸ġ�


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
			printf("%d ", *(*(parr + i) + j));//p+i��pָ�����arr[3][5]�еĵ�һ���������arr[5]�ĵ�ַ������p+i����i����0��ʱ��
											  //*��p+i����ָ���˵�һ�������е�һ��Ԫ�صĵ�ַ����*(p+i)+j,����ָ���һ��������
											  //ÿ��Ԫ�صĵ�ַ������ٽ���*��*��p+i��+j����������н����õõ��õ�ַ����ֵ��
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