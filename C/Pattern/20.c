#include<stdio.h>
int main()
{
    int n;
    int cont = 1;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("%c ",'A'+j+cont-1);
        }
        cont = i +cont;
        printf("\n");
    }
    return 0;
}