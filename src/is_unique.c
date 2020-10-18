#include <stdio.h>

int len(char *str) {
  char *nextChar = str;

  while (*nextChar != '\0')
    nextChar += 1;

  return nextChar - str;
}

int is_unique(char *str) {
  int length = len(str);

  if (length > 128)
    return 0;

  if (length == 0 || length == 1)
    return 1;

  for (int i = 0; i < length - 1; i += 1) {
    for (int j = i + 1; j < length; j += 1) {
#ifdef DEBUG
      printf("str[%d] = '%c' str[%d] = '%c'\n", i, str[i], j, str[j]);
#endif
      if (str[i] == str[j])
        return 0;
    }
  }

  return 1;
}

int main(void) {

  char *str;

  printf("Enter a string: ");
  scanf("%s", str);

  if (is_unique(str)) {
    printf("String \"%s\" is unique", str);
  } else {
    printf("String \"%s\" is not unique", str);
  }

  return 0;
}
