#include <assert.h>
#include <stdio.h>

int dummy = 0;

void foo()
{
  printf("call foo()\n");
  dummy = 1;
}

/* main entry */
void bar()
{
  baz();
  assert(dummy != 0); /* check whether foo is called */
  /* assert(dummy == 0); */
}

void baz()
{
  foo();
}
