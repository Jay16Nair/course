#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    int *array=(int*)calloc(size,sizeof(int));
    if(array==NULL){
        printf("Calloc failed");
    }
    printf("Enter %d elements ",size);
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    free(array);
    return 0;
}