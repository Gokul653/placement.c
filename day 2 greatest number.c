#include <stdio.h>
int main() 
{
    int n, i, num;
    int max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid number of elements.\n");
        return 1;
    }
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    
    }
    printf("The largest number is: %d\n", max);

    return 0;
}
