#include <stdio.h>

int *stack;
int top = -1;

int stack_empty() {
   if(top == -1) {
      return 1;
   }

   else {
      return 0;
   }

}

int Top() {
    printf("Element na gorze: %d\n" ,stack[top]);
}

int pop(){
      if (stack_empty(top)==0){
        top--;
    }
}

int push(int data) {
      top = top + 1;
      stack[top] = data;
}

int main() {
      stack = (int *) malloc(sizeof(int) * 6);


   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);


   printf("Elementy: \n");


    for (int i=0;i<top+1;i++){
        printf("stos[%d]: %d \n", i, stack[top-i]);

    }
    pop();
    pop();

      printf("Po odjeciu: \n");

     for (int i=0;i<top+1;i++){
        printf("stos[%d]: %d \n", i, stack[top-i]);
    }

   return 0;
}
