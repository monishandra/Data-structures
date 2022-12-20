#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int k;
    k = execl("/usr/bin/cal", "cal", "5", "2023", NULL);
    if (k < 0) {
      perror("execv");
      exit(1);
    }
    exit(0);
    
}