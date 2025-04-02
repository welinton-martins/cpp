 /*
    Criar um vetor com a 8 elementos e ordená-los. 
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
    int num[8] = {8, 7, 6, 5, 4, 3, 2, 1}, tmp = 0;

    // organizar de forma crescente

    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            if(num[i] > num[i+1]) {
                tmp = num[i];
                num[i] = num[i+1];
                num[i+1] = tmp;
            }
            
        }
    }

    // Exibicao
    for (int i = 0; i < 8; i++) {
        cout << num[i];
    }
    
    return 0;
}