#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if (j == i||j == i+1){
                for(int k = 1;k<=j;k++){
                    printf("*");
                }
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}