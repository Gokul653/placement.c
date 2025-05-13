#include <stdio.h>

int main()
{
 int x;
 scanf("%d", &x);
 if(x%4==0) {
     printf("given year is leap year");
 }else{
     printf("given year is not a leap year");
 }
    return 0;
}
