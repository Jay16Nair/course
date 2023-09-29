#include<stdio.h>
struct DSA{
    char name[20];
    float cgpa;
    int regNO;
};
int main(){
    struct DSA a[3];
    int i;
    for(i=0;i<3;i++){
        scanf("%s",&a[i].name);
        scanf("%f",&a[i].cgpa);
        scanf("%d",&a[i].regNO);
    }
    for(i=0;i<3;i++){
        if(a[i].cgpa < 5){
        printf("%s\n",a[i].name);
        printf("%f\n",a[i].cgpa);
        printf("%d\n",a[i].regNO);
        }
    }
    return 0;
}