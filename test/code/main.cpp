#include <stdio.h>
#include "myclass.h"

int main() {
  MyClass obj;
  printf("val=%d\n", obj.get());
  return 0;
}
