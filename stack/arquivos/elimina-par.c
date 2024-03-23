#include "stack.h"

int main () {
  int tam = 6;
  Stack *s = create (tam);
  Stack *impar = create(tam);
  srand(time(NULL));
  int i, e;
  for (i = 0; i < tam; i++) {
    push (s, rand()%10);
  }
  print (s);
  while(!empty(s)){
    e = pop(s);
    if(e&1)
      push(impar, e);	      
  }
  i = 0;
  while(!empty(impar)){
    push(s, pop(impar));
  }
  print(s);

  destroy (s);
  destroy (impar);
}
