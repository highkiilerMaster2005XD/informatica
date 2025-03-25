#ifndef cedupinfo

#define cedupinfo

typedef char* string;

int input_int(string message) {
  int tmp;
  
  printf("%s", message);
  scanf("%d", &tmp);

  return tmp;
};

#endif
