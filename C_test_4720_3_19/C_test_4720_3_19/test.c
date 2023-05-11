#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void qsort(void* base, 
//			 size_t num, 
//			 size_t size,
//			 int (*compar)(const void*, const void*));//官方给的标准的qsort函数。


//自己用代码实现qsort函数
//int cmp_int(const void* e1, const void* e2)//数组的比较
//{
//	return (*(int*)e1) - (*(int*)e2);//升序
//  //return (*(int*)e2) - (*(int*)e1);//降序
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_age_name(const void* e1, const void* e2)//结构体的比较
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//按照年龄排序
//	//return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//按照姓名排序
//}
//
//void Swap(char* ps1, char* ps2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *ps1;
//		*ps1 = *ps2;
//		*ps2 = tmp;
//		ps1++;
//		ps2++;
//	}
//}
//
//void bubble_qosrt_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	//要走的趟数
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//每趟要走的次数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//开始比较
//			if (cmp ((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//开始交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//
//
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_qosrt_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void test2()
//{
//	struct Stu s[3] = { {"zhangsan",25},{"lisi",20},{"wangwu",30}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_qosrt_sort(s, sz, sizeof(s[0]), cmp_age_name);
//}
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


int main()
{
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a + 0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(*&a));
	////sizeof(*&a)中*和&可以抵消，因为&a把数组的整个地址取出来，再对其解引用，得到的还是数组a。
	//printf("%d\n", sizeof(&a + 1));
	////&a取出的是整个数组a的地址，在对其+1，指针就指向了数组a后面的空间，但也是地址啊，只要是地址就是4/8个字节。
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));



	// 字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	////arr[1]是数组第二个元素就是b，sizeof(arr[1])就是求b的字节，就是1计算.
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	////&arr取出的是数组arr的地址,是数组指针char(*)[6]这样的,但是函数strlen中要求传参使用的是char* str,是char*类型的,
	////传过来的时候,因为要听strlen的话,所以会被强制转换成char*,所以还是求从a往后找\0.
	//printf("%d\n", strlen(&arr + 1));
	//printf("%d\n", strlen(&arr[0] + 1));


	/*char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr + 0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr + 1));
	printf("%d\n", sizeof(&arr[0] + 1));

	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr + 0));
	printf("%d\n", strlen(*arr));
	printf("%d\n", strlen(arr[1]));
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr + 1));
	printf("%d\n", strlen(&arr[0] + 1));*/



	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p + 1));
	//printf("%d\n", sizeof(*p));
	//printf("%d\n", sizeof(p[0]));
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));
	//printf("%d\n", strlen(p + 1));
	//printf("%d\n", strlen(*p));
	//printf("%d\n", strlen(p[0]));
	//printf("%d\n", strlen(&p));//随机值
	//printf("%d\n", strlen(&p + 1));//随机值(二者之间没有任何关系)
	//printf("%d\n", strlen(&p[0] + 1));


	//二维数组
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a[0][0]));
	printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(a[0] + 1));

	printf("%d\n", sizeof(*(a[0] + 1)));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*(a + 1)));
	printf("%d\n", sizeof(&a[0] + 1));
	printf("%d\n", sizeof(*(&a[0] + 1)));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[3]));


	return 0;
}


//总结： 数组名的意义：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。




