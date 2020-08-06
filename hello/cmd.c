#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
    char * end;
    printf("There are %d arguments\n", argc);
    for(int i=0;i<argc;i++){
        printf("%d. %s\n", i, argv[i]);
    }
    int num = strtol(argv[1], &end, 10);
    printf("%d,end at %s\n",num, end);
}