#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
  int fd;
  int nbytes;
  fd = open("sample.txt", O_WRONLY | O_CREAT, 0666);
  // 0666 -- read/write perms user,group,others
  // fd=open("sample.txt",O_WRONLY); //if assure that file already exists
  if (fd < 0) {
    perror("open");
    exit(1);
  }
  char str[] = "Hello Worlds\n";
  int len = strlen(str); // sizeof(str)
  nbytes = write(fd, str, len);
  if (nbytes < 0) {
    perror("write");
    exit(2);
  }
  printf("written successfully,nbytes=%d\n", nbytes);
  write(1, str, nbytes);
  close(fd);
  return 0; // exit(0);
}