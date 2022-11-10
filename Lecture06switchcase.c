#include <stdio.h>

int main()
{

    char vowels;
    printf("Enter your alphabet \n");
    scanf("%c", &vowels);
    switch (vowels)
    {
    case 'a':
    case 'A':

    {
        printf("its a vowels %c", vowels);
        break;
    }
    case 'e':
    case 'E':
    {
        printf("its a vowels %c", vowels);
        break;
    }

    case 'i':
    case 'I':
    {
        printf("its a vowels %c", vowels);
        break;
    }
    case 'o':
    case 'O':
    {
        printf("its a vowels %c", vowels);
        break;
    }
    case 'u':
    case 'U':
    {
        printf("its a vowels %c", vowels);
        break;
    }

    default:
    {

        printf("its not a vowels %c", vowels);
        break;
    }
    }

    switch (vowels)
    {
    case 'a': case 'A':
    case 'e': case 'E':
    case 'i': case 'I':
    case 'o': case 'O':
    case 'u': case 'U':
    {
        printf("its a vowels %c", vowels);
        break;
    }
    default:
    {

        printf("its not a vowels %c", vowels);
        break;
    }
    }

    return 0;
}