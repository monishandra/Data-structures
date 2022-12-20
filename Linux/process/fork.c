#include <stdio.h>
#include <unistd.h>
int main(){
        int ret=fork();
        printf("HI,%d\n",ret);
        return 0;
}
