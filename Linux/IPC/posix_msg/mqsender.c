#include <unistd.h>
#include <fcntl.h>
#include <mqueue.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int ret;
    struct mq_attr attr;
    attr.mq_msgsize=512;
    attr.mq_maxmsg=20; //Shouldn't exceed /proc/sys/fs/mqueue/msg_max
    mqd_t mqid;
    mqid = mq_open("/mque5", O_WRONLY | O_CREAT, 0666, &attr);
    if (mqid < 0) {
        perror("mq_open");
        exit(1);
    }
    
    char str[] = "Hello Message queue";
    int len = strlen(str);  //Shouldn't exceed attr.mq_msgsize
    ret = mq_send(mqid, str, len, 5);
    if (ret < 0) {
        perror("mq_send");
        exit(2);
    }
    
    mq_close(mqid);
    return 0;
}