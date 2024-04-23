//Gabriel Xavier Domingues
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
 char str1[30], str2[30];

 printf("Digite uma senha: ");
 gets(str1);
 fflush(stdin);
 printf("Confirme sua senha: ");
 gets(str2);
 fflush(stdin);

 if(strcmp(str1, str2) == 0)
   printf("As senhas conferem\n");
 else
   printf("As frases não conferem\n");

 return 0;
}
