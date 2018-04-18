// #include <tgmath.h>
#include <iostream>
#include <algorithm>

int i,N;
int arr[] ={0,1,2,3,4,5,6,7,8,9};

void swap(int a,int b){
  arr[a] = arr[b] - arr[a];
  arr[b] = arr[b] - arr[a];
  arr[a] = arr[b] + arr[a];
}

void display_arr(){
  for (i = 0; i < N; ++i) {
    printf("%d    ", arr[i]);
  }
  printf("\n");
}
void permute(){

}

int main(int argc, char *argv[])
{
  N =  sizeof(arr)/sizeof(int);
  display_arr();
  swap(0,5);
  display_arr();
  return 0;
}
