/*
    Fazer um programa que, dados dois vetores de 7 posições cada, 
    efetue as operações aritméticas básicas, indicadas por um
    terceiro vetor cujos dados também são fornecidos pelo usuário,
    gerando e imprimindo um quarto vetor. 
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
    int n1[7], n2[7], opc=0, res[7], i = 0;
    char opr[7];

    // inserindo e calculando os dados
    do {
        cout << endl << (i+1) << " Operacao " << ", selecione: ";
        do {
            cout << "1=+\t" << "2=-\t" << "3=*\t" << "4=/\t\n";
            cin >> opc;
        } while (!(opc > 0 && opc < 5));

        cout << "Digite o n1 e n2: \n";
        cin >> n1[i] >> n2[i];

        switch (opc) {
            case 1:
                opr[i] = '+';
                res[i] = n1[i] + n2[i];
                break;
            case 2:
                opr[i] = '-';
                res[i] = n1[i] - n2[i];
                break;
            case 3:
                opr[i] = '*';
                res[i] = n1[i] * n2[i];
                break;
            case 4:
                opr[i] = '/';
                res[i] = n1[i] / n2[i];
                break;
        }
        i++;
    } while (i < 7);

    // exibindo o resuldato
    cout << "Resultado";
    for (i = 0; i < 7; i++) {
        printf("\n%d\t%c\t%d\t=\t%d\n", n1[i], opr[i], n2[i], res[i]);
    }
    return 0;
}
