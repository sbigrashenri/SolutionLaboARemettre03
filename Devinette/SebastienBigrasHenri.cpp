// But : Le programme pourrait indiquer si la valeur � trouver est plus grande ou plus petite que la derni�re proposition
//que l'utilisateur a faite.
//Auteur : S�bastien Bigras-Henri
//Date : 2020/10/04

#include <iostream> // pour communiquer avec l'utilisateur
#include <time.h>


using namespace std; // permet au programmeur de ne pas toujours �crire std avant un cout, cin, endl, etc

int main() // liste des param�tres �ventels
{
	setlocale(LC_ALL, "");// integre un coffre � outils
	int iRandom; // valeur choisi par le programme de fa�on al�atoire // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	int reponse; // valeur choisi par l'utilisateur
	int chance = 0; // variable pour donner le nombre d chance restante
	int chanceMax = 5; // variable pour le nombre maximum de chance de l'utilisateur
	
	cout << "Entrez un nombre entre 0 et 100, vous avez 5 chances : ";	
	cin >> reponse;
	srand(time(0));// pour activer l�al�atoire dans le programme
	iRandom = rand() % 101;// l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom

	
	
	while (++chance < chanceMax) // on additionne +1 a chaque fois que l'utilisateur ne trouve pas la r�ponse si il atteint ces 5 essaies le programme se ferme
	{
		if (reponse <0 || reponse> 100)
		{
			cout << "Erreur r�ponse non compris entre 0 et 100";  // si la reponse n'est pas compris entre 0 et 100 le programme se ferme
			return -1;
		}

		if (reponse > iRandom)// si la reponse est plusgrand que le nombre choisi par le programme, le programe affiche ce message
		{
			cout << " Votre nombre est plus grande que la r�ponse " << endl;
		}
		else // sinon il affiche celui-la
		{
			cout << "Votre nombre est plus petit que la r�ponse " << endl;
		}
		if (reponse == iRandom) // si l'utilisateur entre correctement la r�ponse, le programme lui dit qu'il a gagn�
			//et il ferme le programme, sinon il continu la boucle
		{
			cout << " F�licitation, vous avez gang� ";
			return 0; 
		}
		cout << chanceMax - chance << " chance restant"<<endl;

		cout << "Entrez un nombre entre 0 et 100 : "; // on recommence la boucle ici
	cin >> reponse;
		
	}
	cout << "Vous n'avez pas trouv� la bonne r�ponse : " << iRandom << endl; // si l'utilisateur n'a pas r�ussit a trouver la r�ponse, le programme lui donne la bonne r�ponse en fermant le programme.
	cout << "fin du programme";


	
}
/*plan de test

reponse																				r�sultat
-1																					 erreur r�ponse non compris entre 0 et 100
45                               d�pendant si 45 =, < ou >                         est plus petit que, est plus grand que ou F�licitation vous avez gagn�
100                                                                                   erreur r�ponse non compris entre 0 et 100





*/