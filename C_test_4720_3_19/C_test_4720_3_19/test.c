#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void qsort(void* base, 
//			 size_t num, 
//			 size_t size,
//			 int (*compar)(const void*, const void*));//�ٷ����ı�׼��qsort������


//�Լ��ô���ʵ��qsort����
//int cmp_int(const void* e1, const void* e2)//����ıȽ�
//{
//	return (*(int*)e1) - (*(int*)e2);//����
//  //return (*(int*)e2) - (*(int*)e1);//����
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_age_name(const void* e1, const void* e2)//�ṹ��ıȽ�
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//������������
//	//return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//������������
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
//	//Ҫ�ߵ�����
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//ÿ��Ҫ�ߵĴ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//��ʼ�Ƚ�
//			if (cmp ((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//��ʼ����
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
	//һά����
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));
	//printf("%d\n", sizeof(a + 0));
	//printf("%d\n", sizeof(*a));
	//printf("%d\n", sizeof(a + 1));
	//printf("%d\n", sizeof(a[1]));
	//printf("%d\n", sizeof(&a));
	//printf("%d\n", sizeof(*&a));
	////sizeof(*&a)��*��&���Ե�������Ϊ&a�������������ַȡ�������ٶ�������ã��õ��Ļ�������a��
	//printf("%d\n", sizeof(&a + 1));
	////&aȡ��������������a�ĵ�ַ���ڶ���+1��ָ���ָ��������a����Ŀռ䣬��Ҳ�ǵ�ַ����ֻҪ�ǵ�ַ����4/8���ֽڡ�
	//printf("%d\n", sizeof(&a[0]));
	//printf("%d\n", sizeof(&a[0] + 1));



	// �ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", sizeof(arr + 0));
	//printf("%d\n", sizeof(*arr));
	//printf("%d\n", sizeof(arr[1]));
	////arr[1]������ڶ���Ԫ�ؾ���b��sizeof(arr[1])������b���ֽڣ�����1����.
	//printf("%d\n", sizeof(&arr));
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));

	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(arr + 0));
	//printf("%d\n", strlen(*arr));
	//printf("%d\n", strlen(arr[1]));
	//printf("%d\n", strlen(&arr));
	////&arrȡ����������arr�ĵ�ַ,������ָ��char(*)[6]������,���Ǻ���strlen��Ҫ�󴫲�ʹ�õ���char* str,��char*���͵�,
	////��������ʱ��,��ΪҪ��strlen�Ļ�,���Իᱻǿ��ת����char*,���Ի������a������\0.
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
	//printf("%d\n", strlen(&p));//���ֵ
	//printf("%d\n", strlen(&p + 1));//���ֵ(����֮��û���κι�ϵ)
	//printf("%d\n", strlen(&p[0] + 1));


	//��ά����
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


//�ܽ᣺ �����������壺
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��




