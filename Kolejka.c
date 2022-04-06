#include <stdio.h>
#include <stdlib.h>
int top=-1;
int *queue;

void enqueue(int element){
    top=top+1;
    queue[top]=element;

}
void dequeue(int size){
    for(int i=1; i<size; i++){
        queue[i-1]=queue[i];
    }
    top--;
}

int main()
{
    int size=6;
    queue=(int *) malloc(sizeof(int)*size);

    printf("po dodaniu\n");
    enqueue(1);
    enqueue(22);
    enqueue(5);
    enqueue(12);
    enqueue(100);

    for(int i=0; i<top+1; i++){
        printf("queue[%d]: %d \n", i, queue[i]);
    }
    dequeue(size);
    

    printf("\npo usunieciu\n");

    for(int i=0; i<top+1; i++){
        printf("queue[%d]: %d \n", i, queue[i]);
    }


}
