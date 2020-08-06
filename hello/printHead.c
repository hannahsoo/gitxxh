#include <stdio.h>
#include <string.h>
#define WIDTH 50
#define NAME "HannahSoo\n"
#define ADDRESS "Room 701, Building No.17, Block 5, LaoJie\n"
#define PLACE "Changshu, Jiangsu Province, China\n"
void show_n_char(char ch, int n);

int main(){
    show_n_char('*', WIDTH);
    putchar('\n');
    int len1, len2, len3;
    len1 = (WIDTH - strlen(NAME))/2;
    show_n_char(' ',len1);
    printf(NAME);
    len2 = (WIDTH - strlen(ADDRESS))/2;
    show_n_char(' ',len2);
    printf(ADDRESS);
    len3 = (WIDTH - strlen(PLACE))/2;
    show_n_char(' ',len3);
    printf(PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');
}

void show_n_char(char ch, int n){
    for(int i=0;i<n;i++){
        putchar(ch);
    }
}