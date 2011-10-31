#include <assert.h>
int *watched;

void foo(int *p)
{
  watched = p; 
}

void bar()
{
  int i, *j;
  i = 1;
  j = &i;
  foo(j);
  assert(j == watched);
  /* assert(j != watched); */
}
