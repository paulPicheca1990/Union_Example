#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv) {
  union float_inspection {
      float floatval;
      uint32_t intval;
  } fi;
  
  float f = 65.65625;
  fi.floatval = f;
  
  // Get Addresses and Values
  printf("0x%08x %f\n", fi.intval, fi.floatval);  
  printf("0x%08x %f\n", *((uint32_t *) & f), f);

   return 0;
}