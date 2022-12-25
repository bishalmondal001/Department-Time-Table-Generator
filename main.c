#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"input.h"
#include"Process.h"
#include "allocate.h"

void main(){
    FILE *ptr = fopen("./sample2/initial.txt","r");
    FILE *ptr1 = fopen("./sample2/courses.txt","r");
    int *T= (int*)malloc(sizeof(int));
    fscanf(ptr,"%d",T);
    struct course *course=(struct course*)malloc(sizeof(struct course));

    int *N,*L,*M,*P;
	N=(int*)malloc(sizeof(int));
	L=(int*)malloc(sizeof(int));
	M=(int*)malloc(sizeof(int));
	P=(int*)calloc(1,sizeof(int));

    get_course(T,course,ptr1,P);
    processing(T,N,M,L,course);
    

    if(*P != (*N/2)){
        printf("\nThe condition P=(N/2) is not satisfied");
        exit(0);
    }
    

    struct day *d = (struct day*)malloc(5*sizeof(struct day));

    course_allotment(d,L,M,N,course);
    

    int i,j,k;
    for(i=0;i<5;i++){
        if(i==0){
            printf("\n------------------------------------------------------------------[schedule for Monday]----------------------------------------------------------\n");
        }
        else if(i==1){
            printf("\n------------------------------------------------------------------[schedule for Tuesday]----------------------------------------------------------\n");
        }
        else if(i==2){
            printf("\n------------------------------------------------------------------[schedule for Wednesday]-----------------------------------------------------------\n");
        }
        else if(i==3){
            printf("\n------------------------------------------------------------------[schedule for Thursday]----------------------------------------------------------\n");
        }
        else if(i==4){
            printf("\n------------------------------------------------------------------[schedule for Friday]-----------------------------------------------------------\n");
        }
        printf("\n   CLASS\t     8:00AM-8:55AM   9:00AM-9:55AM   10:00AM-10:55AM   11:00AM-11:55AM   2:00PM-2:55PM    3:00PM-3:55PM    4:00AM-4:55AM    5:00AM-5:55PM\n");
        for(k=0;k<6;k++){
            if(k==0){
                printf("UG First Year      :");
            }
            else if(k==1){
                printf("UG Second Year     :");
            }
            else if(k==2){
                printf("UG Third Year      :");
            }
            else if(k==3){
                printf("UG Fourth Year     :");
            }
            else if(k==4){
                printf("Masters First Year :");
            }
            else if(k==5){
                printf("PHD First Year     :");
            }
            
            for(j=0;j<8;j++){                
                    if(j==0){
                        printf("   %s",d[i].slot[j][k].course_code);
                        printf("(%s)         ",d[i].slot[j][k].teacher_code);
                    }
                    else{
                        printf("%s",d[i].slot[j][k].course_code);
                        printf("(%s)         ",d[i].slot[j][k].teacher_code);
                    }
                    
                
                
                }
            printf("\n\n");  
            }
        printf("\n");   
        }
        
}
