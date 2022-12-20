#include <unistd.h>
#include <fcntl.h>
#include <mqueue.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    int ret, nbytes;

    struct mq_attr attr;
    attr.mq_msgsize=512;
    attr.mq_maxmsg=20;  //Shouldn't exceed /proc/sys/fs/mqueue/msg_max
    
    mqd_t mqid;
    mqid=mq_open("/mque5",O_RDONLY|O_CREAT,0644,&attr);    
    
    if (mqid < 0) {
        perror("mq_open");
        exit(1);
    }
    
    char buf[512];
    int maxlen = 512, prio; //maxlen shouldn't exceed attr.mq_msgsize
    nbytes = mq_receive(mqid, buf, maxlen, &prio);
    
    if (nbytes < 0) {
        perror("mq_recv");
        exit(2);
    }
    
    buf[nbytes] = '\0';
    printf("receive msg:%s,nbytes=%d,prio=%d\n", buf, nbytes, prio);
    //write(1, buf, nbytes);
    mq_close(mqid);
    return 0;
}
