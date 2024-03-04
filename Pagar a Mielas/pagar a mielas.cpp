#include <iostream>

void calcularvalorporpessoas(float totaldespesa, int pessoas, float &valorporpessoa)
{
	valorporpessoa = totaldespesa / pessoas;
}
void main()
{
	float totaldespesa;
	int pessoas;

	std::cout << "Digite o valor da Despesa: \n";
	std::cin >> totaldespesa;
	std::cout << "Digite o numnero de pessoas: \n";
	std::cin >> pessoas;

	float valorporpessoas;
	calcularvalorporpessoas(totaldespesa, pessoas, valorporpessoas);
	std::cout << "O valor a ser pago por pessoa e: " << valorporpessoas;
}