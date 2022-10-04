#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  while (*src != '\0') {
    strcpy(src, dst);
    src++;
    dst++;
  }

  *dst = '\0';
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  char dstString[(strlen(srcString) + 1)];

  copy(srcString, dstString);

  printf("%s", dstString);
}
