#include <iostream>
using namespace std;
#include <locale>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    setlocale(LC_ALL,"Portuguese");
    int n1,n2,opcao;
    float n3,n4;
	cout << "\nOl� sou uma calculadora, como posso ajudar ?\n \nPressione 1 para somar, 2 para subtrair, 3 para multiplicar, 4 para dividir, \n5 para porcentagem, 6 para encerrar o sistema. :) ";
	cin  >> opcao;
	if (opcao==1){
	  cout << "\nEscolha o primeiro n�mero: ";
	  cin  >> n1;
 	  cout << "\nEscolha o segundo n�mero: ";
 	  cin  >> n2;
	  cout << "\nA soma � igual a " << n1+n2 << endl;
	  main (0,0);
	  return 0;
	}
	if (opcao==2){
      cout << "\nEscolha o primeiro n�mero: ";
	  cin  >> n1;
	  cout << "\nEscolha o segundo n�mero: ";
	  cin  >> n2;
	  cout << "\nA subtra��o � igual a " << n1-n2 << endl;
 	  main (0,0);	
	}
	if (opcao==3){
      cout << "\nEscolha o primeiro n�mero: ";
	  cin  >> n1;
	  cout << "\nEscolha o segundo n�mero: ";
	  cin  >> n2;
	  cout << "\nA multiplica��o � igual a " << n1*n2 << endl;
	  main (0,0);	
	}
	if (opcao==4){
      cout << "\nEscolha o primeiro n�mero: ";
	  cin  >> n1;
	  cout << "\nEscolha o segundo n�mero: ";
      cin  >> n2;
	  cout << "\nA divis�o � igual a: " << n1/n2 << endl;
	  main (0,0);	
	}
	if (opcao==5){
      cout << "\nSelecione o n�mero a ser utilizado: ";
	  cin  >> n3;
	  cout << "\nAgora escolha a porcentagem para este n�mero: ";
      cin  >> n4;
      n4 = n4/100;
	  cout << "\nA porcentagem � igual a: " << n3*n4 << endl;
	  main (0,0);
	}
	if (opcao==6){
      cout << "\nEspero ter ajudado, at� a pr�xima. :) \n";
      system("pause");
      system("cls");
	  return 0;		
	}
	return 0;
}
