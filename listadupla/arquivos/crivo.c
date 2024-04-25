#include <math.h>
#include "list.h"

void crivo (int n) { 
  int i, sq;       	
  List *l = create ();
  List* t = l;

  for(i = 2; i<= n; i++){l = insert_back(l, i);}
  //Solução 1
  for(t = l; t != NULL; t = t->next){
    sq = sqrt(t->data);
    for(i = 2; i <= sq; i++){
      if(t->data%i == 0 && t->data != i){
        t->data = 0; 
        t = t->prev;
        t = remove_queue(t, 0); 
      }
    }
  }
  /*Solução 2
  sq = sqrt(n);
  for(i = 2; i <= sq; i++){
    for(t = l; t!= NULL; t = t->next){
      if(t->data%i ==0 && t->data != i){
        t->data = 0;
        t = t->prev;
        t = remove_queue(t, 0);
      }
    }
  }*/
  print(l);
  destroy (l);
}   

int main () {
  int n = 100;
  crivo (n);
  return 0;
} 

