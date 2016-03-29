#include <stdio.h>
#include "stringcopy.h"

void string_copy(char *var, char *obj) {
  do {
    *var=*obj;
    var++;
  } while (*obj++);
}
