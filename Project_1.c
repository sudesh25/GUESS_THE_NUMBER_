//Guess The Number Game 
 
#include<stdio.h>    // The library is for basic input output function 
#include<stdlib.h>   // The library is for rand() function
#include<time.h>     // The library is for time() function
int main () 
{   printf("**********GUESS THE NUMBER GAME***********\n\n");
    int num,i,guesses=0;  
    srand(time ('\0'));        //it will genarates the different values every time 
    num = rand() % 100 + 1; //Generates the random no in the range of 0 to 100
    //printf("No. is %d \n",num);  
    do  
  {  
    printf("Guess the NO. in the range of 0 to 100 !!\n"); 
    scanf("%d",&i);         //Takes user input NO.
    if(i == num)            // It will check the no equal or higher or lower 
    { 
        printf("You guess Correctly\n");
    } 
    else if(i < num && i > 0) 
    { 
        printf("Enter the higher No. please!! \n");
    } 
    else if(i > num && i < 100 ) 
    { 
        printf("Enter the lower no please!! \n");
    }  
    else 
    {
         printf("Wrong input\n");
    }  
    guesses++;                           // It will count the no of gueeses 
  } 
   while(i!=num);  
   printf("U guess in %d attempts",guesses);     // It will printf The of Gueeses 
    return 0; 
}