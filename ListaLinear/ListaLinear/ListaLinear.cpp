// Claudio Souza Nunes

#include <iostream>
using namespace std;

// headers
void menu();
void mediaAritmetica();
void custoDaMercadoria();
void equacaoDeSegundoGrau();
void ssmd();
void AreaDaCircuferencia();
void numerosNaturaisPositivosImpares();
void progressaoAritmetica();
void maiorNumero();
void soma10numeros();
void idades10();
//--------------------------


int main(){
	menu();
}

void menu(){

	int op = 0;
	while (op != 11) {
		system("cls"); // somente no windows
		cout << "Menu PazettiScript";
		cout << endl << endl;
		cout << "1 - Média aritmética \n";
		cout << "2 - custo de mercadoria \n";
		cout << "3 - Equação do segundo grau \n";
		cout << "4 - SSMD \n";
		cout << "5 - Calcular a área de uma circunferência \n";
		cout << "6 - Números naturais positivos ímpares \n\n";
		cout << "7 - PA \n\n";
		cout << "8 - Maior numero \n\n";
		cout << "9 - Soma de 10 numeros \n\n";
		cout << "10 - 10 idades \n\n";
		cout << "11 - Sair \n\n";

		cout << "Opcao: ";
		cin >> op;

		switch (op){
		case 1: mediaAritmetica();
			break;
		case 2: custoDaMercadoria();
			break;
		case 3: equacaoDeSegundoGrau();
			break;
		case 4: ssmd();
			break;
		case 5: AreaDaCircuferencia();
			break;
		case 6: numerosNaturaisPositivosImpares();
			break;
		case 7: progressaoAritmetica();
			break;
		case 8: maiorNumero();
			break;
		case 9: soma10numeros();
			break;
		case 10: idades10();
			break;		
		case 11:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void mediaAritmetica(){

}

void custoDaMercadoria(){
}

void equacaoDeSegundoGrau(){
	
}

void ssmd(){
	
}

void AreaDaCircuferencia(){
	
}

void numerosNaturaisPositivosImpares(){

}

void progressaoAritmetica(){

}

void maiorNumero(){

}

void soma10numeros(){

}

void idades10(){

}