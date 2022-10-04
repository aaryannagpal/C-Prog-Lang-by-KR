#include <stdio.h>
#include <sys/mman.h>
int main(void){
  printf("%p\n",sbrk(0));
  return 0;
}
