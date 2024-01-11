// Copyright (c) 2012 MIT License by 6.172 Staff

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#define PRINT_SIZE(t) (printf("size of %s : %zu bytes \n", #t, sizeof(t)))

int main() {
  // Please print the sizes of the following types:
  // int, short, long, char, float, double, unsigned int, long long
  // uint8_t, uint16_t, uint32_t, and uint64_t, uint_fast8_t,
  // uint_fast16_t, uintmax_t, intmax_t, __int128, and student

  // Here's how to show the size of one type. See if you can define a macro
  // to avoid copy pasting this code.
  
  // e.g. PRINT_SIZE("int", int);
  //      PRINT_SIZE("short", short);

  // Alternatively, you can use stringification
  // (https://gcc.gnu.org/onlinedocs/cpp/Stringification.html) so that
  // you can write
  // e.g. PRINT_SIZE(int);
  //      PRINT_SIZE(short);
  PRINT_SIZE(int);
  PRINT_SIZE(short);
  PRINT_SIZE(long);
  PRINT_SIZE(char);
  PRINT_SIZE(float);
  PRINT_SIZE(double);
  PRINT_SIZE(unsigned int);
  PRINT_SIZE(long long);
  PRINT_SIZE(uint8_t);
  PRINT_SIZE(uint16_t);
  PRINT_SIZE(uint32_t);
  PRINT_SIZE(uint64_t);
  PRINT_SIZE(uint_fast8_t);
  PRINT_SIZE(uint_fast16_t);
  PRINT_SIZE(uintmax_t);
  PRINT_SIZE(intmax_t);
  PRINT_SIZE(__int128);

  // Composite types have sizes too.
  typedef struct {
    int id;
    int year;
  } student;

  PRINT_SIZE(student);

  student you;
  you.id = 12345;
  you.year = 4;


  // Array declaration. Use your macro to print the size of this.
  int x[5];
  PRINT_SIZE(x);

  // You can just use your macro here instead: PRINT_SIZE("student", you);
  PRINT_SIZE(you);

  // White-up 3
  int int_v = 7;
  PRINT_SIZE(&int_v);
  long long_v = 7;
  PRINT_SIZE(&long_v);
  char char_v = 'c';
  PRINT_SIZE(&char_v);
  float float_v = 7.0;
  PRINT_SIZE(&float_v);
  double double_v = 7.0;
  PRINT_SIZE(&double_v);
  unsigned int unsigned_int_v = 7;
  PRINT_SIZE(&unsigned_int_v);
  long long long_long_v = 7;
  PRINT_SIZE(&long_long_v);
  uint8_t uint8_t_v = 7;
  PRINT_SIZE(&uint8_t_v);
  uint16_t uint16_t_v = 7;
  PRINT_SIZE(&uint16_t_v);
  uint32_t uint32_t_v = 7;
  PRINT_SIZE(&uint32_t_v);
  uint64_t uint64_t_v = 7;
  PRINT_SIZE(&uint64_t_v);
  uint_fast8_t uint_fast8_t_v = 7;
  PRINT_SIZE(&uint_fast8_t_v);
  uint_fast16_t uint_fast16_t_v = 7;
  PRINT_SIZE(&uint_fast16_t_v);
  uintmax_t uintmax_t_v = 7;
  PRINT_SIZE(&uintmax_t_v);
  intmax_t intmax_t_v = 7;
  PRINT_SIZE(&intmax_t_v);
  __int128 __int128_v = 7;
  PRINT_SIZE(&__int128_v);

  return 0;
}
