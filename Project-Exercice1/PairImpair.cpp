// But : Écrivez un programme qui lit un entier et qui détermine et affiche s’il s’agit d’un entier pair d’un entier impair
// Auteur : Guillaume Lafrance
// Date : 2020-09-10



#include <iostream>


void main()
{

	setlocale(LC_ALL, "");

	int nb1;
	// KM : Pas vraiment besoin de deuxième nombre ???
	int nb2;

	std::cout << "Veuiller entrer un nombre entier :";
	std::cin >> nb1;
	// KM : pourquoi demander un deuxième nombre
	std::cout << "Veuiller entrer un deuxième nombre entier :";
	std::cin >> nb2;
	// KM : Non il faut diviser par 2 pour tester si c'est pair. Nb2 peut avoir n'importe quelle valeur
	if (nb1 % nb2 == 0)
	{
		std::cout << nb1 << " est pair ";
	}
	else
	{
		std::cout << nb1 << " est impair ";
	}





}




// Le plan de test : 
// KM : Le nb2 devrait toujours être 2
/*
nb1		nb2			Résultat
8		4			8 est pair
15		6			15 est impair
*/
