#include <stdio.h>
#include <stdlib.h>

int dataqueue[2000];
int frontQueue = 0;
int backQueue = -1;

void enQueue(int value) {
    ++backQueue;
    dataqueue[backQueue] = value;
}

void deqQueue() {
    ++frontQueue;
}

int peekQueue() {
    return dataqueue[frontQueue];
}


int main(int argc, char *argv[]) {

    for(int i = 0; i < 200; ++i) {
        enQueue(i + 1);
    }

    for (int i = 0; i < 200; ++i)
    {
        printf("%d, ",peekQueue());
        deqQueue();
    }
    printf("\nFinished\n");
    




    return 0;
}