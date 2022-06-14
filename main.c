#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "parent.h"
#include "child.h"
#define BUFLEN 10

int main(void)
{
   int pid;int i=0;
pid = fork();
// Parent
while(i<4){
if(pid == 0) parent();

// Child
else child(i);

i++;
}
}