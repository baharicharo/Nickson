#include<stdio.h>
#include<stdlib.h> 
#include "function.h"
static  struct hotel *hotelArray;
int main() {
    int arraySize;
    printf("Enter number of hotels:\n");
    scanf("%d",&arraySize);

    
    struct hotel *hotelArray = (struct hotel *)malloc(arraySize * sizeof(struct hotel));
    if (hotelArray == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Return error code
    }

    
    populateHotels(hotelArray, arraySize);
	printHotels(hotelArray , arraySize);
    
    free(hotelArray);
    return 0;
}
