#include <lib.h>
#define mounte	_mounte

#include <string.h>
#include <unistd.h>


PUBLIC int mounte(special, name, rwflag, key)
char *name, *special;
int rwflag;
int key;
{
  message m;

  m.m1_i1 = strlen(special) + 1;
  m.m1_i2 = strlen(name) + 1;
  m.m1_i3 = rwflag;
  m.m1_p1 = special;
  m.m1_p2 = name;
  m.m1_p3 = key;
  return(_syscall(FS, MOUNT, &m));
}
