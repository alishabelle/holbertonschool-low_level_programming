#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "sort.h"
  
// The main program calls fun() and measures time taken by fun() 
int main() 
{ 
	// Calculate the time taken by fun() 
	clock_t t; 
	t = clock(); 
	bubble_sort(); 
	t = clock() - t; 
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
	printf("bubble sort() took %f seconds to execute \n", time_taken); 
	return 0; 
} 
