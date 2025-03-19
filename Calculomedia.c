#include <stdio.h>

int main () {

float    nota1, nota2 ,nota3;
float media;

printf ("Programa de Calculo da média da classe \n");

printf ("Aluno 01, digite a sua nota: \n");
scanf ("%.2f", &nota1);

printf ("Aluno 02, digite a sua nota: \n");
scanf ("%f", &nota2);

printf ("Aluno 03, digite a sua nota: \n");
scanf ("%f", &nota3);

media = (nota1 + nota2 + nota3) / 3;

printf ("A média da classe é: %f");

return 0;











}