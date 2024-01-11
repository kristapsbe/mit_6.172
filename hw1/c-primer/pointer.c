// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char * argv[]) {  // What is the type of argv?
  //int i = 5;
  // The & operator here gets the address of i and stores it into pi
  //int * pi = &i;
  // The * operator here dereferences pi and stores the value -- 5 --
  // into j.
  //int j = *pi;

  char c[] = "6.172";
  char * pc = c;  // Valid assignment: c acts like a pointer to c[0] here.
  char d = *pc;
  printf("char d = %c\n", d);  // What does this print?, A: char d = 6 because it's pointing to c[0]

  // compound types are read right to left in C.
  // pcp is a pointer to a pointer to a char, meaning that
  // pcp stores the address of a char pointer.
  char ** pcp;
  pcp = argv;  // Why is this assignment valid?, A: because we have argv that's an array of char* and we can point to the char* at argv[0]

  const char * pcc = c;  // pcc is a pointer to char constant
  //char const * pcc2 = c;  // What is the type of pcc2?, A: its a constant pointer to a character (i.e. the pointer cant be changed while the character that's being pointed to can)

  // For each of the following, why is the assignment:
  //*pcc = '7';  // invalid?, A: because pcc is a pointer to a char constant - you're allowed to change the pointer, but can't change the value itself - this is trying to change the char that's being pointed to
  pcc = *pcp;  // valid?, A: because the pointer isn't constant, you're allowed to change the pointed (and pcp is char** (a pointer to a pointer))
  pcc = argv[0];  // valid?, A: because argv[0] is a pointer and we're allowed to change the pointer

  char * const cp = c;  // cp is a const pointer to char
  // For each of the following, why is the assignment:
  //cp = *pcp;  // invalid?, A: because cp is a constant pointer to a character and we're not allowed to change the pointer
  //cp = *argv;  // invalid?, A: same as above - because cp is a constant pointer to a character and we're not allowed to change the pointer
  *cp = '!';  // valid?, A: the pointer is constant, but the character value that it's pointing to isn't - we're allowed to change it

  //const char * const cpc = c;  // cpc is a const pointer to char const
  // For each of the following, why is the assignment:
  //cpc = *pcp;  // invalid?, A: because we're trying to change the pointer, which is constant
  //cpc = argv[0];  // invalid?, A: same as above - we're trying to change the pointer, and it's constant
  //*cpc = '@';  // invalid?, A: unlike in the examples before the char is constant as well - we're not allowed to change that either as a result

  return 0;
}
