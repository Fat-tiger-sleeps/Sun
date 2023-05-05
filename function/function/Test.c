#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdio.h>

void print(unsigned int n)  //因为不需要返回，所以此处使用void。

{

    if (n > 9)

    {

        print(n / 10);

    }

    printf("%d ", n % 10);

}

int main()

{

    unsigned int nub = 0;

    scanf("%u", &nub);

    print(nub);

    return 0;

}