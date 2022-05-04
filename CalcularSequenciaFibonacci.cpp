

#include<stdio.h>
int calculaSeq(int n)
{
  if( n == 1)
    return (0);

  if( n == 2)
    return (1);

    int posicaoAtual = 0, posicao1 = 0, posicao2 = 1, i;

  for (i = 3; i <= n; i++)
  {
     posicaoAtual = (posicao1 + posicao2);
     posicao1 = posicao2;
     posicao2 = posicaoAtual;
  }
  return (posicaoAtual);
}

int main ()
{
  int totalposicoes;
  int i;

  printf("\nDigite a quantidade de numeros da Sequencia Fibonaci: ");
  scanf("%d%*c", &totalposicoes);

  for (i = 1; i < (totalposicoes + 1); i++){

     printf("%d ", calculaSeq(i));

  }
  getchar();
  return (0);
}
