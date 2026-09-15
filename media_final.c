#include <stdio.h>

int main (){
	
	
	float n1, n2;
	float m, f;
	 
	printf("Digite a media final do aluno: ");
	scanf("%f", &m);
	
	printf("Digite a porcentagem da fequencia do aluno: ");
	scanf("%f",&f);
	
	if(f <75.0){
		printf("Reprovado por falta\n");
	}else if (m <6){
		printf("Reprovado por nota\n");
	} else {
		printf("Aprovado!!! :]");
	}
	
	return 0;
}
