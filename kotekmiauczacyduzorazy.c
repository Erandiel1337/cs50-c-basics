#include <stdio.h>

int main(void)
{
    int n;
    printf("Ile razy kotek zamiauczal? ");
scanf("%i", &n);
if (n >=0)

for (int i = 0; i < n; i++)
{
    printf("meow\n");
}
else
    printf("NIE MA TAKIEGO MIAUCZENIA\n");
}