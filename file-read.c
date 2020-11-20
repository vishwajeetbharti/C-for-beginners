#include <stdio.h>

int main () {
   FILE *fp;
   int c;
  
   fp = fopen("f2.txt","r");
   if(fp == NULL) {
      perror("Error in opening file");
      return(-1);
   } do {
      c = fgetc(fp);
      if( feof(fp) ) {
         break ;
      }
      printf("%c", c);
   } while(1);

   fclose(fp);
   return(0);
}