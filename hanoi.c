#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hanoi(int, char, char, char);

int main(int argc, char **argv)
{
  int n;

  if (argc != 2)
    exit(1);

  n = atoi(argv[1]);

  hanoi(n, 'A', 'C', 'B');

  return 0;
}

void hanoi(int n, char f, char t, char h)
{
  if (n == 1) {
    printf("%c -> %c\n", f, t);
    return;
  }

  hanoi(n-1, f, h, t);
  printf("%c -> %c\n", f, t);
  hanoi(n-1, h, t, f);
}
