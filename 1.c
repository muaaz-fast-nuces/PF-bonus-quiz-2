#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char char_arr[4][4]=   {
      {'A','2','C','4'},
      {'E','6','G','8'},
      {'I','1','K','3'},
      {'M','5','O','7'}
    };
    char *p = &char_arr[0][0]; 
    printf("------------Original Array---------\n");
    for (int i = 0; i < 16; i++){
      printf("%c ",*(p+i));
      if((i+1)%4==0) printf("\n"); 
    }
    
    printf("\n-------Transformed Array----------\n");
    for (int i = 0; i < 16; i++){
      printf("%c ",*(p+i)+1);
      if((i+1)%4==0) printf("\n"); 
    }
    
    return 0;
}
