#include <stdio.h>

int main(int argc, char ** argv)
{
  int result;

  /* Initialize Caml code */
  caml_startup(argv);
  /* Do some computation */
  result = fib(10);
  printf("fib(10) = %s\n", format_result(result));
  return 0;
}