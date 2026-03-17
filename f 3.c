#include<stdio.h>
void check(int n){
    if(n%2==0)
    printf("Even");
    else
    printf("odd");
    
}
int main(){
    int N;
    scanf("%d",&N);
    check(N);
    return 0;
}
