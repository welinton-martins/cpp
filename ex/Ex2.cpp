/*
  Escreva um método que receba como parâmetro um vetor de char e seu tamanho,
  esse vetor de char será um gabarito de uma prova,
  onde cada letra representará a resposta correta do gabarito.
  O método deverá comparar um vetor local do método (deverá ser populado pelo usuário),
  sendo o vetor resposta, com o vetor “Gabarito”, 
  que é o que foi passado por parâmetro (argumento).
  Esse método deverá retornar o valor de acertos do vetor resposta,
  considerar que o tamanho dos vetores podemos fixar em 10 posições.
*/

#include <iostream>
using namespace std;

int valor = 0;
int acertos(char gabarito[], int tam);

int main() {
    int tam = 10;
    char gabarito[tam];

    for (int i = 0; i < tam; i++) {
        cout << "Insira a " << (i+1) << " resposta: ";
        cin >> gabarito[i];
        cout << endl;
    }
    
    cout << acertos(gabarito, tam);
   
    return 0;
}

int acertos(char gabarito[], int tam) {
    char resposta[10] = {'A', 'B', 'C', 'D', 'E', 'A', 'B', 'C', 'D', 'E'};
    
    if (resposta[tam] == gabarito[tam])
        valor++;
    
    tam--;
    
    if (tam == 0) 
        return valor;
    else
        return acertos(gabarito, tam);
    
}