#include <stdio.h>
#include <pthread.h>
#include <stdbool.h>
int val=100;
#define NUM 100
void *task_body1(void *pv){
    for(int i=0;i<=NUM;i++){
        val++;
    }
}
void *task_body2(void *pv){
    for(int i=0;i<=NUM;i++){
        val--;
    }
}
int main(){
    pthread_t pt1,pt2;
    pthread_create(&pt1,NULL,task_body1,NULL);
    pthread_create(&pt2,NULL,task_body2,NULL);
    pthread_join(pt1,NULL);
    pthread_join(pt1,NULL);
    printf("val=%d",val);
    return 0;
}
