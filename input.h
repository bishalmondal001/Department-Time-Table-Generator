struct course_details {
    char *course_code;
    char *course_structure;
    char *teacher_code;
};

struct course{
    struct course_details *all_course;
    struct course_details *Theory_course;
    struct course_details *Lab_course;
    struct course_details *Tut_course;

};

void get_course(int *T,struct course *course,FILE *ptr1,int *P){
    course->all_course = (struct course_details*)malloc((*T)*sizeof(struct course_details));
    int i,j;
    for(i=0;i<(*T);i++){
        course->all_course[i].course_code = (char*)malloc(sizeof(char));
        fscanf(ptr1,"%s",course->all_course[i].course_code);
//here as all_course is an pointer to an 2D array.
//That's why we have to use '.' operator just like for pointer to multidimensional array we use '*' to get to that particular 1D array.
        course->all_course[i].course_structure =(char*)malloc(sizeof(char));
        fscanf(ptr1,"%s",course->all_course[i].course_structure);

        course->all_course[i].teacher_code = (char*)malloc(10*sizeof(char));
        fscanf(ptr1,"%s",course->all_course[i].teacher_code);

        int flag=1;
		for(j=0;j<i;j++){
            int a;
            a = strcmp(course->all_course[i].teacher_code,course->all_course[j].teacher_code);
            if(a==0){
                flag=0;
				break;
            }
        }
		if(flag)
			*P=(*P)+1;
    }
}