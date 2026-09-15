# include <stdio.h>
#include <math.h>


int main (){
	float n1;
	float n2;
	float soma, media;
	printf("Digite a primeira nota? ");
	scanf("%f", &n1);
	printf("Digite a segunda nota? ");
	scanf("%f" , &n2);
	
	soma = n1 + n2;
	media = soma /2; 
	
	
	if(media >=6 ){
		printf("Parabens, voce passou com a media %.2f\n",media);
	} else {
		printf("Que pena! pode estudar mais para ir melhor, sua media foi %.2f\n ", &media);
	}
	return 0;
}
