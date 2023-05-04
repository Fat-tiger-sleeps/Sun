#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//素数，求100到200之间的素数。
int main()
{
    int count = 0;
    int i = 0;
    for (i = 100; i <= 200; i++)
    {
        int j = 0;
        int flag = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
            
        }
        if (flag == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\ncount = %d\n", count);
    return 0;
}
 //对上面代码的优化，m=a*b，a和b之间至少有一个数字小于开平方的m，如16=2*8或16=4*4。
#include <math.h>
int main()
{
    int i = 0;
    int count = 0;
    for (i = 100; i <= 200; i++)
    {
        int j = 0;
        int flag = 1;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\ncount = %d\n", count);
    return 0;
}
//对上述代码再优化，因为偶数不可能是素数，所以只需要判断奇数就可以了。
#include <math.h>
int main()
{
    int i = 0;
    int count = 0;
    for (i = 101; i <= 200; i+=2)
    {
        int j = 0;
        int flag = 1;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\ncount = %d\n", count);
    return 0;
}
int main()
{
flag:
    printf("hello\n");
    printf("world\n");

    goto flag;
    return 0;
}





