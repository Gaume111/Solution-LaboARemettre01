// But : Écrivez un programme qui lit un entier et qui détermine et affiche s’il s’agit d’un entier pair d’un entier impair
// Auteur : Guillaume Lafrance
// Date : 2020-09-10



#include <iostream>


void main()
{

	setlocale(LC_ALL, "");

	int nb1;
	int nb2;

	std::cout << "Veuiller entrer un nombre entier :";
	std::cin >> nb1;

	std::cout << "Veuiller entrer un deuxième nombre entier :";
	std::cin >> nb2;

	if (nb1 % nb2 == 0)
	{
		std::cout << nb1 << " est pair ";
	}
	else
	{
		std::cout << nb1 << " est impair ";
	}





}




// Le plan de test
/*
nb1		nb2			Résultat
8		4			8 est pair
15		6			15 est impair
*/