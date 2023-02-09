/*Comments
Use functions to avoid duplicating code. Copy-paste coding means copy-pasting bugs and multiplying debugging and modification effort. Concept: Single point of maintenance. If you have to debug or modify, you want one place to do it. How do you tell whether duplicated code should be turned into a function? Move duplicated code into a function if: The code is non-trivial - getting a single point of maintenance is likely to be worthwhile. What the code does can be separated from the context - you can write a function with simple parameters and return value that does the work for each place the duplicated code appears. The result is less total code with the complexity appearing only in a single place - the function - giving a single point of maintenance.*/

/* Programa para criptografar e descriptografar
o primeiro nome e o sobrenome de uma pessoa, sendo que
ambos podem ser nomes compostos */

#include <stdio.h>

const char LF = 10; // caracter de fim de linha (Line Feed)

int main()
{
    const int MAX_LETRAS = 9;
    const int TAMANHO_BUFFER = MAX_LETRAS + 1;
    const int NOME_SHIFT = 1;
    const int SOBRENOME_SHIFT = 2;
    char Primeiro_Nome[TAMANHO_BUFFER];
    char Sobrenome[TAMANHO_BUFFER];
    int i, Nao_fim_linha;

    // LEITURA DO PRIMEIRO NOME:
    printf("Digite o primeiro nome e tecle ENTER: ");
    i = 0;
    Nao_fim_linha = 1;
  
    while (i < MAX_LETRAS && Nao_fim_linha){ 
      char c = getchar();
      if (c == LF) { // verifica se é fim de linha
        Nao_fim_linha = 0;
      }
      else {
        Primeiro_Nome[i] = c;
        i ++;
      }
    }
    Primeiro_Nome[i] = '\0'; // termina a string
  
    while (Nao_fim_linha) { // descarta tudo até o fim da linha
      char c = getchar();
      if (c == LF) { // verifica se é fim de linha
      Nao_fim_linha = 0;
      }
    }
    printf("Primeiro nome armazenado: %s\n", Primeiro_Nome);

    // LEITURA DO SOBRENOME:
    printf("Digite o sobrenome e tecle ENTER: ");
    i = 0;
    Nao_fim_linha = 1;
  
    while (i < MAX_LETRAS && Nao_fim_linha) {
      char c = getchar();
      if (c == LF) {
        Nao_fim_linha = 0;
      }
      else {
        Sobrenome[i] = c;
        i ++;
      }
    }
    Sobrenome[i] = '\0'; // termina a string
  
    while (Nao_fim_linha) { // descarta tudo até o fim da linha
      char c = getchar();
      if (c == LF) {
        Nao_fim_linha = 0;
      }
    }
    printf("Sobrenome armazenado: %s\n", Sobrenome);

    // CRIPTOGRAFIA DO PRIMEIRO NOME:
    char Nome_criptografado[TAMANHO_BUFFER];
    i = 0;
  
    while (Primeiro_Nome[i]) { // enquanto não for da string
      Nome_criptografado[i] = Primeiro_Nome[i] + NOME_SHIFT; // criptografa o caracter
      i ++;
    } 
    Nome_criptografado[i] = '\0'; // termina a string
    
    // CRIPTOGRAFIA DO SOBRENOME:
    char Sobrenome_criptografado[TAMANHO_BUFFER];
    i = 0;
  
    while (Sobrenome[i]) { // enquanto não for fim da string
      Sobrenome_criptografado[i] = Sobrenome[i] + SOBRENOME_SHIFT; // criptografa o caracter
      i ++;
    } 
    Sobrenome_criptografado[i] = '\0'; // termina a string
    
    // RESULTADOS DA CRIPTOGRAFIA:
    printf("Primeiro nome criptografado: %s\n", Nome_criptografado);
    printf("Sobrenome criptografado: %s\n", Sobrenome_criptografado);

    // DESCRIPTOGRAFIA DO PRIMEIRO NOME:
    char Nome_descriptografado[TAMANHO_BUFFER];
    i = 0;

    while (Nome_criptografado[i]) { // enquanto não for fim da string
      Nome_descriptografado[i] = Nome_criptografado[i] - NOME_SHIFT; // descriptografa o caracter
      i ++;
    }
    Nome_descriptografado[i] = '\0'; // termina a string
    
    // DESCRIPTOGRAFIA DO SOBRENOME:
    char Sobrenome_descriptografado[TAMANHO_BUFFER];
    i = 0;
  
    while (Sobrenome_criptografado[i]) { // enquanto não for fim da string
      Sobrenome_descriptografado[i] = Sobrenome_criptografado[i] - SOBRENOME_SHIFT; // descriptografa o caracter
      i ++;
    }
    Sobrenome_descriptografado[i] = '\0'; // termina a string

    // RESULTADOS DA DESCRIPTOGRAFIA:
    printf("Primeiro nome descriptografado: %s\n", Nome_descriptografado);
    printf("Sobrenome descriptografado: %s\n", Sobrenome_descriptografado);

    return 0;
}