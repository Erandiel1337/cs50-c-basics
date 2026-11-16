#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Ile wynosi x? ");
    scanf("%d", &x);

    printf("Ile wynosi y? ");
    scanf("%d", &y);

    if (x < y)
    {
        printf("x jest mniejsze od y\n");
    }
    else if (x > y)
    {
        printf("x jest wieksze od y\n");
    }
    else 
    {
        printf("x rowna sie y\n");
    }
 
}   
