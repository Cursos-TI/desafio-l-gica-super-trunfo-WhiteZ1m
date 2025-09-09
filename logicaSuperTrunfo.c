#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

// ----------------------------------------

// Criação de variáveis:

char cidade[50], codigo[4], cidade2[50], codigo2[4];
int pontos_turísticos, pontos_turísticos2;    
float área, pib, área2, pib2, densidadepopulacional1,densidadepopulacional2, pibpercapta1, pibpercapta2, superpoder1, superpoder2;
unsigned long int populacao, populacao2;
int resultadoA1, resultadoA2, resultadoA3, resultadoA4, resultadoA5, resultadoA6, resultadoA7;
int resultadoB1, resultadoB2, resultadoB3, resultadoB4, resultadoB5, resultadoB6, resultadoB7;
//Float pode acabar renderizando zeros a mais.

// ----------------------------------------

/*
Apesar de considerar o tipo float mais adequado em alguns cenários (ex.: permitir números fracionados),
utilizarei o tipo int conforme solicitado no enunciado."

OBS: Tomar cuidado com os valores digitados, já que cada variável aceita um determinado tipo de formato como ensinado.
O tipo float pode incluir zeros a mais, exemplo: 500km / render: 500.000 KM 
Uma possibilidade seria armazenar como string para preservar exatamente o formato digitado, mas seguirei com float, conforme indicado.
*/

// Código principal:

// (Carta 1)

printf("---- Super trunfo ----\n");  //nome do jogo
printf("Versão do jogo: 0.0.2\n"); //versão do jogo (iniciante 0.0.1)

printf("-----------------------\n");
printf("Carta 01 - Super trunfo\n");
printf("\n");

printf("Digite o nome da cidade: \n");
scanf("%49s", cidade);

printf("Digite o código da cidade: \n");
scanf("%3s", codigo);

printf("Área da cidade: \n");
scanf("%f", &área);

printf("População: \n");
scanf("%lu", &populacao);

printf("Pib: \n");
scanf("%f", &pib);

printf("Pontos turísticos: \n");
scanf("%d", &pontos_turísticos);
printf("\n"); //Organizar.

// Anúncio termino carta UM.

printf("---------------------------\n"); //para organizar a tela.

printf("Carta número UM finalizada.\n"); //Anúncio de finalização da carta 1.

printf("---------------------------\n"); //para organizar a tela.

printf("\n"); //Para pular mais uma linha, organizando a tela.

//Inicialização da carta 02:

printf("Carta 02 - Super trunfo\n"); //Boot carta 02.
printf("\n");

printf("Digite o nome da cidade: \n");
scanf("%49s", cidade2);

printf("Digite o código da cidade: \n");
scanf("%3s", codigo2);

printf("Área da cidade: \n");
scanf("%f", &área2);

printf("População: \n");
scanf("%lu", &populacao2);

printf("Pib: \n");
scanf("%f", &pib2);

printf("Pontos turísticos: \n");
scanf("%d", &pontos_turísticos2);

// Carta 02 finalizada.

// ---------------------------------------------------

// Calculo de média (densidade populacional):

densidadepopulacional1 = populacao / área;
densidadepopulacional2 = populacao2 / área2;

// pibpercapta:

pibpercapta1 = pib / populacao;
pibpercapta2 = pib2 / populacao2;

// ---------------------------------------------------

//Calculo super poder:

superpoder1 = área + populacao + pib + pontos_turísticos + densidadepopulacional1 + pibpercapta1;
superpoder2 = área2 + populacao2 + pib2 + pontos_turísticos2 + densidadepopulacional2 + pibpercapta2;

// Calculo individual dos resultados:

resultadoA1 = área > área2;
resultadoA2 = populacao > populacao2;
resultadoA3 = pib > pib2;
resultadoA4 = pontos_turísticos > pontos_turísticos2;
resultadoA5 = densidadepopulacional1 < densidadepopulacional2;
resultadoA6 = pibpercapta1 > pibpercapta2;
resultadoA7 = superpoder1 > superpoder2;

//calculo individual carta 02:

resultadoB1 = área2 > área;
resultadoB2 = populacao2 > populacao;
resultadoB3 = pib2 > pib;
resultadoB4 = pontos_turísticos2 > pontos_turísticos;
resultadoB5 = densidadepopulacional2 < densidadepopulacional1;
resultadoB6 = pibpercapta2 > pibpercapta1;
resultadoB7 = superpoder2 > superpoder1;

//Renderização dos atributos incluidos nas cartas:

printf("---------------------------\n"); //para organizar a tela.
printf("Cartas registradas com sucesso! \n"); //Anúncio de registro.
printf("---------------------------\n"); //para organizar a tela.

printf("-------[Carta 01]--------\n"); //Exibição carta 01.

printf("Cidade: %s\n", cidade);
printf("Código da cidade: %s\n", codigo);
printf("Área: %.2f KM [%d]\n", área, resultadoA1);       //Por ser FLOAT ele deve renderizar zeros a mais, se colocar %.0f ele renderiza menos porém se a área for 300.000 ai sai só 300.
printf("População: %lu [%d]\n", populacao, resultadoA2);       
printf("PIB: %.2f [%d]\n", pib, resultadoA3);
printf("Pontos turísticos: %d [%d]\n", pontos_turísticos, resultadoA4);
printf("Densidade populacional: %.2f hab/km² [%d]\n", densidadepopulacional1, resultadoA5);
printf("PIB per capita: %.2f reais [%d]\n", pibpercapta1, resultadoA6);
printf("SuperPoder = %f [%d]\n", superpoder1, resultadoA7);

printf("-------[Carta 02]--------\n"); //Exibição carta 02.

printf("Cidade: %s\n", cidade2);
printf("Código da cidade: %s\n", codigo2);
printf("Área: %.2f KM [%d]\n", área2, resultadoB1);
printf("População: %lu [%d]\n", populacao2, resultadoB2);
printf("PIB: %.2f [%d]\n", pib2, resultadoB3);
printf("Pontos turísticos: %d [%d]\n", pontos_turísticos2, resultadoB4);
printf("Densidade populacional: %.2f hab/km² [%d]\n", densidadepopulacional2, resultadoB5);
printf("PIB per capita: %.2f reais [%d]\n", pibpercapta2, resultadoB6);
printf("SuperPoder = %f [%d]\n", superpoder2, resultadoB7);

printf("---------------------------\n"); //para organizar a tela.

printf("O vencedor é...\n");

if (superpoder1 > superpoder2)
{
   printf("Carta A pois possui maiores atributos!\n");
} else{
   printf("Carta B pois possui maiores atributos!\n");  
}


//-------------------------------------------------------------------------------

    return 0; //Finalizando o código.

}