#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "Apple";
  char s2[] = "Banana";
  char s3[] = "Apple";

  // Compare identical strings
  if (strcmp(s1, s3) == 0) {
    printf("s1 and s3 are equal.\n");
  }

  int result = strcmp(s1, s2);
  if (result < 0) {
    printf("s1 comes before s2 dictionary-wise.\n");
  } else if (result > 0) {
    printf("s1 comes after s2 dictionary-wise.\n");
  }
  return 0;
}
