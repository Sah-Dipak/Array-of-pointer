#include<stdio.h>

int main(){

    int *arr[5]={"blue", "green", "yello", "white", "red"};
    
    printf("array element:\n");

    for(int i=0;i<6;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}