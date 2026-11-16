#include <stdio.h>

int main(void)
{
    char c; 
    printf("Zgadzasz sie? ");
    scanf(" %c", &c);

    if (c == 'y' || c == 'Y')
    { 
        printf("Zgadzam sie.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Nie zgadzam sie.\n");
    }
    else 
    {
        printf("Nieprawidlowa odpowiedz.\n");
    }
}