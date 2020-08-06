#include <stdio.h>
#include "hotel.h"

int menu(){
    int code,stat;
    printf("%s%s\n",STAR, STAR);
    printf("1. Hilton\t2. The Peninsula Hotels\n3. Regal Hotel\t4. Kempinski\t5. Quit\n");
    while((stat = scanf("%d",&code))!=1 || code<1 || code>5){
        if(stat!=1){
            scanf("%*s");
        }
        printf("Enter an integer from 1 to 5:\n");
    }
    return code;
}

int get_nights(){
    int nights;
    printf("%s%s\n",STAR, STAR);
    printf("How many nights you need?\n");
    while (scanf("%d",&nights)!=1)
    {
        scanf("%*s");
        printf("Enter an integer\n");
    }
    printf("%s%s\n",STAR, STAR);
    return nights;
}

void show_price(double price, int nights){
    printf("The total price is %.2f\n", price*nights);
}