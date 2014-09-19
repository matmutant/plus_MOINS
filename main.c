#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv )
{
    int mysteryNumber = 0, triedNumber = 0;
    const int MAX = 100, MIN = 1;
    int tries = 0;

    // Génération du nombre aléatoire

    srand(time(NULL));
    mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;

    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */

    do
    {
        // On demande le nombre
        printf("Quel est le nombre ? ");
        scanf("%d", &triedNumber);
        // increment tries number
                                tries++;

        // On compare le nombre entré avec le nombre mystère

        if (mysteryNumber > triedNumber)
            printf("C'est plus !\n\n");
        else if (mysteryNumber < triedNumber)
            printf("C'est moins !\n\n");
        else
            {
            printf ("Well done, you found the Mystery Number ");
            printf("in %d tries !!!\n\n", tries);
            }


    } while (triedNumber != mysteryNumber);
return 0;
}
