#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>



//��������100��200֮���������
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
 //�����������Ż���m=a*b��a��b֮��������һ������С�ڿ�ƽ����m����16=2*8��16=4*4��
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
//�������������Ż�����Ϊż��������������������ֻ��Ҫ�ж������Ϳ����ˡ�
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





