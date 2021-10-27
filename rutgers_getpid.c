/*getpid: print a  process' process ID*/
#include <stdlib.h>	/*needed to define exit()*/
#include <unistd.h>	/*needed to define getpid()*/
#include <stdio.h> 	/*needed for printf*/
int
main(int argc, char **argv) {
	printf("my process ID is %d\n", getpid());
	printf("my parent process ID is %d\n", getppid());
	printf("Current progam break is:	%10p\n", sbrk(0));
	exit(0);
}
