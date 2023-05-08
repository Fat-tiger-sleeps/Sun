#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////使用回调函数优化计算器。
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
//
//int Calc(int(*pf)(int, int))//int(*pf)(int, int)这是一个函数指针，函数名是pf，指针类型是int(*)(int, int)。
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);//因为是把Add或Sub或Mul或Div的函数地址传送过来，pf中存储的是Add的地址，
//					//所以pf(x, y)是调用Add或Sub或Mul或Div的函数，来进行对x和y的计算。
//}
//void menu()
//{
//	printf("*********************************\n");
//	printf("******  1.Add       2.Sub  ******\n");
//	printf("******  3.Mul       4.Div  ******\n");
//	printf("******        0.Exit       ******\n");
//	printf("*********************************\n");
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		int ret = 0;
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);//Calc是一个函数，把Add函数的地址传过去。
//			printf("%d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//冒泡排序
//最初的方法，方法一：
//bubble_sort(int arr[], int sz)
//{
//	int i = 0;//趟数
//	for (i = 0; i < sz - 1; i++)//sz-1的原因是，10个元素需要走9趟就行了。
//	{
//		int j = 0;//这一趟排序的次数
//		for (j = 0; j < sz - 1 - i; j++)//sz-1-i的原因是，9-0一共10个元素，把9放到最后以为总共需要走9次，而把8放在9的前一位，
//										//总共需要走8位，所以要让j的次数是改变的，正好i的数值是每次+1的所以sz-1-i。
//		{
//			if (arr[j] > arr[j + 1])//如果前一位大于后一位，就将两个元素换位置。
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}




//test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//}

//print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//使用qsort函数来写冒泡函数
#include <stdlib.h>

//void qsort (void* base, 
//			  size_t num, 
//			  size_t size,
//            int (*compar)(const void*, const void*));//qsort函数的使用方法。


//int Callback_functions_sort(const void* e1, const void* e2)
//{
//	return *((int*)e1) - *((int*)e2);
//}
//test2()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), Callback_functions_sort);
//	print_arr(arr, sz);
//}
//用qsort函数对结构体进行排序(排序年龄)
//struct Stu
//{
//	char name[20];
//	int age;
//};

//int sort_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

//test3()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",15},{"wangwu",30}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_age);
//}
//
//int main()
//{
//	//test1();//数组{ 9,8,7,6,5,4,3,2,1,0 }的冒泡排序。
//	//test2();
//	test3();
//	return 0;
//}




//用qsort函数对结构体进行排序(排序年龄)
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_name(const void* e1, const void* e2)
//{
//	return strcmp( ((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//test4()
//{
//	struct Stu s[3] = { {"zhangsan",20},{"lisi",15},{"wangwu",30}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_name);
//}
//
//int main()
//{
//	//test1();数组{ 9,8,7,6,5,4,3,2,1,0 }的冒泡排序。
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}


//用qsort函数实现数组的降序排列。
//int bubble_sort(const void* e1, const void* e2)
//{
//	return  *((int*)e2) - *((int*)e1);
//}
//
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), bubble_sort);
//}

