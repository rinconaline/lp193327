/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Aline Mariano Rincon
Linguagem   : C
Programa    : https://judge.beecrowd.com/en/problems/view/1241
Data        : 05/05/2026
Objetivo    : Verificar se o B é igual aos últimos caracteres de A.
Aprendizado : Utilizar elementos que analisam a string. (strcmp, strlen).
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main()
{
   int n, tamA, tamB;
   char A[1001];
   char B[1001];
   
   scanf("%d", &n);
   for (int i=0; i<n; i++){
      scanf("%s %s", &A, &B);
      
      tamA = strlen(A);
      tamB = strlen(B);
      
      if (tamA<tamB){
          printf("não encaixa\n");
      } else {
          if (strcmp(&A[tamA-tamB], B )== 0){
              printf("encaixa\n");
          } else {
              printf("não encaixa\n");
          }
      }
   }
    return 0;
}
