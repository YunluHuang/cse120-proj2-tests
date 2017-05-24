#include "syscall.h"
#include "stdio.h"

int main() {

	char *childCoff = "write1.coff";
	
	int childId = exec(childCoff, 0, 0);

	if(childId != 1) {
		printf("WRONG!!");
	}

	//int exitStatus;

	//int status = join(childId, &exitStatus);

	//printf("child exit status is %d, join returns %d\n", exitStatus, status);
	printf("reach parent end\n");
	//halt();
}
