// But : Écrivez un programme qui prend comme entrée un nombre de cinq chiffres
// Auteur : Guillaume Lafrance
// Date : 2020-09-12


#include <iostream>

void main()
{

	setlocale(LC_ALL, "");

	int nb1;

	std::cout << "Veuiller entrer des nombre entier :";
	std::cin >> nb1;

	



	if (nb1 == 10000 )
	{
		std::cout << nb1 << " Contient 5 nombre ";
	}

	else
	{
		std::cout << nb1 << " n'est pas composé de 5 chiffres ";
	}


}


// Le plan de test
/*
nb1 		Résultat
10000		Ce nombre contient 5 chiffres
56			Ce nombre ne contient pas 5 chiffres

*/