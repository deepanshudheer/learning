#include <stdio.h>
#include <string.h>

int main() 
{
    char ch = 'C';  
    char s[100];  
    char sen[100];
    
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c \n%s \n%s", ch, s, sen);  
    return 0;
}
