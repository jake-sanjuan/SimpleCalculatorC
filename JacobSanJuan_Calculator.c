/********************************************************************************************************************************************
Program: Jacob's Calculator
 
 Description:  This program gives the user five choices, asks the to select one.  If a number outside of the range given or a char is
 entered, program will prompt user for correct input.
 
 Program will run until user enters 5, which will cause program to quit
*********************************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

float addition(void);
float subtraction(void);
float multiplication(void);
float division(void);
void exitProgram(void);

/********************************************************************************************************************************************
 Function: main()
 
 Description: Prompts user for input until correct input is given.  Once correct input is given, main sends user to correct function that
 performs mathematical operation
 
 input: user input within function
 
 returns: 0
*********************************************************************************************************************************************/
int main()
{
    int userChoice = 6;
    char goAgain;
    
    printf("Welcome to Jacob's Calculator!\n");
    printf("\t1. Addition\n\t2. Subtraction\n\t3. Multiplication\n\t4. Division\n\t5. Exit\n");

    while  (userChoice < 1 || userChoice > 5)
    {
        printf("Please enter a number between 1 and 5 only: \n");
        while((scanf("%d", &userChoice)) != 1)
        {
            while (getchar() != '\n')
                continue;
        printf("That is not a correct input, please try again: \n");
        }
        if (userChoice < 1 || userChoice > 5)
            continue;
        else if (userChoice == 1)
        {
            printf("The sum of the two numbers you added is %.2f\n\n", addition());
            userChoice = 6;
        }
        else if (userChoice == 2)
        {
            printf("The value of the two numbers you subtracted is %.2f\n\n", subtraction());
            userChoice = 6;
        }
        else if (userChoice == 3)
        {
            printf("The value of the two numbers you multiplied is %.2f\n\n", multiplication());
            userChoice = 6;
        }
        else if (userChoice == 4)
        {
            printf("The value of the two numbers you divided is %.2f\n\n", division());
            userChoice = 6;
        }
        else if (userChoice == 5)
            exitProgram();
    }
    return 0;
}

/********************************************************************************************************************************************
 Function: addition()
 
 Description: Asks user for two numbers, handles exception, returns value of addition to calling function
 
 input: user defined input
 
 returns: value of addition of two nums
 *********************************************************************************************************************************************/
float addition()
{
    float num1, num2;
    
    printf("Please enter two number to be added, seperated by a space: \n");
    
    while ((scanf("%f %f", &num1, &num2)) != 2)
    {
        while(getchar() != '\n')
            continue;
        printf("Invalid input, please try again.\n");
    }
    return num1 + num2;
}

/********************************************************************************************************************************************
 Function: Subtraction()
 
 Description: Asks user for two numbers, handles exceptions, returns value of subtracting two numbers to calling function
 
 input: User input in function
 
 returns: value of subtraction
  *********************************************************************************************************************************************/
float subtraction()
{
    float num1, num2;
    
    printf("Please enter two number separated by a space to be subtracted: \n");
    
    while ((scanf("%f %f", &num1, &num2)) != 2)
    {
        while (getchar() != '\n')
            continue;
        printf("Invalid input, please try again.\n");
    }
    return num1 - num2;
}

/********************************************************************************************************************************************
 Function: multiplication()
 
 Description:  Asks user for two numbers, handles exceptions, returns value of multiplied numbers to calling functions
 
 input: user input in function
 
 returns: value of two numbers multiplied
  *********************************************************************************************************************************************/
float multiplication()
{
    float num1, num2;
    
    printf("Please enter two numbers to be multiplied, separated by a space: \n");
    
    while ((scanf("%f %f", &num1, &num2)) != 2)
    {
        while(getchar() != '\n')
            continue;
        printf("Invaid input, please try again.\n");
    }
    return num1 * num2;
}

/********************************************************************************************************************************************
 Function: division()
 
 Description: asks user for two numbers, makes sure second is nonzero, handles exceptions, returns value of two numbers divided
 
 input: user input within function
 
 returns: value of two numbers divided
   *********************************************************************************************************************************************/
float division()
{
    float num1, num2;
    
    printf("Please enter two numbers to divide, separated by a space.  The second one cannot be 0. \n");
    
    while ((scanf("%f %f", &num1, &num2)) != 2 || num2 == 0)
    {
        while (getchar() != '\n')
            continue;
        printf("Invalid input, please try again.\n");
    }
    return num1 / num2;
}

/********************************************************************************************************************************************
 Function: exitProgram()
 
 Description: Exits function with exit code 0
 
 inputs: none
 
 returns: none
    *********************************************************************************************************************************************/
void exitProgram()
{
    printf("Thank you for using Jacob's Calculator!\n");
    exit(0);
}

