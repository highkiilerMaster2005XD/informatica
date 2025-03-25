#include <stdio.h>
#include "cedupinfo.h"

int input_int(string message) {
  int tmp;

  printf("%s", message);
  scanf("%d", &tmp);

  return tmp;
}

int input_string(string message) {
  string tmp;
  return 0;
}
