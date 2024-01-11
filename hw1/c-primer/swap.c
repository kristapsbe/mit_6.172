// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void swap(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}

int main() {
  int k = 1;
  int m = 2;
  swap(&k, &m);
  // What does this print?, A: k = 1, m = 2 because we didn't pass the pointers to the values (until we update the function to use pointers)
  printf("k = %d, m = %d\n", k, m);

  return 0;
}
