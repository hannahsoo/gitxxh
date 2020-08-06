#include <stdio.h>
char get_first(void);
void count(void);
int main(){
    char ch;
    printf("input your choice, a, b, or q\n");
    printf("a. output\tb. count\tq. quit\n");
    ch = get_first();
    while (ch != 'q')
    {
        switch (ch)
        {
        case 'a':
            printf("buy low, sell high\n");
            break;
        case 'b':
            count();
            break;
        case '\n':
            printf("meet \\ n\n");
            break;
        default:
            putchar(ch);
            printf("choose from a,b and q\n");
            break;
        }
        printf("input your choice, a, b, or q\n");
        printf("a. output\tb. count\tq. quit\n");
        ch = get_first();
    }

}

char get_first(void){
    int ret = getchar();
    char tmp;
    while((tmp=getchar())!='\n'){
        continue;
    }   
    return ret;
}

void count(void){
    int n;
    printf("Counr how far? Enter an integer:");
    if(scanf("%d", &n)!=1){
        char ch;
        while ((ch = getchar())!='\n')
        {
            putchar(ch);
        }  
        printf(" is not an integer\n");
        return ;
    }
    int i;
    for(i=0;i<n;i++){
        printf("%d\n", i);
    }
    char tmp;
    while((tmp=getchar())!='\n'){
        continue;
    }
}