#include <stdio.h>

//create by 23343078_muhammad rafki

void main(){

	char grade;
	
	printf("Inputkan grade : ");
	scanf("%c", &grade);
	
	switch (toupper(grade)){
		case 'A':
			printf("Luar biasa!\n");
			break;
		case 'B':
		case 'C':
			printf("Bagus!\n");
			break;
		case 'D':
			printf("Anda lulus\n");
			break;
		case 'E':
		case 'F':
			printf("Anda remidi\n");
			break;
		default:
			printf("Grade Salah! \n");
	}
}