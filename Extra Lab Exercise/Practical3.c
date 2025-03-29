/*Write a C program that takes the marks of a student as input and displays the corresponding
 grade based on the following conditions:
 o Marks > 90: GradeA
 o Marks > 75 and <=90: GradeB
 o Marks > 50 and <=75: GradeC
 o Marks <= 50: GradeD
 Use if-else or switch statements for the decision-making process.*/
 #include<stdio.h>
 main(){
 	int m;
 	printf("Enter your marks:");
 	scanf("%d",&m);
	if(m>90){
		printf("\nGrade: A.");
	}else if(m>75 && m<=90){
		printf("\nGrade: B.");
	}else if(m>50 && m<=75){
		printf("\nGrade: C.");
	}else{
		printf("\nGrade: D.");
	}
 }
