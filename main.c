#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int mysteryNumber = 0, triedNumber = 0;
    int MAX = 100, MIN = 1;
    int tries = 0;
    int playAgain = 1;

    /*
    Calling time as random generator
    Utilisation du moment comme générateur d'aléatoire
    */
    srand(time(NULL));
    /*
    First loop running until gamer is fed up with playing
    Première boucle qui tourne jusqu'à ce que le joueur veuille s'arreter
    */
while (playAgain !=0)
{
    /*
    Creating random number
    Céation du nombre aléatoire
    */
    mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;

    /*
    Inner loop asking for number untill gamer find the right one.
    Boucle interne demandant un nombre au joeur jusquà obtenir la bonne réponse
    */
    do
    {
        /*
        Asking for number
        On demande le nombre
        */
        printf("Which Number is it ? ");
        scanf("%d", &triedNumber);
        /*
        increment tries number
        On incrémente la variable du nombre d'essais**/
        tries++;

        /*
        Comparison between tested number and Mystery one.
        On compare le nombre entré avec le nombre mystère.
        */

        if (mysteryNumber > triedNumber)
            printf("That's MORE !\n\n");
        else if (mysteryNumber < triedNumber)
            printf("That's less !\n\n");
        else if (mysteryNumber == triedNumber)
            {
            printf ("Well done, you found the Mystery Number ");
            printf("in %d tries !!!\n\n", tries);
            printf("Wanna play Again? (1: yes; 0:no)");
            scanf("%d", &playAgain);
            }
        else
        {
            printf("unexpected entry");
            return 666;
        }

    } while (triedNumber != mysteryNumber);
}
return 0;
}
