#include <tgmath.h>
#include <iostream>
#include <algorithm>
using namespace std;
int i,offset,n,max_heap[]={1200,523,1001,321,14,13,12,320};

void display_e(int index){
  offset = log2(index + 1);
  for (i = 0; i < offset; ++i) {
    printf("         ");
  }
  printf("%d\n", max_heap[index]);
}
void display_heap(int index){
  if (index < 0 || index >= n) {
    return;
  }

  display_heap(2*index +1);
  display_e(index);
  display_heap(2 *index +2);
}
int main(int argc, char *argv[])
{
  n = sizeof(max_heap)/4;
  display_heap(0);
  return 0;
}
