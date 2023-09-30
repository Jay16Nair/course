#include<stdio.h>
#include<stdlib.h>
int main(){
    int size;
    printf("Enter size of array ");
    scanf("%d",&size);
    int *array=(int*)malloc(size*sizeof(int));
    if(array==NULL){
        printf("Malloc failed");
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