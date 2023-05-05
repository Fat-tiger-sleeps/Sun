#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdio.h>


//2023年5月4日
//大小端的概念：
//大端字节序：把数据的低位保存在内存的高地址处，数据的高位保存在内存的低地址处。
//小端字节序：把数据的低位保存在内存的低地址处，数据的高位保存在内存的高地址处。

//如何判断一个编译器或机器的字节序？
//方法一：
//所以当a=1时，如果是小端字节序，内存中存放的应该是01 00 00 00，而大端字节序中存放的是00 00 00 01，
//当*p取出第一个字节的时候，小端取出的是01，而大端取出的是00。所以当是小端时，*p=1，大端时，*p=0。
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//方法二：
//所以当a=1时，如果是小端字节序，内存中存放的应该是01 00 00 00，而大端字节序中存放的是00 00 00 01，
//当*p取出第一个字节的时候，小端取出的是01，而大端取出的是00。所以当是小端时，ret=1，大端时，ret=0。
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//方法三：
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//因为*p的值为00或01，所以可以直接返回0或1。
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}



//1、输出什么？
//#include <stdio.h>
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}
//解析：因为-1是整数，所以它应该是4个字节的：
//-1原码：10000000 00000000 00000000 00000001
//-1反码：11111111 11111111 11111111 11111110
//-1补码：11111111 11111111 11111111 11111111
//因为a、b、c的类型是char类型，所以a、b、c在内存中存储的都是补码，且只能存储一个字节：11111111.
//因为a的类型是char是个有符号的char，所以当a=%d想输出的时候需要进行整型提升，负数整型提升是在前面添加符号位：
//a:11111111 11111111 11111111 11111111 ——  是负数转换成原码为：-1
//b同理，也是有符号的char：
//b:11111111 11111111 11111111 11111111 ——  是负数转换成原码为：-1
//因为c是无符号的char所以没有符号位，前面就只能补0：
//c:00000000 00000000 00000000 11111111 ——  是正数，原反补相同：255

//说明：C语言中char是 signed char 还是 unsigned char，C语言标准没规定取决于编译器，市面上大部分的编译器都是认为，char是signed char。

//2、下面程序输出什么？
//int main()
//{
//	int a = -128;
//	printf("%u\n", a);
//	return 0;
//}
// 解析：
//-128的原码：10000000 00000000 00000000 10000000
//-128的反码：11111111 11111111 11111111 01111111
//-128的补码：11111111 11111111 11111111 10000000
//因为是char类型只能存储一个字节的内容，所以char a中存储的是10000000
//因为a是char类型的，需要整型提升，所以需要在前面补1：11111111 11111111 11111111 10000000
//再以%u的形式打印，%u是无符号打印，所以第一位就不是符号位，所以11111111 11111111 11111111 10000000是一个特别大的数字：4,294,967,168


//3、下面程序输出什么？
//int main()
//{
//	int a = 128;
//	printf("%u\n", a);
//	return 0;
//}
// 解析：
//128的原码：00000000 00000000 00000000 10000000
//因为是正数，原反补相同，又因为是char类型只能存储一个字节的内容，所以char a中存储的是10000000
//因为a是char类型的，需要整型提升，所以需要在前面补1：11111111 11111111 11111111 10000000
//再以%u的形式打印，%u是无符号打印，所以第一位就不是符号位，所以11111111 11111111 11111111 10000000是一个特别大的数字：4,294,967,168

//4、下面程序输出什么？
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//解析：
//因为i是负数，所以i的原反补码为：
//原码：10000000 00000000 00000000 00010100
//反码：11111111 11111111 11111111 11101011
//补码：11111111 11111111 11111111 11101100
//因为j是无符号整数，所以j的原反补相同：
//原码：00000000 00000000 00000000 00001010
//让i+j得，11111111 11111111 11111111 11110110（补码），输出要输出原码，所以i+j得原码为：10000000 00000000 00000000 00001010
//等于->-10.



//5、下面程序输出什么？
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//
//	return 0;
//}
//解析：
//因为i是unsigned int型的，是一个无符号的整数，最小是0，所以不可能小于0，所以死循环。



//6、下面程序输出什么？
//int main()
//{
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));
//    return 0;
//}
//解析：
//unsigned char的取值范围是0-255之间，而signed char的取值范围是-128~127之间。
//char类型的数据的所有取值范围是：
//	 0 —	   00000000
//	 1 —	   00000001
//	 2 —	   00000010
//			   ...					上半部分，符号位是0，表示正数，范围是0-127
//	 126 —	   01111110
//	 127 —	   01111111
//
//
//	 -128 —   10000000   ——（无法计算，系统规定这个二进制的数值就是-128）
//	 -127 —   10000001
//	 -126 —   10000010
//			   ......				下半部分，符号位是1，表示负数，范围是-1~-128
//	 -2 —	   11111110
//	 -1 —	   11111111
//这表示的是一个char类型数据的取值范围。所以它可以是个圈，00000000  和  11111111，首位相连。
//现在回来，我们来看这题，a[1000]里面有1000个插入类型的数据，for循环想把这1000个都打印出来，可能吗？不可能，绝对不可能。
//因为，前面咱们说，char类型数据的取值范围是个圈，所以，走过一遍又一遍，而strlen函数是求字符串的长度，遇到\0停止。
//所以当程序运行：-1，-2，-3，。。。，-127，-128，（重点来了）127，126，125，。。。，3，2，1，0 。
//所以程序只运行到0就停止了，不再继续运行了。而0的前面有-1~-128 + 1~127，一共255个数字，所以程序输出结果：  255.



//6、下面程序输出什么？
#include <stdio.h>
//unsigned char i = 0;
//int main()
//{
//    for (i = 0; i <= 255; i++)
//    {
//        printf("hello world\n");
//    }
//    return 0;
//}
//解析：
//因为i是unsigned char型的，是一个无符号的整数，最小是0，最大是255，所以不可能大于255，所以死循环。


int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}





