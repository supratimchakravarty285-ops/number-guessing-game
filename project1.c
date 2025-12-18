#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber, n;
    int attempts = 0;   // ✅ initialize

     srand(time(0));                 // seed
    randomNumber = rand() % 100 + 1; // 1 to 100

    printf("Guess the number between 1 to 100\n");
    n = 0;  
    
     while(n!=randomNumber)
    {
    printf("Enter  your  guess :");
    scanf("%d",&n);
    attempts ++;
    
    if(n>randomNumber){
      printf("Lower number please ");
     }
  else if(n<randomNumber){
       printf("Higher Number please ");
     } 
  else{
    printf("Correct Guess!\n");
   printf("Number of attempts:%d\n",attempts);
   break ;
    }
 }  
       return 0;
 }

