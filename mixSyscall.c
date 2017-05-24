#include "syscall.h"

int main() {
	//create 3 files
	char *filename1 = "newFile1";	
	char *filename2 = "newFile2";	
	char *filename3 = "newFile3";	
	int fd1 = creat(filename1);
	int fd2 = creat(filename2);
	int openFd1 = open(filename1);
	int openFd2 = open(filename3);
	char *message = "success";
	int number1 = write(openFd1, message, 8*sizeof(char)); 
	char buffer[10];
	int number2 = read(fd1, buffer, 10);
	int number3 = write(fd2, buffer, number2);
	int number4 = write(1, buffer, number2);
	halt();
}
