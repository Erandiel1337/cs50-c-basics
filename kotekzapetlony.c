#include <stdio.h>

int main(void)
{
    int n;
do    
{
printf("Ile razy kotek zamiauczal? ");
    scanf("%i", &n);
}
while (n <=0);

for (int i = 0; i < n; i++)
{
    printf("meow\n");
}

}