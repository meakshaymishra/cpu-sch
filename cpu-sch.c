#include<stdio.h>

int FCFS(){
    int n,burTime[100],wTime=0,taTime,i;  // n is Number of Processes and burTime is array holding burst Times
    float avg_wTime=0,avg_taTime; // avg_wTime is average waiting Time and avg_taTime is average turnaround Time
    printf("\n\n\nEnter number of Processes : ");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf("\nEnter Burst Time For Process %d : ", i+1);
        scanf("%d", &burTime[i]);
    }
    printf("\n\nProcess \t Burst Time \t Waiting Time \t Turnaround Time");
    for(i=0;i<n;i++){
        taTime = burTime[i]+wTime;
        printf("\n%d \t\t %d \t\t %d \t\t %d", i+1,burTime[i],wTime,taTime);

        avg_wTime += wTime;
        avg_taTime += taTime;
        wTime+= burTime[i];
        }
    printf("\nAverage waiting Time : %f ", avg_wTime/n);
    printf("\nAverage turnaround time : %f", avg_taTime/n);

}
int main(){
    int choice;

    printf("\t\t\t\t Welcome to CPU-SCH by axay47");
    printf("\n\n\nSelect Type of Scheduling\t(Using Serial Number.) ");


    printf("\n\n\n1. Preemptive\n");
    printf("2. Non-Preemptive\n\n\n");
    printf("Enter Your Option : ");
    scanf("%d",&choice);
    if(choice==1){
        printf("\n\n\nYou have selected Preemptive.");
    }
    else if(choice==2){
        printf("\n\n\nYou have selected non-Preemptive.");
    }
    else {
        printf("\n\n\nInvalid Entry...");
    }
    choice=0;

    printf("\n\n\n 1. Shortest Job First(SJF)");
    printf("\n 2. First Come First Serve(FCFS)");
    printf("\n 3. Shortest Remaining Time First(SRTF)");
    printf("\n 4. Round Robin(RR) \n\n\n");
    printf("Enter Your Option : ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\n\n\nYou have selected SJF.");
    }
    else if (choice==2)
    {
        printf("\n\n\nYou have selected FCFS.");

        FCFS();
    }
    else if (choice==3)
    {
        printf("\n\n\nYou have selected FCFS.");
    }
    else if (choice==4)
    {
        printf("\n\n\nYou have selected FCFS.");
    }
    else
    {
        printf("Invalid Entry... Please Try again.");
    }
    return 0;
}
