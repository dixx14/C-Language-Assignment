/*Write a C program that defines a structure to store a student's details(name,
 rollnumber, and marks).Use an array of structures to store details of 3
 students and print them.*/
 #include<stdio.h>
 struct Student{
	int rollno; 
	char name[20];
	float mark;
};
main(){
	struct Student s[3];
    int i;
    for(i=0;i<3;i++){
	    printf("\n Enter student's' %d rollno:",i+1);
		scanf("%d",&s[i].rollno);
		printf("\n Enter student's' %d name:",i+1);
		scanf("%s",s[i].name);
		printf("\n Enter student's' %d Marks:",i+1);
		scanf("%f",&s[i].mark);
	}
	for(i=0;i<3;i++){
		printf("\nStudent %d Name=%s\tEnroll=%d\tmark=%f",i+1,s[i].name,s[i].rollno,s[i].mark);
	}
} 
