#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int k =n;k>i;k--){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("%c",'A'+j);
        }
        for(int k=i-1;k>=1;k--){
            printf("%c",'A'+k-1);
        }
        printf("\n");
    }
    for(int i = 1;i<=n;i++){
        for(int k =1;k<=i;k++){
            printf(" ");
        }
        for(int j=0;j<n-i;j++){
            printf("%c",'A'+j);
        }
        for(int k = n-i-2;k>=0;k--){
            printf("%c",'A'+k);
        }
        printf("\n");
    }
    return 0;
}