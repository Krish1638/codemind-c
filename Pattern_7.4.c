#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=64+a;
    for(int i=a;i>=1;i--,b--){
        for(int j=1;j<=a-i;j++){
        printf(" ");
            
        }
        for(int k=1;k<=i;k++){
            printf("%c ",b);
        }
        
        printf("
");
    }
    return 0;
}


