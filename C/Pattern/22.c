#include<stdio.h>
int main()
{
    int n;
    int a =n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int k =1;k<i;k++){
            printf(" ");
        }
        for(int j=1;j<=n-i+1;j++){
            printf("%d",j);
        }
        a=n;
        printf("\n");
    }
    return 0;
}