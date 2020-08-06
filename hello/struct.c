#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30
struct stud
{
    char name[MAX];
    int age;
};
struct name{
    char * first_name;
    char * last_name;
    int letters;
};
void show(struct stud t);

struct name init(void);
void makeInfo(struct name *);
void showInfo(struct name const *);
void clear(struct name *);

int main(){
    // struct stud xxh;
    // gets(xxh.name);
    // scanf("%d",&xxh.age);
    // // printf("stud xxh\nname: %s\nage: %d",xxh.name,xxh.age);
    // show(xxh);
    // struct stud hj = {
    //     "huangjie",
    //     22
    // };
    // show(hj);
    //-----------
    struct name xxh;
    xxh = init();
    makeInfo(&xxh);
    showInfo(&xxh);
    clear(&xxh);
}
void show(struct stud s){
    printf("stud's name: %s\nage: %d\n", s.name, s.age);
}
struct name init(void){
    struct name temp;
    char * t;
    puts("Enter the first name : ");
    gets(t);
    temp.first_name = (char *)malloc(strlen(t));
    strcpy(temp.first_name, t); // cautious
    puts("Enter the second name : ");
    gets(t);
    temp.last_name = (char *)malloc(strlen(t));
    strcpy(temp.last_name, t);
    return temp;
}
void makeInfo(struct name * t){
    t->letters = strlen(t->first_name) + strlen(t->last_name);
}
void showInfo(struct name const * t){
    printf("The first name is %s\n", t->first_name);
    printf("The last name is %s\n", t->last_name);
    printf("The length of name is %d\n", t->letters);
}
void clear(struct name * t){
    free(t->first_name);
    free(t->last_name);
}
