#include "list.h"
#include <limits.h>

/* */
int position (List *l, int k) {
  if(l != NULL){
    if(l->data == k){return 0;}
    else{
      int retorno = position(l->next, k);
      if(retorno != -1){return retorno + 1;}
    }
  }return -1;
}

/* */
int main () {
  List *l = NULL;
  int k;
  for (k = 5; k <= 9; k++) {
    l = insert_back (l, k);
  }
  for (k = 4; k >= 0; k--) {
    l = insert_back (l, k);
  }
  printf("Lista = ");
  print (l);
  printf("\n");
  printf("Position of %d = %d\n", 9, position(l, 9));
  printf("Position of %d = %d\n", 5, position(l, 5));
  destroy (l);
  return 0;
}
