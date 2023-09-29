#include<stdio.h>
struct student{
 char name[20];
 float cgpa;
}*s,s1;
int main(){
    s=&s1;
    printf("Enter your name: \n");
    scanf("%s",&s1.name);
    printf("Enter your cgpa: \n");
    scanf("%f",&s1.cgpa);
    printf("Your name is %s\n",s->name);
    printf("Your CGPA is %.2f\n",s->cgpa);
    return 0;
}