
 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char name[50];
    float date1,date2;
    printf("Enter event :\n");
    scanf("%s",name);
    printf("Enter Start Time :\n");
    scanf("%f",&date1);
    printf("Enter End Time :\n");
    scanf("%f",&date2);
    printf("%s : %.2f AM to %.2f PM",name,date1,date2);
    return 0;
}