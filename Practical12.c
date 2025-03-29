/*Write a C program to create a file, write a string into it, close the file,then
 open the file again to read and display its contents.*/
 #include<stdio.h>
 main(){
 	FILE *f;
 	f=fopen("data.txt","w");
 	if(f==NULL){
 		printf("Error");
	}else{
		fprintf(f,"Hello, I am Dixanti Tundiwala");
		fclose(f);
	}
 }
