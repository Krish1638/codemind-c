#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=a;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(i+j==a+1 || i==j){
                printf("%d ",i);
            }
            else{
                printf(" ");
            }
        }
        printf("
");
    }
}