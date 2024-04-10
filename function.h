#ifndef FUNCTION_H
#define FUNCTION_H

struct hotel {
    char name[100];
    char location[100];
    int rating;
    char priceRange[20];
};

void populateHotels(struct hotel *hotelArray, int arraySize);
void printHotels(struct hotel *hotelArray, int arraySize);

#endif

