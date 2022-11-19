#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

#define PEDRA 1
#define PAPEL 2
#define TESOURA 3

#define PAR 1
#define IMPAR 2


int pontosJogador;
int pontosComputador;

void jogo2();
void jogo();
void imprimeItem2(int item);
void imprimeItem(int item);
int verifica(int p1, int p2);
int verifica2(int p1, int p2);

int main(){
    
    srand(time(NULL)); //usado para gerar numeros aleatorios diferentes

	int code;
	
	cout << "Digite 1 para jogar -- Pedra, Papel ou Tesoura" << endl;
	cout << "Digite 2 para jogar -- Par ou Impar" << endl;
	cin >> code;
	
	switch(code){
		case 1: 
		    cout << "--------------------------------------------------------------------------------" << endl;
		    cout << "                           PEDRA - PAPEL - TESOURA                              " << endl;
		    cout << "------------------------------------------------------------------------------- " << endl;
			jogo();
			break;
		case 2:
			jogo2();
			break;
		default:
			cout << "invalido";
			break;
	}
    return 0;
}

void jogo2(){
	
	int player, pc, jogada;
	
	cout << "Escolha 1.Par 2.Impar - ";
    cin >> jogada;
    
	pc = rand();
    
    cout << "Voce -> ";
    imprimeItem2(player);
    cout << " x ";
    imprimeItem2(pc);
    cout << " <- Computador. ";

    int ganhador = verifica2(player, pc);

    if(ganhador == 1){
        cout << " VOCE GANHOU!";
    }
    else if(ganhador == 2){
        cout << " COMPUTADOR GANHOU!";
    }
    else{
        cout << " EMPATOU!";
    }
}

void jogo(){

    int itemJogador;
    int itemComputador;
    
    cout << "Escolha 1.Pedra 2.Papel 3.Tesoura - ";
    cin >> itemJogador;
    
    itemComputador = rand()%3+1;
    
    cout << "Voce -> ";
    imprimeItem(itemJogador);
    cout << " x ";
    imprimeItem(itemComputador);
    cout << " <- Computador. ";

    int ganhador = verifica(itemJogador, itemComputador);

    if(ganhador == 1){
        cout << " VOCE GANHOU!";
    }
    else if(ganhador == 2){
        cout << " COMPUTADOR GANHOU!";
    }
    else{
        cout << " EMPATOU!";
    }
}


void imprimeItem2(int item, int res){
    
	int par, impar;
	
	if(res%2==0){
		item = PAR;
		cout << "PAR";
    }
    else{
    	item = IMPAR;
        cout << "IMPAR";
    }
}

void imprimeItem(int item){
    if(item == PEDRA){
        cout << "PEDRA";
    }
    else if(item == PAPEL){
        cout << "PAPEL";
    }
    else{
        cout << "TESOURA";
    }
}

int verifica2(int p1, int p2){

    int ganhador;
    if(p1 == p2){
        ganhador = 0;
    }

    if(p1==PAR && p2==IMPAR){ ganhador = 1; }
    if(p1==IMPAR && p2==PAPEL){ ganhador = 2; }

    return ganhador;
}

int verifica(int p1, int p2){

    int ganhador;
    if(p1 == p2){ //empate
        ganhador = 0;
    }

    if(p1==PEDRA && p2==TESOURA){ ganhador = 1; }
    if(p1==PEDRA && p2==PAPEL){ ganhador = 2; }

    if(p1==PAPEL && p2==PEDRA){ ganhador = 1; }
    if(p1==PAPEL && p2==TESOURA){ ganhador = 2; }

    if(p1==TESOURA && p2==PAPEL){ ganhador = 1; }
    if(p1==TESOURA && p2==PEDRA){ ganhador = 2; }

    return ganhador;
}

