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
void explicacoes();
//--------------------------


int main(){

	setlocale(LC_ALL, "pt_BR.UTF-8");
	menu();
}

void menu(){

	int escolhaMenu = 0;
	while (escolhaMenu != 12) {
		system("cls"); // somente no windows
		cout << "Menu PazettiScript";
		cout << endl << endl;
		cout << "1 - Média aritmética \n";
		cout << "2 - custo de mercadoria \n";
		cout << "3 - Equação do segundo grau \n";
		cout << "4 - SSMD \n";
		cout << "5 - Calcular a área de uma circunferência \n";
		cout << "6 - Números naturais positivos ímpares \n";
		cout << "7 - PA \n";
		cout << "8 - Maior numero \n";
		cout << "9 - Soma de 10 numeros \n";
		cout << "10 - 10 idades \n";
		cout << "11 - Explicacoes \n";
		cout << "12 - Sair \n";

		cout << "Opcao: ";
		cin >> escolhaMenu;

		switch (escolhaMenu){
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
		case 11: explicacoes();
			break;			
		case 12:
			return;
		default:
			break;
		}

		system("pause"); // somente no windows
	}
}

void explicacoes(){

	int escolha = 0;

	cout << "Qual desafio voce quer receber a explicacao?" << endl;
	




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