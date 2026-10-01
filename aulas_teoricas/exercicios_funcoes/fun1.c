#include <stdio.h>

/*
Uma loja mantém o controle de estoques de suas mercadorias, armazenando os seguintes
dados:
• um vetor com o número de itens em estoque de cada mercadoria, correspondendo o índice
do vetor ao código da mercadoria;
• uma matriz com a previsão de venda de suas mercadorias por mês, correspondendo cada
linha da matriz a uma mercadoria (código = índice da linha + 1) e cada coluna associada
ao número correspondente ao mês (12 colunas).
Supondo que a loja apresente 5 diferentes mercadorias, faça um programa que atende a
consultas sobre até que mês determinadas mercadorias apresentam estoque suficiente. O
programa deverá utilizar uma função tipada mes(...), que recebe como parâmetros a matriz, o
vetor e o código da mercadoria a ser pesquisada e devolve ao programa que a acionou o
número do último mês com estoque suficiente. O número de mercadorias pesquisado pelo
programa deverá ficar a critério do usuário do programa.
*/