#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int k =n;k>i;k--){
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            if(j == 1 || j == 2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i =1;i<=n-1;i++){
        for(int k =1;k<=i;k++){
            printf(" ");
        }
        for(int j=2*n-1;j>=2*i+1;j--){
            if(j == 2*i+1||j==2*n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}   