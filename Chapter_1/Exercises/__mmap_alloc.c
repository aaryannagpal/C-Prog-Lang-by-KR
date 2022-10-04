#include <stdio.h>
#include <sys/mman.h>
int main(void){
  int *ptr=(int*)mmap(0xb00b5,4,PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS,-1,0);
  *ptr=43;
  printf("%p\n",ptr);
  printf("%d\n",*ptr);
  munmap((void*)ptr,4);
  return 0;
}
