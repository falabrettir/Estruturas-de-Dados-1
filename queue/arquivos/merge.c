#include<stdio.h>
#include<stdlib.h>
#include"queue.h"
#include<time.h>


Queue* merge(Queue *a, Queue *b){
   Queue* merge = create((a->size + b->size));
   while(!empty(a) && !empty(b)){
      if(front(a) < 
   }
   return merge;
}


int main(){
   srand(time(NULL));
   int tama, tamb;
   tama = rand()%10;
   tamb = rand()%10;
   Queue* a=create(tama);
   Queue* b=create(tamb);
   int i;
   int elem;
   for(i = 0; i <tama-1; i++){
      elem = rand()%10;
      enqueue(a, elem);
   } 
   for(i=0; i<tamb-1; i++){
      elem = rand()%10;
      enqueue(b, elem);
   }
   print(merge(a, b));
   return 0;
}
