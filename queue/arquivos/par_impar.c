#include "queue.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main () {
  int i, n = 10;	
  /*Use somente as operações definidas em queue.h*/
  /*Não use para resolver esse exercício o operador -> aqui!*/
  /*Terminar*/
  srand(time(NULL));
  Queue *par = create(n);
  Queue *impar = create(n);
  i = 0;
  while(i < n){
	int random = (rand()) % 100;
	if(random % 2 == 0){
		enqueue(par, random);
	}
	else
		enqueue(impar, random);
	i++;
  }  
  print(par);
  print(impar);
  return 0;
}

