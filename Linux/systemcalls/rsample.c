#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int fd, nbytes;
  fd = open("alpha.txt", O_RDONLY);
  printf("return value of fd : %d\n",fd);
  if (fd < 0) {
    perror("open");
    exit(1);
  }
  int maxlen = 128;
  char buf[maxlen];
  nbytes = read(fd, buf, maxlen);// (fd value ,buffer array where we store the data, max length)
  if (nbytes < 0) {
    perror("read");
    exit(2);
  }
  // if(nbytes==0)  printf("File is empty\n");
  // buf[nbytes]='\0';
  printf("nbytes=%d,buf=%s\n",nbytes,buf);
  write(1, buf, nbytes);// (stdout,buffer data,size in bytes)
  printf("\n");
  close(fd);
  return 0; // exit(0);
}