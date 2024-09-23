// Correção do exercicio 1

// Codigodo item a
int main() {
 int num;
 printf("Digite um número: ");
 scanf("%d", num); // Falta o '&' aqui
 if (num > 0){
 printf("Número positivo\n");
 }
 return 0;
}

// Codigo do item b
int main() {
 int num;
 printf("Digite um número: ");
 scanf("%d", &num); // Correto
 if (num >= 0); // Ponto e vírgula aqui é um erro
 printf("Número positivo\n");
 return 0;
}

 // Codigo do item c // Esse é o item correto para essa questão
int main() {
 int num;
 printf("Digite um número: ");
 scanf("%d", &num); // Correto
 if (num > 0){
 printf("Número positivo\n");
 }
 return 0;
}

// Codigo do item d
int main() {
 int num;
 printf("Digite um número: ");
 scanf("%f", &num); // Erro: tipo de dado incompatível
 if (num > 0){
 printf("Número positivo\n");
 }
 return 0;
}
