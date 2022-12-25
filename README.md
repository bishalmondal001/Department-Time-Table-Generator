# Project Title
### Department Time Table Generator
# Abstract
#### Lots of courses are floated in a Department of an Institute. Creating a department timetable for classes is a very hectic & daunting task. To overcome that problem, I started this project. In this project, the code takes some information as input(for example, the total number of courses; for each course: course code, Teacher code, L-T-P-C distribution). These courses can belong to different standards, and according to the standards, course codes need to be set. With this information, the code will print a Timetable of classes for five working days with respective teacher codes in the console.
#### I created this whole project in C Programming language. This project is a good application of memory management. Also, it gives good fundamental knowledge of Nested Structure with pointers, Dynamic Memory Allocation, and especially character pointers. Continuous memory allocation and class insertion are followed here as the primary class allocation method to each standard for each working hour of each working day. This class allocation is entirely random; every time we run the program, we get a different Timetable for all the same courses.
# Project Description
#### There are two folders - 1)code with input from file
                        2)code with manual input
                        
Actually in my code i am taking input of course names(as course code) and corresponding teacher name(as teacher code).
Now this is very sensitive work.

The course code has certain rule of which every character has some meaning.
It is of 4 character.
1st character : class name( "1" = UG first year, "2" = UG second year , "3" = UG third year , "4" = UG Fourth year, "M" = Masters First year, "P" = pHD First Year )
2nd character : type of course("N" = Theory class, "M" = Lab Course, "L" = Tutorial course)
3rd character : a digit between 0-9
4th character : a digit between 0-9

other than this is not applicable.


The teacher code is also have some rule.it's like every teacher has 10 char size code .It can be any type.But each teacher has one code.


Now if you want get an idea of the input type see the sample forlder.
"initial" is about N,M,L.
"Theory" contains course code of each Theory courses and corrseponding Teacher code one by one.
"Lab" contains course code of each Lab courses and corrseponding Teacher code one by one.
"Tut" course code of each Tutorial courses and corrseponding Teacher code one by one.


Now this inputs are mandatory for the code to run .


So that's why i had given two formats of code .
With "code with input from" you can run the code with input taken from a file. In that case you don't have to give inputs. Also there are two sets of inputs . 
Just change "the folder name" for accessing the sample sets .
