#include <assert.h>

int watched;

void foo(int i)
{
  watched = i;
}

void bar()
{
  int j;

  foo(j);
  assert(j == watched);
  /* assert(j != watched); */
}
