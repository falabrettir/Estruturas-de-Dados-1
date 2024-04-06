#include "stack.h"

Stack* create () {
  return NULL;
}

void destroy (Stack *s) {
  Stack* t;
  t = s;
  while(t != NULL){s = t; t = t->next; free(s);}
}

Stack* push (Stack *s, int elem) {
  Stack* node = (Stack*) malloc(sizeof(Stack));
  node->data = elem;
  node->next = s;
  return node;
}

Stack* pop (Stack *s) {
  if(empty(s)){printf("Stack Underflow!"); exit(1);}
  else{
    Stack* t;
    t = s->next;
    free(s);
    s = t;
  }
}

int get_peek (Stack *s) {
  if(empty(s)){printf("Stack Underflow!"); exit(1);}
  else{
    return s->data;
  }
}

int empty (Stack *s) {
  return(s == NULL);
}

void print (Stack *s) {
  Stack* t;
  printf("Peek: ");
  for(t = s; t != NULL; t = t->next){printf("%d ", t->data);}
  printf("Bottom");
}
