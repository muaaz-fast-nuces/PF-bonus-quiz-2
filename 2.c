#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_word(char dict[6][12],int size,char searchWord[]){
  int is_found = 1;
  for (int i = 0; i < size; i++){
    is_found = 1;
    if(strlen(searchWord) != strlen(dict[i])) continue;
    for (int j = 0; j < strlen(dict[i])  ; j++){
      if(dict[i][j] != searchWord[j]) is_found = 0;
    }
    if(is_found) return i;
  }
  return -1;
}

int main(void) {
    char dict[6][12] = {
      "APPLE",
      "BANANA",
      "COMPUTER",
      "PROGRAMMING",
      "ALGORITHM",
      "DATA"
    };
    for (int i = 0; i < 6; i++){
      printf("%s\n",dict[i]);
    }
    char input[13];
    printf("Write a word to search for : ");
    fgets(input,sizeof(input),stdin);
    input[strcspn(input,"\n")] = '\0';
    int index = find_word(dict,6,input);

    (index != -1) ? printf("Word found at position %d", index+1) : printf("Word not found in dictionary");

    return 0;
}

