// input and prcoessing parallely
#include<stdio.h>
int main(){

    int totalTasks,oddEff=1,evenEff=1;
    float oddTime=0,evenTime=0;
    scanf("%d",&totalTasks);

    int time,id;
    for(int i=0;i<totalTasks;i++){
        scanf("%d%d",&id,&time);
        // if odd 
        if(id&1){ 
            oddTime+=time*oddEff;
            oddEff*=2;
        }
        // if even 
        else{
            evenTime+=time/evenEff;
            evenEff*=2;
        }
    }
    // print result
    if(evenTime>oddTime)
    printf("%f",evenTime);
    else
    printf("%f",oddTime);
    
}



// // input and processing serially


#include<stdio.h>

struct task{
    int taskId;
    int time;
};

int main(){
    int totalTasks,oddEff=1,evenEff=1;
    float oddTime=0,evenTime=0;
    scanf("%d",&totalTasks);

    // array for all processes
    struct task tasks[totalTasks];
    // input
    for(int i=0;i<totalTasks;i++){
        scanf("%d%d",&tasks[i].taskId, &tasks[i].time);
    }
    // processing 
    for(int i=0;i<totalTasks;i++){
        // if odd 
        if(tasks[i].taskId &1){
            oddTime+=tasks[i].time*oddEff;
            oddEff*=2;
        }
    // if even 
        else{
            evenTime+=tasks[i].time/evenEff;
            evenEff*=2;
        }
    }
    // print result
    if(evenTime>oddTime)
    printf("%f",evenTime);
    else
    printf("%f",oddTime);
    

}

// ##############SAMPLE INPUT################
// 4
// 1 3
// 2 6
// 3 4
// 4 10
// ###############OUTPUT###########
// 11.000000