#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

////ʹ�ûص������Ż���������
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
//int Calc(int(*pf)(int, int))//int(*pf)(int, int)����һ������ָ�룬��������pf��ָ��������int(*)(int, int)��
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);//��Ϊ�ǰ�Add��Sub��Mul��Div�ĺ�����ַ���͹�����pf�д洢����Add�ĵ�ַ��
//					//����pf(x, y)�ǵ���Add��Sub��Mul��Div�ĺ����������ж�x��y�ļ��㡣
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);//Calc��һ����������Add�����ĵ�ַ����ȥ��
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//ð������
//����ķ���������һ��
//bubble_sort(int arr[], int sz)
//{
//	int i = 0;//����
//	for (i = 0; i < sz - 1; i++)//sz-1��ԭ���ǣ�10��Ԫ����Ҫ��9�˾����ˡ�
//	{
//		int j = 0;//��һ������Ĵ���
//		for (j = 0; j < sz - 1 - i; j++)//sz-1-i��ԭ���ǣ�9-0һ��10��Ԫ�أ���9�ŵ������Ϊ�ܹ���Ҫ��9�Σ�����8����9��ǰһλ��
//										//�ܹ���Ҫ��8λ������Ҫ��j�Ĵ����Ǹı�ģ�����i����ֵ��ÿ��+1������sz-1-i��
//		{
//			if (arr[j] > arr[j + 1])//���ǰһλ���ں�һλ���ͽ�����Ԫ�ػ�λ�á�
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

//ʹ��qsort������дð�ݺ���
#include <stdlib.h>

//void qsort (void* base, 
//			  size_t num, 
//			  size_t size,
//            int (*compar)(const void*, const void*));//qsort������ʹ�÷�����


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
//��qsort�����Խṹ���������(��������)
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
//	//test1();//����{ 9,8,7,6,5,4,3,2,1,0 }��ð������
//	//test2();
//	test3();
//	return 0;
//}




//��qsort�����Խṹ���������(��������)
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
//	//test1();����{ 9,8,7,6,5,4,3,2,1,0 }��ð������
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}


//��qsort����ʵ������Ľ������С�
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

