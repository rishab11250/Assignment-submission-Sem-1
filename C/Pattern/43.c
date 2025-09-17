#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    for(int i = 1;i<=r;i++){
        for(int j =1;j<=c;j++){
            if(j==1||j==c||i==1||i==r){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}