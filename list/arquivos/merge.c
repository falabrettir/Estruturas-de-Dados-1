#include "list.h"

List* merge (List *A, List *B){
  /*Terminar*/	
  List* p = NULL, *t;
  while((A != NULL) && (B != NULL)){
    if(p == NULL){
      if(A-> data <= B ->data){p = A; t = p; A = A->next;}
      else{p = B; t = p; B = B->next;}
    }
    else{
      if(A->data <= B->data){t->next = A; A = A->next; t = t->next;}
      else{t->next=B; B = B->next; t = t->next;}
    }
  }
  if(A == NULL){t->next = B;}
  else{t->next = A;}
  return p;
}

/**/
int main () {
  int k;
  List *A = NULL, *B = NULL;
  for (k = 10; k >= 0; k -= 2) 
    A = insert (A, k);
  for (k = 19; k >= 0; k -= 2) 
    B = insert (B, k);
  print (A);
  print (B);
  List *C = merge (A, B);
  print (C);
  destroy (C);
  return 0;
}
