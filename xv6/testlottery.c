#include "types.h"
#include "stat.h"
#include "user.h"

int
main(void)
{
  printf(1, "Lottery test starting\n");

  int pid = fork();
  if(pid == 0){
    settickets(10);
    while(1);
  }

  printf(1, "Parent running\n");
  while(1);
}

