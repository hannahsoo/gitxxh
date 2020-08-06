#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 7
#define DEF "HANNAH"
#define STOP "quit"
void toUpper(char * name);
void show(char *in[], int n);
void strsrt(char *ptr[], int n);
int main(int argc, char * argv[]){
    // char input[MAX][40];
    // char *ptr[MAX];
    // int cnt_in=0;
    // char tmp[40];
    // while (cnt_in<MAX && gets(tmp)!=NULL && tmp[0]!='\0')
    // {
    //     strcpy(input[cnt_in], tmp);
    //     ptr[cnt_in] = input[cnt_in];
    //     cnt_in++;
    // }
    // printf("B4 sort:\n");
    // show(ptr, cnt_in);
    // strsrt(ptr, cnt_in);
    // printf("After sort:\n");
    // show(ptr, cnt_in);
    // toUpper(name);
    // while (strcmp(name, DEF))    {
    //     printf("Enter your name:\n");
    //     gets(name);
    //     toUpper(name);
    // }
    // printf("Hello, %s\n",name);
    // printf("%d", strlen(name));
    // scanf("%s",name);
    // printf("Chiao, %s",name);
    // puts(DEF);
    // puts("lala");
    // char line[81];
    // while(gets(line)){
    //     puts(line);
    // }
    //
    // FILE * fp;
    // char ch;
    // int cnt=0;
    // if(argc < 2){
    //     printf("Usage : %s filename\n",argv[0]);
    //     exit(EXIT_FAILURE);
    // }
    // if((fp = fopen(argv[1],"r"))==NULL){
    //     printf("File open failed.\n");
    //     exit(EXIT_FAILURE);
    // }
    // while((ch = getc(fp))!=EOF){
    //     putc(ch, stdout);
    //     cnt++;
    // }
    // printf("The total number of characters is %d in file %s",cnt,argv[1]);
    //
    FILE *fp;
    fp=fopen("file1","a+");
    ungetc('l',fp);
    fclose(fp);
}
void toUpper(char name[]){
    int i=0;
    while (name[i])
    {
        name[i] = toupper(name[i]);
        putchar(name[i]);
        i++;
    }
}
void show(char *in[], int n){
    for(int i=0;i<n;i++){
        puts(in[i]);
    }
}
void strsrt(char * ptr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(ptr[i], ptr[j]) > 0){
                puts("====================");
                puts("ptr[i]:");
                puts(ptr[i]);
                puts("ptr[j]");
                puts(ptr[j]);
                char * temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
                puts("ptr[i]:");
                puts(ptr[i]);
                puts("ptr[j]");
                puts(ptr[j]);
            }
            puts(ptr[i]);
        }
    }
}