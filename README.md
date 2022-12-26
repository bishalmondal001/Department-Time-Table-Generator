# Project Title
### Department Time Table Generator
# Abstract
#### Lots of courses are floated in a Department of an Institute. Creating a department timetable for classes is a very hectic & daunting task. To overcome that problem, I started this project. In this project, the code takes some information as input(for example, the total number of courses; for each course: course code, Teacher code, L-T-P-C distribution). These courses can belong to different standards, and according to the standards, course codes need to be set. With this information, the code will print a Timetable of classes for five working days with respective teacher codes in the console.

# Project Description
#### I created this whole project in C Programming language. This project is a good application of memory management. Also, it gives good fundamental knowledge of Nested Structure with pointers, Dynamic Memory Allocation, and especially character pointers. Continuous memory allocation and class insertion are followed here as the primary class allocation method to each standard for each working hour of each working day. This class allocation is entirely random; every time we run the program, we get a different Timetable for all the same courses.
- Some genral rules-
  1.	Every lecture is of ONE hour.
  2.	Lectures begin at 8.00AM and ends at 6.00PM from Monday to Friday.
  3.	12.00PM to 2.00PM is the lunch time.
  4.  TIME TABLE generator for "N" theory courses, "M" Lab Classes and "L" Tutorials for the UG (all four years) and PG+PhD (first year only) students.
  5.  Here "L < N". 
  6.  There are "P" faculty members, where "P = N/2". 

The first task is to take info of the courses floated in the department as input.Here I am first taking total number of courses and after that for each course:it's code, Teacher code, L-T-P-C structure('L':Total number of theory lectures,'T':Number of tutorials ,'P':number of lab classes,'C':Total credits).All the iputs I am taking through text files.I had uploaded two sample inputs.You can view that in this two folders **[sample1](https://github.com/insaneoptimizer001/Department-Time-Table-Generator/tree/main/sample1)** & **[sample2](https://github.com/insaneoptimizer001/Department-Time-Table-Generator/tree/main/sample2)** .Each of this folders have two text files **initial.txt** && **courses.txt** .Former has total number courses & Later has course details.In **courses.txt** for each course we have 3 lines of information.

- 1st line : course code
- 2nd line : teacher code
- 3rd line : L-T-P-C structure

                        
Actually in my code i am taking input of course names(as course code) and corresponding teacher name(as teacher code).Now this is very sensitive work.The course code has certain rule of which every character has some meaning.

**It is of 4 character.**
- 1st character : class name
  - "1" = UG first year
  - "2" = UG second year 
  - "3" = UG third year 
  - "4" = UG Fourth year
  - "M" = Masters First year
  - "P" = PHD First Year 
- 2nd character : Any character to represent department
- 3rd character : a digit between 0-9
- 4th character : a digit between 0-9

**Other than this is not acceptable.**
Each teacher has unique code.

We are taking this raw input through **get_course()** function and also using the idea of clustering getting P.The definition of this function is given in **[input.h](https://github.com/insaneoptimizer001/Department-Time-Table-Generator/blob/main/input.h)**.After taking all this information I am saving them in **all_courses** structure.

After this with **processing()** function I am first getting N,L,M and then separating them into **Theory_courses**,**Tutorial_courses**,**Lab_courses**.The definition of this function is in **[process.h](https://github.com/insaneoptimizer001/Department-Time-Table-Generator/blob/main/Process.h)**.

Now we are allocating slots.We have 5 days.Every day has 8 slots and each slot has 6 classes.With **allocate()** function, I am allocating the required classes for each courses to different slots randomly.The definition of the funtion is given in **[allocate.h](https://github.com/insaneoptimizer001/Department-Time-Table-Generator/blob/main/allocate.h)**.

In the end printing the the information of each slot as a timetable.
