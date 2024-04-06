#include "queue.h"

Queue* create () {
  return NULL;
}

void destroy (Queue *q) {
  Queue *t;
  t = q;
  while(t != NULL){
    q = t;
    t = t -> next;
    free(q);
  }
}

int empty (Queue *q) {
  return(q == NULL);
}

Queue* enqueue (Queue *q, int elem) {
  Queue* node = (Queue *) malloc(sizeof(Queue));
  node->data = elem;
  node->next = NULL;
  if(empty(q)){return node;}
  else{
    Queue* t;
    t = q;
    while(t -> next != NULL){t = t->next;}
    t->next = node;
  }
  return q;
}

Queue* dequeue (Queue *q) {
  Queue *t;
  if(empty(q)){printf("Stack Underflow"); exit(1);}
  else{
    t = q->next;
    free(q);
    q = t;
  }
}

int get_front (Queue *q) {
  return(q -> data);
}

void print (Queue *q) {
  Queue *t;
  printf("Front: ");
  for(t = q; t != NULL; t = t -> next){printf("%d ", t -> data);}
  printf("Back");
}

