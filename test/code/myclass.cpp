#include "myclass.h"
#include "hoge.h"

int MyClass::get() {
  return Hoge().get();
}
