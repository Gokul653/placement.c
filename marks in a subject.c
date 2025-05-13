#include <stdio.h>

int main()
{
 int t,e,m,s,ss;
 printf("the mark scored in tamil");
 scanf("%d", &t);
 printf("the mark scored oin english");
 scanf("%d", &e);
 printf("the mark  scored in maths");
 scanf("%d", &m);
 printf("the mark scored in science");
 scanf("%d", &s);
 printf("the mark scored in socialscience");
 scanf("%d", &ss);
 printf("calculate the total marks in subjects:%d", t+e+m+s+ss);
 scanf("\n the average marks scored in all subjects: %d", (t+e+m+s+ss)/5);
 return 0;
}
