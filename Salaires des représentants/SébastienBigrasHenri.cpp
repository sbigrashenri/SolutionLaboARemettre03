// But : Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
// affiche son salaire. Entrez - 1 à la valeur des ventes pour quitter le programme.
//Auteur : Sébastien Bigras-Henri
//Date : 2020/10/04

#include <iostream> // pour communiquer avec l'utilisateur

using namespace std; // permet au programmeur de ne pas toujours écrire std avant un cout, cin, endl, etc

int main() // liste des paramètres éventels
{

	setlocale(LC_ALL, ""); // integre un coffre à outils

	// déclaration des variables
	int salaireSemaine = 250; // l'utilisateur commence avec un montant de 250$
	float valeurVente; // le montant total de produit que l'utilisateur a vendu
	float pourcentage = 7.5 / 100; // le montant du poucentage est déja écrit, mais pourrait être mit directement dans les calcules
	float salaireTotale; // le montant total que fait l'utilisateur à la fin de sa semaine.
	float confirmation; // fait comfirmer a l'utilisateur le montant totale de ces vente de la semaine.
	int negatif = -1; // ferme le programme 
	
	cout << "Votre salaire de base par semaine est de : " << salaireSemaine << "$" << endl; // le programme indique à l'utilisateur que son salaire de base, est égale a 250$
	
	cout << "veuillez entrer le montant totale de vos produit vendu : "; // le programme demande à l'utilisateur d'entrer le montant totale de ces ventes
		cin >> valeurVente; // L'utilisateur entre le montant
		if (valeurVente < -1)
		{
			cout << "erreur";// le programme marque erreur si l'utilisateur entre un nombre plus petit que -1, car -1 quitte le programme 
			return 0;
		}
	while (valeurVente != negatif) // La boucle est ouvert, si la valeur de vente n'est pas égale à -1 (negatif) la boucle continue


		
		
	
	{
		cout << "Comfirmation du Montant de produit vendu : "; // Comme il s'agit d'un programme pour connêtre le salaire d'une personne, et pour me pratiquer, j'ai mis
		// une variable pour faire sûr que l'utilisateur ne s'est pas trompé dans le montant pour ne pas être payé moins ou plus 
		cin >> confirmation;
		if (confirmation != valeurVente)
		{        // Dans le if, le programme damande à l'utilisateur d'entrer le montant de ces ventes encore si la variable confirmation n'est pas égale
			// à la variable valeurVente, le programme demande à l'utilisateur d'entrer la valeurVente à nouveau.
			cout << "le montant : " << valeurVente << "$" << " et le montant : " << confirmation << "$" << " ne sont pas de la même valeur, veuillez réessayer." << endl;
			cout << "veuillez entrer le montant totale de vos produit vendu : ";
			cin >> valeurVente;
			
			if (valeurVente < -1)
			{
				cout << "erreur"; // le programme marque erreur si l'utilisateur entre un nombre plus petit que -1, car -1 quitte le programme 
				return 0;
			}
			if (valeurVente == negatif)// Sans se if, si l'utilisateur essai de fermer le programme avec -1 le programme ne ferme pas, car il prend le -1 comme etant la valeurVente et fait
			// le calcule du salaire. Le if fait donc en sorte que si la valeurVente == negatif (-1), il marque fin du programme.
			{
				cout << "fin du programme ";
				return 0; // Pour fermer le programme dans ce if si l'utilistateur entre -1
			}
		}
		else
		{
			
		}
		salaireTotale = salaireSemaine + valeurVente * (pourcentage); // le calcule que fait le programme pour donner le salaire total de l'utilisateur.
		cout << "Votre paye pour cette semaine, est de : " << salaireSemaine << "$" << " + "
			<< valeurVente << "$" << " * " << "( " << pourcentage << " )" << " = " << salaireTotale<< "$" << endl; // Explique à l'utilisateur le calcule fait pour son salaire
		// avec tout les détails.
		cout << "Entrer -1 quand vous voulez quitter le programme"<< endl;
		cout << "veuillez entrer le montant totale de vos produit vendu : ";  // On demande à l'utilisateur d'entrer la valeurVendu, pour que la boucle 
		// continue ou s'arrête selon l'utilisateur.
		cin >> valeurVente;
	}
	if (valeurVente==negatif) // If pour que l'utilisateur sache que le programme est terminé.
	{
		cout << "fin du programe";	
	}
	

	return 0; // Fin du programme sans erreur.
}

// Je sais que c'est pas totalement se qui est demander, mais vous m'avez demander de me pratiquer pour m'améliorer, c'est donc se que j'ai fais
// et c'est la première fois que je fais un programme sans aide et que je le comprend. Si jamais, en pratique si les if sont enlevés le programme devrait toujours fonctionner. 




/*  Plan de test 

salaireSemaine				valeurVente(1)				confirmation (2)	si 1 et !=			pourcentage			 calcule				salaireTotale				résultat finale

250$						5000						5000								    (7.5/100)			250 + 5000 * (7.5 / 100)								625$$

250$						14 412.54					14 412.54		    					(7.5/100)           250 + 5000 * (7.5 / 100)								1330.94$

250$						-2																	(7.5/100)																erreur

250$						300							400			 pas égale, recommencer      (7.5/100)

250$						-1																																			fin du programme

*/