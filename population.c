#include <stdio.h>
#include <cs50.h>

int main(void) {

    //Promt the user for starting number of llamas.
    int start; 
    do {
        start = get_int("How many llamas are present? ");
    }
    while (start < 9);

    //Promt the user for a goal number of llamas.
    int end;
    do {
        end = get_int("What is the total llamas desired? ");
    }
    while (end < start);

    //Add and subtract lamas every year until we reach the desired quantity. (following the example's proportions)
    int years = 0;
    
    while (start < end) {
       start += start / 12;
       years++;
    } 
     
    printf("The necessary years are: %i\n", years);
}