#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LEN 40
int main(int argc, char ** argv){
    char name[LEN];
    FILE * in, *out;
    char ch;
    int counter=0;
    if(argc!=2){
        fprintf(stderr, "Usage : %s filename\n", argv[0]);
        exit(1);
    }
    if((in = fopen(argv[1],"r"))==NULL){
        fprintf(stderr,"Open file failed.\n");
    }
    strcpy(name,argv[1]);
    strcat(name,".red");
    out = fopen(name,"w");
    while((ch = getc(in))!=EOF){
        putchar(ch);
        putchar('\n');
        if(counter++%3 == 0){
            putc(ch, out);
            printf("%d\t",counter);
        }
    }
    if(fclose(out)!=0 || fclose(in)!=0){
        fprintf(stderr,"Close file failed.\n");
    }
    return 0;
}