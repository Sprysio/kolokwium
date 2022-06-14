#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int parent()
{

printf("\nParent sent: %d\n",getpid());

}