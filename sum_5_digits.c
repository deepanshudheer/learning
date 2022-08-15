#include <stdio.h>

int main() {
	
    int i, n, sum = 0, rem, dig;
    scanf("%d", &n);
    
    while (n > 0)
    {
        dig = n % 10;
        n /= 10;
        sum = sum + dig;
    }
    printf("%d", sum);

    return 0;
}
