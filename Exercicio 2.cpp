#include <stdio.h>
#include <string.h>

main () {
	char nome[256];
	int telefone,
		dia,
		ano,
		mes;
		
	printf("Digite o seu nome: ");
	fgets(nome, sizeof(nome), stdin);
	strtok(nome, "\n");
	printf("Digite o dia do seu aniversario: ");
	scanf("%d",&dia);
	printf("Digite o mes do seu aniversario: ");
	scanf("%d",&mes);
	printf("Digite o ano em que voce nasceu: ");
	scanf("%d",&ano);
	printf("Digite seu numero de telefone: ");
	scanf("%d",&telefone);
	printf("%s, voce nasceu em %d / %d / %d ", nome, dia, mes, ano);
	printf("e seu telefone e %d", telefone);
	return 0;
}
