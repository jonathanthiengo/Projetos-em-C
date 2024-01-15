/*1. Faça um programa que pede um nome do usuário e exibe ele somente se a primeira letra do nome for ‘a’ (maiúscula ou minúscula).*/

#include <stdio.h>
#include <string.h>
#define TAM 100
#define gets(a) fgets(a,sizeof(a),stdin);  a[strcspn(a, "\n")] = '\0';

int main(void){
 int i;
 char nome[TAM];
 
 printf("Digite seu Nome: ");
 gets(nome);
 int tam = strlen(nome);

 for(i=0;i<tam;i++){
   if((nome[0] == 'a') || (nome[0] == 'A')){
     printf("%s",nome);
    break;
   }
 }


  return 0;
}