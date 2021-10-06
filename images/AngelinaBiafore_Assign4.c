#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 Angie Biafore
 Assignment 4
 September 29, 2021
 */
int main()
{
    char menu;
    int weight;
    int h;
    int x;
    int y;
    printf("Menu \n Option a: Information about the two programs \n Option b: BMI calculator \n Option c: Point on cartesian plane locator \n Option d: Exit \n Enter your choice: "); //this print f shows a menu to the user and leaves a spot for a choice of a, b, c, or d
    scanf("%c", &menu); //this scans the choice and assigns it to the variable menu
    switch(menu) {
     
        case 'A' :
        case 'a' :
            printf("The first program is a BMI calculator which asks for an input of your weight and then calculates your BMI. BMI is a body mass indicator and will tell you if you're underweight, normal, overweight or obese. The second program is asking for a point and tells you where your point will be on the cartesian plane."); //this prints a statement for option a
            break;//don't do anything underneath if this case is chosen
        case 'B' :
        case 'b' :
            printf("You chose BMI calculator. Please input your weight in pounds: "); //asking for input in pounds
            scanf("%d", &weight); //assigns input to the variable weight
            printf("Please input your height in inches: "); //asking for input in inches
            scanf("%d", &h); //assigns input to the variable h
            double BMI; //creates a variable called BMI
            BMI = ((703*weight)/(pow((h),2))); //equation for BMI
            if (BMI < 18.5)
                printf("Your BMI is %.1f which means you're underweight", BMI); //if BMI is less than 18.5 you get told you're underweight
            else
                if (BMI >= 18.5 && BMI <= 24.9)
                    printf("Your BMI is %.1f which means you have normal weight", BMI); //if BMI is between 18.5 and 24.9 you get told you have normal weight
            else
                if (BMI >= 25.0 && BMI <= 29.9)
                    printf("Your BMI is %.1f which means you're overweight", BMI); //if BMI is between 25 and 29.9 you get told you're overweight
            else
                if (BMI >= 30.0)
                    printf("Your BMI is .1%f which means you're obese", BMI); //if BMI is above 30 you get told you're obese
            break;//don't do anything underneath if this case is chosen
        case 'C' :
        case 'c' :
            printf("You chose Point on a cartesian plot locator. \nPlease input an X Coordinate: "); //asks for input
            scanf("%d", &x); //puts input in variable x
            printf("\nPlease input a Y Coordinate: "); //asks for input
            scanf("%d", &y); //puts input in variable y
            if(x == 0 && y == 0) { // if your point is at 0,0 it's on the origin
                printf("Your point is on the origin");
            }
            else if(x == 0) { //if your x coordinate is 0 it's on the Y axis
                printf("Your point is on the Y Axis");
            }
            else if(y == 0) { //if your y coordinate is 0 it's on the X axis
                    printf("Your point is on the X Axis");
                }
            else if(x > 0 && y > 0) { //if both points are positive your point is in the first quadrant
                    printf("Your point is in the first Quadrant");
                }
            else if(x < 0 && y > 0) { //if x is negative and y is positive your point is in the second quadrant
                    printf("Your point is in the second Quadrant");
                }
            else if(x < 0 && y < 0) { //if x is negative and y is negative your point is in the third quadrant
                    printf("Your point is in the third Quadrant");
                }
            else if(x > 0 && y< 0) { //if x is positive and y is negative your point is in the fourth quadrant
                    printf("Your point is in the fourth Quadrant");
                }

            break;//don't do anything underneath if this case is chosen
        case 'D' :
        case 'd' :
            printf("Exiting Menu");
            break;//don't do anything underneath if this case is chosen
        default : //makes you reopen the menu because you did not put in a valid option
            printf("This is not an option, please choose from the menu.");
    }
}
