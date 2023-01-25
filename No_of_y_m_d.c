#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int year = n/365;
    int week = (n-(year*365))/30;
    int days = (n-(year*365))-(week*30);
    printf("%d",year);
    printf("\n");
    printf("%d",week);
    printf("\n");
    printf("%d",days);
}
