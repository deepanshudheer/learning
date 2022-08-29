#include <stdio.h>
#include <string.h>

int main() 
{
    int a, b, i;
    char *str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    
    scanf("%d\n%d", &a, &b);
    for (i = a; i <= b; i++)
    {
        if (i <= 9)
        {
            printf("%s\n", str[i-1]);
        }
        else
        {
            printf("%s\n", str[9+(i%2)]);
        }
    }

    return 0;
}
