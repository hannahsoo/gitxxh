#include <stdio.h>

void fun(int n);

int main(){
    int myarr[5] = {[3]=9};
    for(int i=0;i<5;i++){
        printf("%d\t",myarr[i]);
    }
    //fun(6);
}

void fun(int n){
    if(n > 1)   fun(n/2);

    if(n%2==0)  putchar('0');
    else putchar('1');    
}
