#include <stdlib.h>
#include <string.h>
int main(void)
{
  char x[] = "napis";
  int n = strlen (x);
  char *p = malloc(n);
  strcpy (p, x);
  return 0;
}

