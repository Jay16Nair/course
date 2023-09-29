#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    float cgpa;
};
int main(){
    struct student s1;
    printf("Enter your name: ");
    scanf("%s",&s1.name);
    printf("Enter your Roll.NO: ");
    scanf("%d",&s1.rollno);
    printf("Enter your cgpa: ");
    scanf("%f",&s1.cgpa);
    printf("Your name is %s\n",s1.name);
    printf("Your Roll.NO is %d\n",s1.rollno);
    printf("Your cgpa is %f",s1.cgpa);

    
    return 0;
}
