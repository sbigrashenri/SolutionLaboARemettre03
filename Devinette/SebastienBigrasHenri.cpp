// But : Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition
//que l'utilisateur a faite.
//Auteur : Sébastien Bigras-Henri
//Date : 2020/10/04

#include <iostream> // pour communiquer avec l'utilisateur
#include <time.h>


using namespace std; // permet au programmeur de ne pas toujours écrire std avant un cout, cin, endl, etc

int main() // liste des paramètres éventels
{
	setlocale(LC_ALL, "");// integre un coffre à outils
	int iRandom; // valeur choisi par le programme de façon aléatoire // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	int reponse; // valeur choisi par l'utilisateur
	int chance = 0; // variable pour donner le nombre d chance restante
	int chanceMax = 5; // variable pour le nombre maximum de chance de l'utilisateur
	
	cout << "Entrez un nombre entre 0 et 100, vous avez 5 chances : ";	
	cin >> reponse;
	srand(time(0));// pour activer l’aléatoire dans le programme
	iRandom = rand() % 101;// l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	
	
	while (++chance < chanceMax) // on additionne +1 a chaque fois que l'utilisateur ne trouve pas la réponse si il atteint ces 5 essaies le programme se ferme
	{
		if (reponse <0 || reponse> 100)
		{
			cout << "Erreur réponse non compris entre 0 et 100";  // si la reponse n'est pas compris entre 0 et 100 le programme se ferme
			return -1;
		}

		if (reponse > iRandom)// si la reponse est plusgrand que le nombre choisi par le programme, le programe affiche ce message
		{
			cout << " Votre nombre est plus grande que la réponse " << endl;
		}
		else // sinon il affiche celui-la
		{
			cout << "Votre nombre est plus petit que la réponse " << endl;
		}
		if (reponse == iRandom) // si l'utilisateur entre correctement la réponse, le programme lui dit qu'il a gagné
			//et il ferme le programme, sinon il continu la boucle
		{
			cout << " Félicitation, vous avez gangé ";
			return 0; 
		}
		cout << chanceMax - chance << " chance restant"<<endl;

		cout << "Entrez un nombre entre 0 et 100 : "; // on recommence la boucle ici
	cin >> reponse;
		
	}
	cout << "Vous n'avez pas trouvé la bonne réponse : " << iRandom << endl; // si l'utilisateur n'a pas réussit a trouver la réponse, le programme lui donne la bonne réponse en fermant le programme.
	cout << "fin du programme";


	
}
/*plan de test

reponse																				résultat
-1																					 erreur réponse non compris entre 0 et 100
45                               dépendant si 45 =, < ou >                         est plus petit que, est plus grand que ou Félicitation vous avez gagné
100                                                                                   erreur réponse non compris entre 0 et 100





*/