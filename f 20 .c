#include<stdio.h>
int add(int a,int b){
return a,b;
}
int sub(int a,int b){
    return a-b;
}
if mul(int a,int b){
    return a*b;
}
float divi(int a,int b){
retun(float)a/b;
}
int main ()[
    int a,b;
    char op;
    scanf("%d%Dd%c",&a,&b,&op);
    switch(op){
        
        case'+':printf("%d",add(a,b));break;
        case'-':printf("%d",sub(a,b));break;
        case'*':printf("%d",mul(a,b));break;
        case'/':printf("%.2f",divi(a,b));break;
           default:pritnf("Invalid");
    }
    return 0;
        
        
    }
    

