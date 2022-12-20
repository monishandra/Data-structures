#include <pthread.h>
#include <stdio.h>
#include <semaphore.h>
const int max = 10;
sem_t s1;
void *task_body1(void *pv) {
  int i;
  sem_wait(&s1);
  printf("A--welcome\n");
  for (i = 1; i <= max; i++) {
    printf("A--%d\n", i);
    sleep(1);
  }
  sem_post(&s1);
  //pthread_exit(NULL);
}
void *task_body2(void *pv) {
  int i;
  sem_wait(&s1);
  printf("B--welcome\n");
  
  for (i = 1; i <= max; i++) {
    printf("B--%d\n", i);
    sleep(1);
  }
  sem_post(&s1);
  //pthread_exit(NULL);
}
int main() {
  pthread_t pt1, pt2; // thread handle
  sem_init(&s1,0,1);
  pthread_create(&pt1, NULL, task_body1, NULL);
  pthread_create(&pt2, NULL, task_body2, NULL);
  pthread_join(pt1, NULL);
  pthread_join(pt2, NULL);
  sem_destroy(&s1);
  printf("main--thank you\n");
  return 0; // exit(0);
}

