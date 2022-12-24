#include <time.h>

struct slot{
    char *teacher_code;
    char *course_code;
    
};

struct day{
    struct slot **slot;
};

void course_allotment(struct day *d,int *L,int *M,int *N,struct course *course){
    int i,j;
    
    for(i=0;i<5;i++){
        d[i].slot = (struct slot**)malloc(8*sizeof(struct slot *));
        for(j=0;j<8;j++){
            d[i].slot[j]=(struct slot*)malloc(6*sizeof(struct slot));
			for(int k=0;k<6;k++){
				d[i].slot[j][k].teacher_code=(char*)malloc(sizeof(char));
                strcpy(d[i].slot[j][k].teacher_code,"--");
				d[i].slot[j][k].course_code=(char *)malloc(sizeof(char));
                strcpy(d[i].slot[j][k].course_code,"----");
            }
        }
	}
    srand(time(0));



    
    int n;
    for(i=0;i<(*N);i++){   
        char x = course->Theory_course[i].course_structure[0];
        n = atoi(&x);
        while(n>0){
            int a,b;
            a = ((rand())%5);
            b = ((rand())%8);
            
                
            int c,k;
                
            for(k=0;k<6;k++){
                    
                c=strcmp(course->Theory_course[i].teacher_code,d[a].slot[b][k].teacher_code);
                if(c!=0){
                    if(course->Theory_course[i].course_code[0] == '1' ){
                        strcpy(d[a].slot[b][0].course_code,course->Theory_course[i].course_code);
                        strcpy(d[a].slot[b][0].teacher_code,course->Theory_course[i].teacher_code);
                        n--;
                        break;
                    }
                    else if(course->Theory_course[i].course_code[0] == '2'){
                        strcpy(d[a].slot[b][1].course_code,course->Theory_course[i].course_code);
                        strcpy(d[a].slot[b][1].teacher_code,course->Theory_course[i].teacher_code);
                        n--;
                        break;
                    }
                    else if(course->Theory_course[i].course_code[0] == '3' ){
                        strcpy(d[a].slot[b][2].course_code,course->Theory_course[i].course_code);
                        strcpy(d[a].slot[b][2].teacher_code,course->Theory_course[i].teacher_code);
                        n--;
                        break;
                    }
                    else if(course->Theory_course[i].course_code[0] == '4' ){
                        strcpy(d[a].slot[b][3].course_code,course->Theory_course[i].course_code);
                        strcpy(d[a].slot[b][3].teacher_code,course->Theory_course[i].teacher_code);
                        n--;
                        break;
                    }
                        
                    else if(course->Theory_course[i].course_code[0] == 'M' ){
                        strcpy(d[a].slot[b][4].course_code,course->Theory_course[i].course_code);
                        strcpy(d[a].slot[b][4].teacher_code,course->Theory_course[i].teacher_code);
                        n--;
                        break;
                    }
                    else if(course->Theory_course[i].course_code[0] == 'P' ){
                        strcpy(d[a].slot[b][5].course_code,course->Theory_course[i].course_code);
                        strcpy(d[a].slot[b][5].teacher_code,course->Theory_course[i].teacher_code);
                        n--;
                        break;
                    }
                        
                }
                     

                
                
            }

            

        }
        
		
    }

    int l;
    for(i=0;i<(*L);i++)
    {
		l=i;
        while(l==i){
            int a,b;
            a = ((rand())%5);
            b = ((rand())%8);
            
                
            int c,k;
            char t;
            t = 'T';
            for(k=0;k<6;k++){
                c=strcmp(course->Tut_course[i].teacher_code,d[a].slot[b][k].teacher_code);
                if(c!=0){
                    if(course->Tut_course[i].course_code[0] == '1' ){
                        strcpy(d[a].slot[b][0].course_code,course->Tut_course[i].course_code);
                        strncat(d[a].slot[b][0].course_code,&t,1);
                        strcpy(d[a].slot[b][0].teacher_code,course->Tut_course[i].teacher_code);
                        l++;
                        break;
                    }
                    else if(course->Tut_course[i].course_code[0] == '2' ){
                        strcpy(d[a].slot[b][1].course_code,course->Tut_course[i].course_code);
                        strncat(d[a].slot[b][1].course_code,&t,1);
                        strcpy(d[a].slot[b][1].teacher_code,course->Tut_course[i].teacher_code);
                        l++;
                        break;
                    }
                    else if(course->Tut_course[i].course_code[0] == '3' ){
                        strcpy(d[a].slot[b][2].course_code,course->Tut_course[i].course_code);
                        strncat(d[a].slot[b][2].course_code,&t,1);
                        strcpy(d[a].slot[b][2].teacher_code,course->Tut_course[i].teacher_code);
                        l++;
                        break;
                    }
                    else if(course->Tut_course[i].course_code[0] == '4' ){
                        strcpy(d[a].slot[b][3].course_code,course->Tut_course[i].course_code);
                        strncat(d[a].slot[b][3].course_code,&t,1);
                        strcpy(d[a].slot[b][3].teacher_code,course->Tut_course[i].teacher_code);
                        l++;
                        break;
                    }
                    
                    else if(course->Tut_course[i].course_code[0] == 'M' ){
                        strcpy(d[a].slot[b][4].course_code,course->Tut_course[i].course_code);
                        strncat(d[a].slot[b][4].course_code,&t,1);
                        strcpy(d[a].slot[b][4].teacher_code,course->Tut_course[i].teacher_code);
                        l++;
                        break;
                    }
                    else if(course->Tut_course[i].course_code[0] == 'P' ){
                        strcpy(d[a].slot[b][5].course_code,course->Tut_course[i].course_code);
                        strncat(d[a].slot[b][5].course_code,&t,1);
                        strcpy(d[a].slot[b][5].teacher_code,course->Tut_course[i].teacher_code);
                        l++;
                        break;
                    }
                    
                }
            }

            

        }
    }
    int m;
    for(i=0;i<(*M);i++)
    {
		m=i;
        while(m==i){
            int a,b;
            a = (rand() % (4-0+1)+0);
			do{
            	b = (rand() % (7-0+1)+0);
			}while(!(b>=0 && b<2) && !(b>3 && b<6));
            int c,k;
            char t;
            t = 'L';
            for(k=0;k<6;k++){
                c=strcmp(course->Lab_course[i].teacher_code,d[a].slot[b][k].teacher_code);
                if(c!=0){
                    if(course->Lab_course[i].course_code[0] == '1' ){
                        strcpy(d[a].slot[b][0].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b][0].course_code,&t,1);
                        strcpy(d[a].slot[b][0].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+1][0].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+1][0].course_code,&t,1);
                        strcpy(d[a].slot[b+1][0].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+2][0].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+2][0].course_code,&t,1);
                        strcpy(d[a].slot[b+2][0].teacher_code,course->Lab_course[i].teacher_code);
                        m++;
                        break;
                    }
                    else if(course->Lab_course[i].course_code[0] == '2' ){
                        strcpy(d[a].slot[b][1].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b][1].course_code,&t,1);
                        strcpy(d[a].slot[b][1].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+1][1].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+1][1].course_code,&t,1);
                        strcpy(d[a].slot[b+1][1].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+2][1].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+2][1].course_code,&t,1);
                        strcpy(d[a].slot[b+2][1].teacher_code,course->Lab_course[i].teacher_code);
                        m++;
                        break;
                    }
                    else if(course->Lab_course[i].course_code[0] == '3' ){
                        strcpy(d[a].slot[b][2].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b][2].course_code,&t,1);
                        strcpy(d[a].slot[b][2].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+1][2].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+1][2].course_code,&t,1);
                        strcpy(d[a].slot[b+1][2].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+2][2].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+2][2].course_code,&t,1);
                        strcpy(d[a].slot[b+2][2].teacher_code,course->Lab_course[i].teacher_code);
                        m++;
                        break;
                    }
                    else if(course->Lab_course[i].course_code[0] == '4' ){
                        strcpy(d[a].slot[b][3].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b][3].course_code,&t,1);
                        strcpy(d[a].slot[b][3].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+1][3].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+1][3].course_code,&t,1);
                        strcpy(d[a].slot[b+1][3].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+2][3].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+2][3].course_code,&t,1);
                        strcpy(d[a].slot[b+2][3].teacher_code,course->Lab_course[i].teacher_code);
                        m++;
                        break;
                    }
                    else if(course->Lab_course[i].course_code[0] =='M' ){
                        strcpy(d[a].slot[b][4].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b][4].course_code,&t,1);
                        strcpy(d[a].slot[b][4].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+1][4].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+1][4].course_code,&t,1);
                        strcpy(d[a].slot[b+1][4].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+2][4].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+2][4].course_code,&t,1);
                        strcpy(d[a].slot[b+2][4].teacher_code,course->Lab_course[i].teacher_code);
                        m++;
                        break;
                    }
                    else if(course->Lab_course[i].course_code[0] == 'P' ){
                        strcpy(d[a].slot[b][5].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b][5].course_code,&t,1);
                        strcpy(d[a].slot[b][5].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+1][5].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+1][5].course_code,&t,1);
                        strcpy(d[a].slot[b+1][5].teacher_code,course->Lab_course[i].teacher_code);

                        strcpy(d[a].slot[b+2][5].course_code,course->Lab_course[i].course_code);
                        strncat(d[a].slot[b+2][5].course_code,&t,1);
                        strcpy(d[a].slot[b+2][5].teacher_code,course->Lab_course[i].teacher_code);
                        m++;
                        break;
                    }
                    
                }

            }

        }
    }

}
