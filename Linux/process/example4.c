#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int ret;
  printf("welcome..pid=%d\n", getpid());
  ret = fork();
  if (ret < 0) {
    perror("fork");
    exit(1);
  }
  if (ret == 0) {
    printf("child--welcome,pid=%d,ppid=%d\n", getpid(), getppid());
    exit(0);
  } else // ret>0
  {
    printf("parent--hello,pid=%d,ppid=%d\n", getpid(), getppid());
    printf("enter any char to terminate\n");
    getchar(); // sleep(5);
    // no waitpid, parent is not cleaning up child's PCB
  }
  return 0;
}