

#include <stdio.h>

int main()
{
    int month,year;
        printf("enter year:");
scanf("%d", &year);
printf("enter month:");
scanf("%d", &month);
switch (month) 
{
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    printf("31days\n");
    break;
    case 4: case 6: case 9: case 11:
    printf("30days\n");
    break;
    case 2:
   if ((year %4 ==0 && year % 100 !=0) || (year % 400 == 0))
    printf("29 days (leap year)\n");
    else 
    printf("28 days\n");
    break;
    
    default:
    printf("invalid month number!\n");
    break;
}
    return 0;
}
