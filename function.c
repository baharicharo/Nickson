#include "function.h"
#include<stdio.h>

void populateHotels(struct hotel *hotelArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter Details for Hotel %d:\n", i + 1);
        printf("Hotel Name:\n");
        scanf("%s", hotelArray[i].name);
        printf("Location:\n");
        scanf("%s", hotelArray[i].location);
        printf("Rating (out of 10):\n");
        scanf("%d", &hotelArray[i].rating);
        printf("Price range:");
        scanf("%s", hotelArray[i].priceRange);
    }
}

void printHotels(struct hotel *hotelArray, int arraySize) {
    printf("\nHotel Details\n");

    for (int i = 0; i < arraySize; i++) {
        printf("Hotel %d:\n", i + 1);
        printf("Name: %s\n", hotelArray[i].name);
        printf("Location: %s\n", hotelArray[i].location);
        printf("Rating: %d/10\n", hotelArray[i].rating);
        printf("Price Range: %s\n", hotelArray[i].priceRange);
   }
}

