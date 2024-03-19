#include "queue.h"
#include<time.h>
void jackpot (int n, int r) {
  /*Terminar*/
  Queue *left = create(r);
  Queue *mid = create(r);
  Queue *right = create(r);
  int fl; 
  int fm;
  int fr;
  int i = 0;
  for(i = 0; i < r-1; i++){
     enqueue(left, i);
     enqueue(mid, i);
     enqueue(right, i);
  }
  int rolls = rand()%100;
  for(i = 0; i < rolls; i++){
     enqueue(left, dequeue(left));
  
  }
  fl = front(left);
  rolls = rand()%100;
  for(i = 0; i<rolls; i++){
     enqueue(mid, dequeue(mid));
     
  }
  fm = front(mid);

  rolls = rand()%100;

  for(i = 0; i<rolls; i++){
     enqueue(right, dequeue(right));
  }
  fr = front(right);
  if(fm == fr && fr == fl)
    printf("JACKPOT: %d %d %d\n", fl, fm, fr);
  else
    printf("%d %d %d\n", fl, fm, fr);
}

int main () {
  srand(time(NULL));	
  int n = 3;  /*número de carretéis*/ 
  int r = 12; /*sequência de números em cada carretel*/ 
  jackpot (n, r);
}

