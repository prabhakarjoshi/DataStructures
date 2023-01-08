#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
    void *shared_memory;
    int shmid=shmget((key_t)123, 1024, 0666|IPC_CREAT);
    shared_memory=shmat(shmid,NULL,0);
    strcpy(shared_memory,"HELLO WORLD");
    printf("WRITE DONE\n");
    
    
    shmid=shmget((key_t)123, 1024, 0666);
    shared_memory=shmat(shmid,NULL,0);
    printf("READ DONE:- %s\n",(char *)shared_memory);


}
