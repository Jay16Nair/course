#include<stdio.h>
struct student{
    char name[20];
    int rollno;
    float cgpa;
};
int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student arr[n];
    for(int i=0;i<n;i++){
        printf("Enter details for student %d:\n ",i+1);
        printf("Enter your name: ");
        scanf("%s",&arr[i].name);
        printf("Enter your Roll.NO: ");
        scanf("%d",&arr[i].rollno);
        printf("Enter your cgpa: ");
        scanf("%f",&arr[i].cgpa);
    }
    for(int i=0;i<n;i++){
        printf("The details for student %d is\n",i+1);
        printf("Your name is %s\n",arr[i].name);
        printf("Your Roll.NO is %d\n",arr[i].rollno);
        printf("Your cgpa is %f\n",arr[i].cgpa);
    }

}