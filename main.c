#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Allows computer to generate radom using time.

int game(int max, int min)
{
            printf("values between : %d and %d\n\n", min, max);
    int mysteryNumber = 0, triedNumber = 0;
    int tries = 0;

    /*
    Creating random number
    Céation du nombre aléatoire
    */
    mysteryNumber = (rand() % (max - min + 1)) + min;

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
            printf ("Well done, you found the Mystery Number in %d trie(s) !!!\n\n", tries);
            //printf("Wanna play Again? (1: yes; 0:no)");
            //scanf("%d", &playAgain);
            }
        else
        {
            printf("unexpected entry");
            return 666;
        }

    } while (triedNumber != mysteryNumber);
return 0;
}





int main ( int argc, char** argv )
{
    /*
    Calling time as random generator
    Utilisation du moment comme générateur d'aléatoire
    */
    srand(time(NULL));
    int max = 100, min = 1;
    int playAgain = 1;

    /*
    First loop running until gamer is fed up with playing
    Première boucle qui tourne jusqu'à ce que le joueur veuille s'arreter
    */
while (playAgain !=0)
{

    /*Menu*/
        int menu = 0;
printf("===menu===\n\n1.Easy: 1~100\n2.Medium: 1~1000\n3.Hard: 1~10,000\n4.HARDCORE: 1~1,000,000\n5.Custom: x~y\n\n\n");
scanf("%d", &menu);
switch (menu)
{

    case 1:
        printf("Easy\n");
        max = 100, min = 1;
        game(max, min);
        break;
    case 2:
        printf("Medium\n");
        max = 1000, min = 1;
        game(max, min);
        break;
    case 3:
        printf("Hard\n");
        max = 10000, min = 1;
        game(max, min);
        break;
    case 4:
        printf("HARDCORE\n");
        max = 1000000, min = 1;
        game(max, min);
        break;
    case 5:
        printf("Custom\n");
        /*
        The following allows player to set mini and max values for radom number
        La suite permet au joueur de choisir les valeurs minimales et maximales du nombrealéatoire
        */
        printf("set min:");
        scanf("%d", &min);
        printf("set max:");
        scanf("%d", &max);
        game(max, min);
        break;

    default:
        printf("error : try again\n");
}
            printf("Wanna play Again? (1: yes; 0:no)");
            scanf("%d", &playAgain);
           /*
           temporary test :

           if(scanf("%d", &playAgain) == 1)
                {
                    printf("%d", playAgain);
                }
            else if (scanf("%d", &playAgain) == 0)
                {
                    printf("%d", playAgain);
                }
            else
                {
                printf("failed to read integer.\n");
                playAgain=0;
                }
                */
}
printf("Good bye !!\n\n");
   return 0;
}

