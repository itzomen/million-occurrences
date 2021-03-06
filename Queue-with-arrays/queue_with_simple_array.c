/*C program using arrays to implement the queue data structure*/
#include <stdio.h>
#include <stdlib.h>
//MAX is the maximum size of the queue
#define MAX 100

int queue[MAX], n, front=-1, back=-1, option, x;
//Functions
void enqueue(void);
void dequeue(void);
void display_queue(void);
void queue_size(void);
void headOfQueue(void);
void endOfQueue(void);


int main(){
    //Do until input is zero
    printf("\n\t IMPLEMENTATION OF QUEUE WITH ARRAYS IN C \t\n");
    printf("\n Create your queue by entring the size of the queue: \t");
    scanf("%d", &n);

    do{

        printf("\n\t Choose an option: \t\n");
        printf("\n\t 1.ENQUEUE \n\t 2.DEQUEUE \n\t 3.Display queue Elements \n\t 4.Size of queue \n\t 5.Head of queue \n\t 6.End of queue \n\t 0.Exit Program \t");
        printf("\n\n\t");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                {
                  system("cls");
                  printf("\n\t__________________________________________________\t\t\n");
                  enqueue();
                  printf("\n\t__________________________________________________\t\t\n");
                  break;
                }
            case 2:
                {
                  system("cls");
                  printf("\n\t__________________________________________________\t\t\n");
                  dequeue();
                  printf("\n\t__________________________________________________\t\t\n");
                  break;
                }
            case 3:
                {
                  system("cls");
                  printf("\n\t__________________________________________________\t\t\n");
                  display_queue();
                  printf("\n\t__________________________________________________\t\t\n");
                  break;
                }
            case 4:
                {
                  system("cls");
                  printf("\n\t__________________________________________________\t\t\n");
                  queue_size();
                  printf("\n\t__________________________________________________\t\t\n");
                  break;
                }
                case 5:
                {
                  system("cls");
                  printf("\n\t__________________________________________________\t\t\n");
                  headOfQueue();
                  printf("\n\t__________________________________________________\t\t\n");
                  break;
                }
                case 6:
                {
                  system("cls");
                  printf("\n\t__________________________________________________\t\t\n");
                  endOfQueue();
                  printf("\n\t__________________________________________________\t\t\n");
                  break;
                }
            default:
                {
                    system("cls");
                    printf("\n\t__________________________________________________\t\t\n");
                    printf("\n Invalid option or program is exiting: \n");
                    printf("\n\t__________________________________________________\t\t\n");
                }
        }

    }while(option != 0);
    return 0;
}

void enqueue(){
    if(back == n-1){
        printf("\n\t Your queue is full \t\n");
    }
    else {
        if (front == -1)
            front = 0;
        printf("\n\t Enter the value you want to enqueue: ");
        scanf("%d", &x);
        back++;
        queue[back] = x;
        printf("\nInserted -> %d", x);
  }
}
void dequeue(){
    if (front == -1)
        printf("\n\t Your queue is under flow \t\n");
    else{
        printf("\n\t %d has been dequeueped \t", queue[front]);
        front++;
        if (front > back)
            front = back = -1;
    }
}
void display_queue(){
    if(back == -1){
        printf("\n\t Your queue is empty \t\n");
    }
    else{
        printf("\n\t These are the elements in the queue \t\n");
        printf("\n\t\t Head \t\t\n");
        int i;
        for (i = front; i <= back; i++)
            printf("\n\t\t  %d  \t\t\n", queue[i]);
        printf("\n\t\t End \t\t\n");
    }
}
void queue_size(){
    if(back == -1){
        printf("\n\t Your queue is empty \t\n");
    }
    else{
        printf("\n\t The queue size is %d\t\n", back+1);
    }
}
void headOfQueue(){
    if(back == -1){
            printf("\n\t Your queue is empty \t\n");
    }
    else{
        printf("\n\t The Head of the queue is \t\n");
        printf("\n\t\t Head : %d  \t\t\n", queue[front]);
    }
}
void endOfQueue(){
    if(back == -1){
            printf("\n\t Your queue is empty \t\n");
    }
    else{
        printf("\n\t The End of the queue is \t\n");
        printf("\n\t\t End : %d  \t\t\n", queue[back]);
    }
}
