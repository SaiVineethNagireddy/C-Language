#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main() 
{
    int start, end;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
        { 
        return 0;
        }
    }

    return 1;
}