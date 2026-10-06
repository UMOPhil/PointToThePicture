#include <stdio.h>
#include "canvasMake.h"
#include <stdlib.h>
#include <time.h> 


//'f' 'i' 'r' 'e' is one byte and each character equal a specific ascii number?
char charizardList[4] = {'f', 'i', 'r', 'e'};



//this is the function that returns a random character from my charizard list.
//takes two parameters - 1st parameter declares pointer variable & 2nd is the size of the list.


char pickChar(char *charizardMemory, int size){

   int m = rand()%size;
   return charizardMemory[m];

    
}



char genRandomChar(char *charizardMemory, int size){



}
