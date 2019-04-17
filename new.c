
//////////// link to  github .........### https://github.com/99Rituraj/main.c ####.......................

#include<sys/wait.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{    printf(" \n\n\n                   \t\t*************************LOADING PROJECT**********************\n");
     
     sleep(1); 
    int t1=0,j;
    char p[3]={'P','Q','R'};
    int process=3,i,id[6]={2132,2102,2453}, wt[5]={0,0,0,0,0};;
    int arrival_time[5]={0,0,0},burst[5]={2,4,8},t[5];
        printf("\n\t*********************************************************************");
        printf("\n\t\tPROCESS NO\tSTUDENT ID\tARRIVAL_TIME\tBURST_TIME\n");
    for(i=0; i<process; i++)
        {
        printf("\n\t\t%c\t\t%d\t\t%d\t\t%d\n",p[i],id[i],arrival_time[i],burst[i]);
        }  
        printf("\n\t*********************************************************************");
        
      printf("\n\n\n");
      printf("                                                 GANTT CHART                                       \n"); 
      sleep(1);
      printf("  \t -----------------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<process;i++)
    {  
       while(burst[i]!=0)
       { 
          if(burst[0]>=burst[1] && burst[0]>=burst[2])
          { 
            printf(" \t |  %c ",p[0]);
           
            burst[0]--;
            wt[i]++;
            t[0]=wt[i];  
          } 
           
          if(burst[1]>=burst[0] && burst[1]>=burst[2])
          { 
            printf(" \t| %c ",p[1]);
            
            burst[1]--;
            wt[i]++;
            t[1]=wt[i];
            
          } 
          if(burst[2]>=burst[1] && burst[2]>=burst[3])
          { 
            printf(" \t | %c ",p[2]);
            
            burst[2]--;
            wt[i]++;
            t[2]=wt[i];
          } 
       }
   }  
  printf("    | \n \t -----------------------------------------------------------------------------------------------------------------\n");
   
   for(j=0;j<=14;j++)
    {printf("  \t%d   ",t1);
     t1++;
     }
   printf("\n\n\n    \t\t\t------------------------------calculations-----------------------------------\n");

 /// calculation of waiting time,turnaround time and average waiting time turnaround time;;;;;;
   
   int tat[5]={0,0,0};
    tat[0]=t[0]-arrival_time[0];
    tat[1]=t[1]-arrival_time[1];
    tat[2]=t[2]-arrival_time[2];

    int rt[5]={0,0,0};
    rt[0]=tat[0]-2;      //// waiting time=tat-brust time
    rt[1]=tat[1]-4;
    rt[2]=tat[2]-8;


    printf("\n     \t \t***********************************************************************************************");
    sleep(1);   
    printf("\n\t\tPROCESS NO\tSTUDENT ID\tARRIVAL_TIME\tCOMPLETION TIME\t WAITING TIME \t TURN AROUND TIME\n");
    for(i=0; i<process; i++)
        {
        printf("\n\t\t %c \t\t %d \t\t%d \t\t %d \t\t %d \t\t %d\n",p[i],id[i],arrival_time[i],t[i],rt[i],tat[i]);
        }  
    printf("\n      \t \t**********************************************************************************************");
        
    printf("\n\n\n");
    sleep(1);
    int avgwt,avgtat;
    avgwt=(rt[0]+rt[1]+rt[2])/3;
    avgtat=(tat[0]+tat[1]+tat[2])/3;
    printf("   AVERAGE WAITING TIME =%d\n",avgwt);
    printf("   AVERAGE TURN AROUND TIME=%d",avgtat);

    printf("\n\n\n");
}










