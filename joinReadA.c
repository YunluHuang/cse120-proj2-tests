#include "syscall.h"

int main() {

	printf("inside childA\n");

	int file = open("newFile");

	char buffer[14];
	read(file, buffer, 14);

	printf("child read from newFile: %s\n", buffer);

	halt();
}
