#include "syscall.h"

int main() {

	printf("parent start\n");

	int file = creat("newFile");

	char *content = "parent wrote to this file for child.\n";
	int writeBytes = write(file, content, strlen(content)+1);

	int childA = exec("joinReadA.coff", 0, 0);

	int exitA;

	join(childA, &exitA);

	char buffer[7];
	int readBytes = read(file, buffer, 7);

	join(childA, &exitA);

	printf("parent read in %d bytes\n", readBytes);

	printf("parent read from newFile: %s\n", buffer);

}
