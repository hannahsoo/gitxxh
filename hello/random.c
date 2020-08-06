#include <stdio.h>
extern int rand(void);
extern void randSet(unsigned int);
int main(){
    unsigned int seed;
    printf("Enter your seed:\n");
    while(scanf("%d",&seed)==1){
        randSet(seed);
        for(int i=0;i<5;i++){
            printf("%d\n",rand());
        }
    }
}