// Correção do exercicio 2

// Codigo do item a
int main() {
 int a, b;
 float media;
 printf("Digite dois números: ");
 scanf("%d %d", &a, &b);
 media = (a + b) / 2; // Erro de divisão inteira
 printf("Média: %.2f\n", media);
 return 0;
}

// Codigo para o item b // Item correto para esse exercicio
int main() {
 int a, b;
 float media;
 printf("Digite dois números: ");
 scanf("%d %d", &a, &b);
 media = (a + b) / 2.0; // Correto
 printf("Média: %.2f\n", media);
 return 0;
}

// Codigo para o item c
int main() {
 int a, b;
 int media;
 printf("Digite dois números: ");
 scanf("%d %d", &a, &b);
 media = (a + b) / 2.0; // Erro: media é int
 printf("Média: %d\n", media);
 return 0;
}

// Codigo para o item d
int main() {
 float a, b;
 float media;
 printf("Digite dois números: ");
 scanf("%f %f", &a, &b);
 media = (a + b) / 2; // Correto, mas não é necessário usar float
 printf("Média: %.2f\n", media);
 return 0;
}
  
