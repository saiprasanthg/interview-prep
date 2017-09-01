#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   char name[100];
   char *description;

   strcpy(name, "sai prasanth");

   /* allocate memory dynamically */
   description = malloc( 100 *sizeof(char) );
	
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else {
      strcpy( description, "sai prasanth a APS student in class 10th.");
   }
  /* reallocating memory dynamically */
  description = realloc( description,100 *sizeof(char) );
   
   if( description == NULL ) {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else {
      strcat( description, "he is in class 10th");
   }
   printf("Name = %s\n", name );
   printf("Description: %s\n", description );

   free(description); // free the memory
}