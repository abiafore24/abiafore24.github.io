#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 Angelina Biafore
 COP 2220, Assignment 3
 September 22, 2021
 */

int main()
{
    int h = 0; //time in hours
    double m = 0; //time in minutes
    printf("Oh no! Your power is off! If it stays off for too long, your freezer will start to heat and spoil your food! Please enter the amount of time since your freezer has shut off, in hours first. We will ask about minutes in the next question. \n How many hours has it been since your freezer turned off: ");
    scanf("%d", &h); //asking for input for hours
          printf("\n How many minutes has it been since your freezer turned off: ");
    scanf("%lf", &m); //asking for input for minutes
    m = m/60; //minutes in a decimal
    double t = h+m; //time in hours and minutes in decimal form
    double celc_temp; //temperature of freezer in celsius
    celc_temp = (double)((4*(pow(t, 2))/(t+2))-20);
    double faren_temp; //temperature of freezer in farenheit
    faren_temp = ((celc_temp * 1.8) + 32); //conversion of celsius to farenheit
    printf("\n Your freezer is currently %.1f degrees Celcius and %.1f degrees Farenheit.", celc_temp, faren_temp); //output of how warm freezer is currently
    
    if (celc_temp > -10) { //if statement, if temperature is greater than -10 degrees celsius, get response
        printf("\n \n Oh no! Your freezer is %.1f degrees Celcius which means your ice cream has melted! This is very sad, but you will need to throw it away.", celc_temp); //response if freezer is too hot
    }
    if (celc_temp > 4.5) { //if statement, if temperature is greater than 4.5 degrees celsius, get response
        printf("\n \n Oh no! Your freezer is %.1f degrees Celcius which means your meat and poultry products are unsafe! This is very sad, but you will have to throw them away.", celc_temp); //response if freezer is too hot
    }
}
