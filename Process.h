void processing(int *T,int *N,int *M,int *L,struct course *course){
    int i;
    
    for(i=0;i<(*T);i++){      
        if((course->all_course[i].course_structure[0]!= '0') && (course->all_course[i].course_structure[1] == '0') && (course->all_course[i].course_structure[2] == '0')){

            (*N)++;
            
            
        }
        else if((course->all_course[i].course_structure[0]!= '0') && (course->all_course[i].course_structure[1] != '0') && (course->all_course[i].course_structure[2] == '0')){
            
            (*N)++;
            (*L)++;
            
        }
        else if((course->all_course[i].course_structure[0]!= '0') && (course->all_course[i].course_structure[1] != '0') && (course->all_course[i].course_structure[2] != '0')){
            

            (*N)++;
            (*L)++;
            (*M)++;
         
        }
        else if((course->all_course[i].course_structure[0]!= '0') && (course->all_course[i].course_structure[1] == '0') && (course->all_course[i].course_structure[2] != '0')){
          
            (*N)++;
            (*M)++;
          
        }
        else if((course->all_course[i].course_structure[0]== '0') && (course->all_course[i].course_structure[1] == '0') && (course->all_course[i].course_structure[2] != '0')){
           
           
            (*M)++;
            
        }
    }

    course->Theory_course = (struct course_details*)malloc((*N)*sizeof(struct course_details));
    course->Tut_course = (struct course_details*)malloc((*L)*sizeof(struct course_details));
    course->Lab_course = (struct course_details*)malloc((*M)*sizeof(struct course_details));
    int j=0,k=0,l=0;
    for(i=0;i<(*T);i++){   
           
        if((course->all_course[i].course_structure[0]!= '0') && (course->all_course[i].course_structure[1] == '0') && (course->all_course[i].course_structure[2] == '0')){
            
            
            course->Theory_course[k].course_code = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].course_code,course->all_course[i].course_code);
            course->Theory_course[k].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].course_structure,course->all_course[i].course_structure);
            course->Theory_course[k].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].teacher_code,course->all_course[i].teacher_code);
            k++;
            
            
            
            
        }
        
        else if((course->all_course[i].course_structure[0]!= '0') && (course->all_course[i].course_structure[1] != '0') && (course->all_course[i].course_structure[2] == '0')){
            
            
            course->Theory_course[k].course_code = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].course_code,course->all_course[i].course_code);
            course->Theory_course[k].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].course_structure,course->all_course[i].course_structure);
            course->Theory_course[k].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].teacher_code,course->all_course[i].teacher_code);
            
            
            course->Tut_course[j].course_code = (char*)malloc(4*sizeof(char));
            strcpy(course->Tut_course[j].course_code,course->all_course[i].course_code);
            course->Tut_course[j].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Tut_course[j].course_structure,course->all_course[i].course_structure);
            course->Tut_course[j].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Tut_course[j].teacher_code,course->all_course[i].teacher_code);
            k++;
            j++;
            
        }
        
        else if((course->all_course[i].course_structure[0]!= '0') && (course->all_course[i].course_structure[1] != '0') && (course->all_course[i].course_structure[2] != '0')){
            
            course->Theory_course[k].course_code = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].course_code,course->all_course[i].course_code);
            course->Theory_course[k].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].course_structure,course->all_course[i].course_structure);
            course->Theory_course[k].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].teacher_code,course->all_course[i].teacher_code);
            
            course->Tut_course[j].course_code= (char*)malloc(sizeof(char));
            strcpy(course->Tut_course[j].course_code,course->all_course[i].course_code);
            course->Tut_course[j].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Tut_course[j].course_structure,course->all_course[i].course_structure);
            course->Tut_course[j].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Tut_course[j].teacher_code,course->all_course[i].teacher_code);
            
            course->Lab_course[l].course_code = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].course_code,course->all_course[i].course_code);
            course->Lab_course[l].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].course_structure,course->all_course[i].course_structure);
            course->Lab_course[l].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].teacher_code,course->all_course[i].teacher_code);
            k++;
            j++;
            l++;
        }
        else if((course->all_course[i].course_structure[0]!= '0') && (course->all_course[i].course_structure[1] == '0') && (course->all_course[i].course_structure[2] != '0')){
            
            course->Theory_course[k].course_code = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].course_code,course->all_course[i].course_code);
            course->Theory_course[k].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].course_structure,course->all_course[i].course_structure);
            course->Theory_course[k].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Theory_course[k].teacher_code,course->all_course[i].teacher_code);
            
            course->Lab_course[l].course_code = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].course_code,course->all_course[i].course_code);
            course->Lab_course[l].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].course_structure,course->all_course[i].course_structure);
            course->Lab_course[l].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].teacher_code,course->all_course[i].teacher_code);
            k++;
            l++;
        }
        else if((course->all_course[i].course_structure[0]== '0') && (course->all_course[i].course_structure[1] == '0') && (course->all_course[i].course_structure[2] != '0')){
            
            course->Lab_course[l].course_code = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].course_code,course->all_course[i].course_code);
            course->Lab_course[l].course_structure = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].course_structure,course->all_course[i].course_structure);
            course->Lab_course[l].teacher_code = (char*)malloc(sizeof(char));
            strcpy(course->Lab_course[l].teacher_code,course->all_course[i].teacher_code);
            
            l++;
        }
        
    }
    
    
}


