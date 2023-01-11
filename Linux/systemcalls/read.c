#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int nbytes,fd;
    fd=open("write.txt",O_WRONLY|O_CREAT,0666); 
    printf("fd=%d\n",fd);
    if(fd<0){
        perror("open");
        exit(1);
    }
    char str[]="Andra Monish";
    int len=strlen(str);
    nbytes=write(fd,str,len);
    printf("nbytes=%d,data=%s\n",nbytes,str);
    write(1,str,nbytes);
    printf("\n");
    close(fd);
    return 0;
}