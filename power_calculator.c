#include <stdio.h>
#include <stdlib.h>



void menu();
void somar(float valor1, float valor2);
void subtrair(float valor1, float valor2);
void multiplicar(float valor1, float valor2);
void dividir(float valor1, float valor2);
void outcome(char operation_Type[50]);

//Global var
float result;

int main() {

	menu();
	
	return 0;
}

void menu(){
	
	int option;
	float valor1, valor2;
	
	do{
		system("cls");
		printf("####============= Power Calculator ================####\n");
		printf("Select a option:\n");
		printf("\t1 - Sum\n");
		printf("\t2 - Subtraction\n");
		printf("\t3 - Multiplication\n");
		printf("\t4 - Division\n");
		printf("\t0 - Exit\n");
		scanf("%d", &option);
		
		if(option == 0){
			system("cls");
			printf("Bye, thank you for the preference!\n");
			break;
		}
		
		system("cls");
		printf("Give me the firt valor: ");
		scanf("%f", &valor1);
		printf("\nGive me the second valor: ");
		scanf("%f", &valor2);
		
		switch(option){
			case 1:
				somar(valor1, valor2);
				break;
			case 2:
				subtrair(valor1, valor2);
				break;
			case 3:
				multiplicar(valor1, valor2);
				break;
			case 4:
				dividir(valor1, valor2);
				break;
			default:
				printf("invalid option. Try again!\n");
				system("pause");
				break;
		}
		
	}while(option != 0);
}

void somar(float valor1, float valor2){
	result = valor1 + valor2;
	outcome("sum");
}

void subtrair(float valor1, float valor2){
	result = valor1 - valor2;
	outcome("subtraction");
}

void multiplicar(float valor1, float valor2){
	result = valor1 * valor2;
	outcome("multiplication");
}

void dividir(float valor1, float valor2){
	result = valor1 / valor2;
	outcome("division");
}

void outcome(char operation_Type[50]){
	printf("\nThe result of the %s operation is: %.2f \n\n", operation_Type, result);
	system("pause");
}