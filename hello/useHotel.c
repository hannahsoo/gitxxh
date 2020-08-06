#include <stdio.h>
#include "hotel.h"
int main(){
    int hotel_code,nights;
    double price;
    hotel_code = menu();
    
    switch (hotel_code)
    {
    case 1:
        price = HOTEL1;
        break;
    case 2:
        price = HOTEL2;
        break;
    case 3:
        price = HOTEL3;
        break;
    case 4:
        price = HOTEL4;
        break;
    default:
        price = 0.0;
        printf("Quiting..\n");
        return 0;
    }
    nights = get_nights();
    show_price(price, nights);
}