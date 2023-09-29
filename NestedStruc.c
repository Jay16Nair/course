#include<stdio.h>
struct student{
    char name[20];
    float cgpa;
    struct Address
    {
        char city[20];
        int RoomNo;
    }a1;
}s1;
int main(){
    printf("Enter your name: \n");
    scanf("%s",&s1.name);
    printf("Enter your cgpa: \n");
    scanf("%f",&s1.cgpa);
    printf("Enter your city: \n");
    scanf("%s",s1.a1.city);
    printf("Enter your RoomNO: \n");
    scanf("%d",&s1.a1.RoomNo);
    printf("Your name is %s\n",s1.name);
    printf("Your CGPA is %.2f\n",s1.cgpa);
    printf("Your city is %s\n",s1.a1.city);
    printf("Your RoomNO is %d\n",s1.a1.RoomNo);

return 0;
}