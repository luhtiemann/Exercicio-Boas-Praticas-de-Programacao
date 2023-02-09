/*
//EX1
#include <stdio.h>
int main()
{
    const char letra = 'H'; // letra a ser impressa
    const int vezes = 10; // número de vezes que a letra deve ser impressa

    for (int i = 1; i <= vezes; i++)
        putchar(letra);
    putchar('\n');

    int valor = vezes; // valor a ser impresso
    while (valor > 0){
        printf("%d ", valor);
        valor--;
    }
    putchar('\n');
    return 0;
}

//EX2
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); //Habilita a acentuação para o português

    char nomePaciente[20]; // Nome do paciente
    puts("Digite o seu nome: ");
    scanf("%s", nomePaciente);

    int idade = 0; // Idade do paciente com variavel idade
    puts("Digite a sua idade: ");
    scanf("%d", &idade);
    
    printf("%s, você tem %d anos.\n", nomePaciente, idade);
    return 0;
}

//EX3
#include <stdio.h>
int main()
{
    float operando1, operando2; // operandos
    double resultado = 0; // resultado da operação
    char operador; // operador na forma de caracter
    puts("Digite o primeiro operando: ");
    scanf("%f", &operando1);
    puts("Digite o segundo operando: ");
    scanf("%f", &operando2);
    getchar();
    puts("Digite um operador (+, -, *, /): ");
    operador = getchar();
    switch(operador){
      case'+': resultado = operando1 + operando2;
      break;
      case'-': resultado = operando1 - operando2;
      break;
      case'*': resultado = operando1 * operando2;
      break;
      case'/': resultado = operando1 / operando2;
      break;
      default: puts("Operador inválido");
    }
    printf("Resultado = %.2f\n", resultado);
    return 0;
} 


//EX4
#include <stdio.h>

int main()
{
    double x = 1234567890.123; //primeriro numero a ser comparado
    double y = 12345.123; //segundo numero a ser comparado
    double a = x/y; //operacao para conferir se os numeros sao igual
    double b = x/y; //operacao para conferir se os numeros sao iguais

    if (a == b)
        puts("iguais");
    else
        puts("diferentes");
    printf("%.10f \n%.10f\n", a, b);
    return 0;
}

//EX5 *VER O D,RED E X
// Programa para calcular as raízes de uma equação de segundo grau

#include <math.h>
#include <stdio.h>

int main() {
  float Valor_A, Valor_B, Valor_C;
  puts("Digite o valor A: ");
  scanf("%f", &Valor_A);
  puts("Digite o valor B: ");
  scanf("%f", &Valor_B);
  puts("Digite o valor C: ");
  scanf("%f", &Valor_C);
  float Valor_D = pow(Valor_B, 2) - 4 * Valor_A * Valor_C;
  printf("%f\n", Valor_D);

  if (Valor_D < 0) {
    puts("Nao existe raiz!");
  } else if (Valor_D == 0) {
    puts("Existe uma raiz:");
    float resultado_Umaraiz = -Valor_B / (2 * Valor_A);
    printf("%f\n", resultado_Umaraiz);
  } else {
    puts("Existem duas raizes:");
    float raiz_Valor_D = pow(Valor_D, 0.5);
    float resultado = (-Valor_B + raiz_Valor_D) / (2 * Valor_A);
    printf("%f\n", resultado);
    resultado = (-Valor_B - raiz_Valor_D) / (2 * Valor_A);
    printf("%f\n", resultado);
  }
  return 0;
}

//EX6 * Ver se meses e uma variável global
#include <stdio.h>

// MESES DO ANO
const int JANEIRO = 0;
const int FEVEREIRO = 1;
const int MARCO = 2;
const int ABRIL = 3;
const int MAIO = 4;
const int JUNHO = 5;
const int JULHO = 6;
const int AGOSTO = 7;
const int OUTUBRO = 9;
const int NOVEMBRO = 10;
const int DEZEMBRO = 11;

// DIAS DA SEMANA
const int SEGUNDA = 0; // segunda-feira
const int TERCA = 1;   // terça-feira
const int QUARTA = 2;  // quarta-feira
const int QUINTA = 3;  // quinta-feira
const int SEXTA = 4;   // sexta-feira
const int SABADO = 5;  // sábado
const int DOMINGO = 6; // domingo

char *meses[] = {"Janeiro",  "Fevereiro", "Março",    "Abril",
                 "Maio",     "Junho",     "Julho",    "Agosto",
                 "Setembro", "Outubro",   "Novembro", "Dezembro"};

char *dias_da_semana[] = {"Segunda-feira", "Terça-feira", "Quarta-feira",
                          "Quinta-feira",  "Sexta-feira", "Sábado",
                          "Domingo"};

int main() {
  // SELEÇÃO DO MÊS DO ANO:
  puts("Meses do ano: ");

  for (int m = JANEIRO; m <= DEZEMBRO; m++) {
    printf("\t(%2d) %s\n", m, meses[m]);
  }

  int mes_Selecionado;
  puts("Selecione um mês pelo seu número: ");
  scanf("%d", &mes_Selecionado);
  printf("Mês selecionado: %s\n", meses[mes_Selecionado]);

  // SELEÇÃO DO DIA DA SEMANA:
  putchar('\n');
  puts("Dias da semana: ");

  for (int d = SEGUNDA; d <= DOMINGO; d++) {
    printf("\t(%2d) %s\n", d, dias_da_semana[d]);
  }

  int dia_Selecionado;
  puts("Selecione um dia pelo seu número: ");
  scanf("%d", &dia_Selecionado);
  printf("Dia selecionado: %s\n", dias_da_semana[dia_Selecionado]);

  // TOMADA DE DECISÃO:
  putchar('\n');

  if (mes_Selecionado == JANEIRO || dia_Selecionado == DOMINGO) {
    puts("Descansar!\n");
  } else {
    puts("Trabalhar!\n");
  }

  return 0;
}

//EX7 *
#include <stdio.h>

int main() {
  char Letras[10];
  int i = 0;

  puts("Digite 10 letras:");

  for (int i = 0; i < 10; i++) {
    printf("letra %d: ", i + 1);
    Letras[i] = getchar();
    getchar(); // Digite ENTER para pular o Char
  }

  puts("As 10 letras digitadas foram:");

  while (i < 10) {
    putchar(Letras[i]);
    i++;
  }
  putchar('\n');

  puts("Digite uma sequência de, no máximo, 9 letras:");
  scanf("%s", Letras);
  printf("Sequência digitada: %s", Letras);
  putchar('\n');
}

//EX8 *
#include <stdio.h>

// Variáveis globais:
double Salario_bruto;
double Total_descontos;
double Salario_liquido;

// Função para calcular o salário líquido do funcionário:
void calcular_salario_liquido() {
  Salario_liquido = Salario_bruto - Total_descontos;
}

// Função principal:
int main() {
  puts("Digite o salário bruto:");
  scanf("%lf", &Salario_bruto);
  puts("Digite o total de descontos:");
  scanf("%lf", &Total_descontos);
  calcular_salario_liquido(); // Chamada da função
  printf("O salário líquido é %.2f\n", Salario_liquido);
  return 0;
}

//EX9 *
#include <stdio.h>

int main() {
  const char PROMPT[] = "Digite o valor da conta %d: ";
  double Total = 0;
  int numero_de_Contas;

  printf("Digite o número de contas: ");
  scanf("%d", &numero_de_Contas);

  for (int i = 1; i <= numero_de_Contas; i++) {
    printf(PROMPT, i);
    double valor;
    scanf("%lf", &valor);
    Total = Total + valor;
  }

  double valor_Medio = Total / numero_de_Contas;

  printf("Valor total = %.2lf\n", Total);
  printf("Valor médio = %.2lf\n", valor_Medio);

  return 0;
}

//EX10
// Programa para criptografar e descriptografar o primeiro nome e o sobrenome de
// uma pessoa, sendo que ambos podem ser nomes compostos
// FALTA FAZER ESSA

#include <stdio.h>

const char LINEFEED = 10; // caracter de fim de linha (Line Feed)

int main() {
  const int MAX_LETRAS = 9;
  const int TAMANHO_BUFFER = MAX_LETRAS + 1;
  const int PRIMEIRO_NOME_SHIFT = 1;
  const int SOBRENOME_SHIFT = 2;
  char primeiro_nome[TAMANHO_BUFFER];
  char sobrenome[TAMANHO_BUFFER];
  int i, nao_fim_linha;

  // LEITURA DO PRIMEIRO NOME:
  printf("Digite o primeiro nome e tecle ENTER: ");
  i = 0;
  nao_fim_linha = 1;
  while (i < MAX_LETRAS && nao_fim_linha) {
    char c = getchar();
    if (c == LINEFEED) // verifica se é fim de linha
      nao_fim_linha = 0;
    else {
      primeiro_nome[i] = c;
      i++;
    }
  }
  primeiro_nome[i] = '\0'; // termina a string
  while (nao_fim_linha)    // descarta tudo até o fim da linha
  {
    char c = getchar();
    if (c == LINEFEED) // verifica se é fim de linha
      nao_fim_linha = 0;
  }
  printf("Primeiro nome armazenado: %s\n", primeiro_nome);

  // LEITURA DO SOBRENOME:
  printf("Digite o sobrenome e tecle ENTER: ");
  i = 0;
  nao_fim_linha = 1;
  while (i < MAX_LETRAS && nao_fim_linha) {
    char c = getchar();
    if (c == LINEFEED)
      nao_fim_linha = 0;
    else {
      sobrenome[i] = c;
      i++;
    }
  }
  sobrenome[i] = '\0';  // termina a string
  while (nao_fim_linha) // descarta tudo até o fim da linha
  {
    char c = getchar();
    if (c == LINEFEED)
      nao_fim_linha = 0;
  }
  printf("Sobrenome armazenado: %s\n", sobrenome);

  // CRIPTOGRAFIA DO PRIMEIRO NOME:
  char primeiro_nome_criptografado[TAMANHO_BUFFER];
  i = 0;
  while (primeiro_nome[i]) // enquanto não for da string
  {
    primeiro_nome_criptografado[i] =
        primeiro_nome[i] + PRIMEIRO_NOME_SHIFT; // criptografa o caracter
    i++;
  }
  primeiro_nome_criptografado[i] = '\0'; // termina a string

  // CRIPTOGRAFIA DO SOBRENOME:
  char sobrenome_criptografado[TAMANHO_BUFFER];
  i = 0;
  while (sobrenome[i]) // enquanto não for fim da string
  {
    sobrenome_criptografado[i] =
        sobrenome[i] + SOBRENOME_SHIFT; // criptografa o caracter
    i++;
  }
  sobrenome_criptografado[i] = '\0'; // termina a string

  // RESULTADOS DA CRIPTOGRAFIA:
  printf("Primeiro nome criptografado: %s\n", primeiro_nome_criptografado);
  printf("Sobrenome criptografado: %s\n", sobrenome_criptografado);

  // DESCRIPTOGRAFIA DO PRIMEIRO NOME:
  char primeiro_nome_descriptografado[TAMANHO_BUFFER];
  i = 0;
  while (primeiro_nome_criptografado[i]) // enquanto não for fim da string
  {
    primeiro_nome_descriptografado[i] =
        primeiro_nome_criptografado[i] -
        PRIMEIRO_NOME_SHIFT; // descriptografa o caracter
    i++;
  }
  primeiro_nome_descriptografado[i] = '\0'; // termina a string

  // DESCRIPTOGRAFIA DO SOBRENOME:
  char sobrenome_descriptografado[TAMANHO_BUFFER];
  i = 0;
  while (sobrenome_criptografado[i]) // enquanto não for fim da string
  {
    sobrenome_descriptografado[i] =
        sobrenome_criptografado[i] -
        SOBRENOME_SHIFT; // descriptografa o caracter
    i++;
  }
  sobrenome_descriptografado[i] = '\0'; // termina a string

  // RESULTADOS DA DESCRIPTOGRAFIA:
  printf("Primeiro nome descriptografado: %s\n",
         primeiro_nome_descriptografado);
  printf("Sobrenome descriptografado: %s\n", sobrenome_descriptografado);

  return 0;
}
*/