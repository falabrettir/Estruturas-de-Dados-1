#include "list.h"

List* create_circular (List *head) {
  /*Terminar!*/	
  List* t = head;
  if(head == NULL){return head;}
  while(t->next!=NULL){t = t->next;}
  t->next = head;
  head->prev = t;
  return head;
}
int is_circular(List* node){
  List* t = node;
  while(t != NULL && node != NULL){
    if(t == node){return 1;}
    t = t->next;
    node = node->next;
  }
  return 0;
}
int main () {
  int i;	
  int n = 4;	
  List *l = create ();
  for (i = n; i >= 0; i--) {
    l = insert_front (l, i);
  }
  print (l);
  l = create_circular(l);
  printf("%d\n", is_circular(l));
  //print (l);
  destroy (l);
  return 0;
} 
