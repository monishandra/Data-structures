#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  int ret;
  int i, max = 10;
  printf("welcome..pid=%d\n", getpid());
  ret = fork();
  if (ret < 0) {
    perror("fork");
    exit(1);
  }
  if (ret == 0) {
    printf("child--welcome,pid=%d,ppid=%d\n", getpid(), getppid());
    for (i = 1; i <= max; i++)
      printf("child--%d\n", i);
      usleep(5);
    exit(0);
  } else // ret>0
  {
    printf("parent--hello,pid=%d,ppid=%d\n", getpid(), getppid());
    for (i = 1; i <= max; i++)
      printf("parent--%d\n", i);
      usleep(1);
  }
  return 0;
}
