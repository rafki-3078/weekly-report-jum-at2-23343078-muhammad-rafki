#include <stdio.h>

// Created by 23343078_Muhammad Rafki

int sum(int n);

void main(){
	
	int number, result;
	
	printf("enter a positive interger : ");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("sum = %d", result);
	
}

int sum(int num) {
	if (num != 0)
		return num +sum(num-1);
	else 
		return num;
}