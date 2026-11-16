#include <stdio.h>

int main(void)
{
    int n;
    printf("Ile razy kotek zamiauczal? ");
    scanf("%i", &n);

    if (n == 1)
    {
        printf("meow \n");
    }
    else
    {
        printf("NIE MA TAKIEGO MIAUCZENIA! \n");
    }

}

