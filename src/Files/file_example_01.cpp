#include <stdio.h>

const int BUFF_SIZE(500);

int main () {
   FILE * f_ptr;
   char str[BUFF_SIZE];

   /* f_ptr -> file.txt */
   f_ptr = fopen("file.txt" , "r");
   if(f_ptr == NULL) {
      perror("Error opening file");
      return(-1);
   }
   if( fgets (str, BUFF_SIZE, f_ptr)!=NULL ) {
      /* str -> stdout */
      puts(str);
   }

   fclose(f_ptr);
   
   return(0);
}