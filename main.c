#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(int max, int min)
{
            printf("values between : %d and %d\n\n", min, max);
    int mysteryNumber = 0, triedNumber = 0;
    int tries = 0;
    //int playAgain = 1;


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
            printf ("Well done, you found the Mystery Number ");
            printf("in %d tries !!!\n\n", tries);
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
printf("===menu===\n1.Easy: 1~100\n2.Medium: 1~1000\n3.Hard: 1~10000\n4.Custom: x~y\n");
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
 /*   case 4:
        printf("Custom\n");
        //max = 100, min = 1;
        printf("set min:")
        scanf("%d", &min)
        printf("set max:")
        scanf("%d", &max)
        game(max, min);
        break;
        */
    default:
        printf("try again\n");
}
            printf("Wanna play Again? (1: yes; 0:no)");
            scanf("%d", &playAgain);
            }
printf("bye !!");
   return 0;
}
