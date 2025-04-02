#include <iostream>
#include <string>
using namespace std;


class EntradaDeCinema {
    public: 
        int dia_do_filme, sala;
        float horario, valor;
    
    EntradaDeCinema (int dia_do_filme, int sala, float horario, float valor) {
        this->dia_do_filme=dia_do_filme;
        this->sala=sala;
        this->horario=horario;
        this->valor=valor;
    }
    
    void CalculaDesconto() {
        int idade, carteira_estudante;
        cout << "Informe a data de nascimento: ";
        cin >> idade;
        idade = 2021 - idade;
        if (idade < 12) {
            valor = valor / 2;
        } else if (idade == 12 || idade <= 15) {
            valor = valor - (valor * .4);
        } else if (idade == 16 || idade <= 20) {
            valor = valor - (valor * .3);
        } else if (idade > 20) {
            valor = valor - (valor * .2);
        }
    }
    
    void CalculaDescontoHorario() {
        if (horario < 16) {
            valor = valor - (valor * .10);
        }
    }
    
    void toString() {
        printf("Dia do filme: %s\nSala: %s\nHorario: %s\nValor: %s\n",dia_do_filme, sala, horario, valor);
    }
};

int main(int argc, char *argv[]) {
    int dia_do_filme, sala;
    float horario, valor;
    cout << "Informe o dia, horario e sala do filme: ";
    cin >> dia_do_filme >> horario >> sala;
    EntradaDeCinema Obj(dia_do_filme, sala, horario, valor);
	Obj.CalculaDesconto();
	Obj.CalculaDescontoHorario();
	Obj.toString();
	return 0;
}


