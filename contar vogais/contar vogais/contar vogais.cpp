#include<iostream>
#include<string>
#include<locale.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Portuguese");
	string frase;
	int i, contara = 0, contare = 0, contari = 0, contaro = 0, contaru = 0, j;
	do
	{
		cout << "\n ________MENU_______ \n";
		cout << "Escolhe uma opção \n";
		cout << "1-Contar vogais na frase \n";
		cout << "0- Para sair \n";
		cin >> j;
		switch (j)
		{
		case 1:
			cout << "me diz uma frase \n";
			cin.ignore();
			getline(cin, frase);
			
			for (i = 0; i < frase.size(); i++)
			{
				switch (frase[i])
				{
				case 'A':
				case 'a':
				{
					contara = contara + 1;
					break;
				}
				case 'E':
				case 'e':
				{
					contare = contare + 1;
					break;
				}
				case 'I':
				case 'i':
				{
					contari = contari + 1;
					break;
				}
				case 'O':
				case 'o':
				{
					contaro = contaro + 1;
					break;
				}
				case 'U':
				case 'u':
				{
					contaru = contaru + 1;
					break;
				}
				}
							}
			cout << "\n Escreveste \n" << contara << "A(s)\n" << contare << "E(s)\n" << contari << "I(s)\n" << contaro << "O(s)\n" << contaru << "U(s)\n";
			
		default:
			break;
		}
	} while (j != 0);
}