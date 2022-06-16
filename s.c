#include<stdio.h>
int add(int x, int y)
{
 while (y != 0)
    {
       int borrow = x & y;
        x = x ^ y;
       y = borrow << 1;
    }
    return x;
}


int main()
{
    int x,y;
    printf("enter the numbers:");
    scanf("%d%d",&x,&y);
    printf("x + y is %d", add(x, y));
    return 0;
}
