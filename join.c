#include "syscall.h"
#include "stdio.h"

int main() {

	printf("Join.coff start\n");

	char *Acoff = "joinA.coff";
	char *Bcoff = "joinB.coff";
	
	int A = exec(Acoff, 0, 0);
	int exitA;
	int normalA = join(A, &exitA);
	printf("2\n");
	int B = exec(Bcoff, 0, 0);
	int exitB;
	int noramlB = join(B, &exitB);
	printf("4\n");
	printf("parent recieve exitA = %d\n", exitA);
	printf("parent recieve exitB = %d\n", exitB);

}
