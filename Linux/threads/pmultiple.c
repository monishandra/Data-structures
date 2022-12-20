#include <pthread.h>
#include <stdio.h>

void *task_body(void *pv) {
  int i, ps,id=(int)pv;
  printf("%d--welcome\n", id);
  for (i = 1; i <= 5; i++)
    printf("%d--%d\n", i, id);
  // pthread_exit(NULL);
}
int main() {
  int i, n = 10;
  pthread_t ptarr[n];
  for (i = 0; i < n; i++) {
    int k = 100 + i;
    pthread_create(&ptarr[i], NULL, task_body, (void *)k);
  }
  for (i = 0; i < n; i++)
    pthread_join(ptarr[i], NULL);
  printf("main--thank you\n");
  return 0; // exit(0);
}
