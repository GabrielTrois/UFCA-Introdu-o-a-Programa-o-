/*7) Um marciano chegou em uma floresta e se escondeu atrás de uma das 100 árvores do local
quando viu um caçador. O caçador só tem 5 balas em sua espingarda. Cada vez que ele atira e não
acerta, o marciano diz: “hahaha estou mais à direita!” ou “hahaha estou mais à esquerda!”, de
acordo com a sua posição. Se o caçador não conseguir acertar o marciano, ele será levado para
Marte. Implementar esse jogo para dois jogadores, onde um escolhe a árvore em que o marciano irá
se esconder, e o outro tenta acertar.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

int tree, bullet, mode, shot, Bleft = 5;

printf ("  __  __            _   _               _    _             _   \n"
         "|  \\/  |          | | (_)             | |  | |           | |  \n"
         "| \\  / | __ _ _ __| |_ _  __ _ _ __   | |__| |_   _ _ __ | |_ \n"
         "| |\\/| |/ _` | '__| __| |/ _` | '_ \\  |  __  | | | | '_ \\| __|\n"
         "| |  | | (_| | |  | |_| | (_| | | | | | |  | | |_| | | | | |_ \n"
         "|_|  |_|\\__,_|_|   \\__|_|\\__,_|_| |_| |_|  |_|\\__,_|_| |_|\\__|\n\n");
printf ("Select your game mode\n(1 for singleplayer 2 for multiplayer): ");
scanf ("%d", &mode);

switch (mode) {
case 1:
    srand(time(0));
    tree = rand() % 100 + 1;

    printf ("  ,______________________________________     \n"
            "  |_________________,----------._ [____]  \\---,__  __....-----==== \n"
            "                  (_(||||||||||||)___________/                   |\n"
            "                      `----------'        [ ))--,                |\n"
            "                                                 `,  _,--....___ |\n"
            "                                                   `/           - \n\n");
    printf ("\nYou are a Hunter, your job is to kill an alien invader.\nHe is hidden in 1 of the 100 trees of the forest (you only have 5 bullets)\nChoose a tree (1 - 100) to shoot: ");
    scanf ("%d", &shot);

        for (bullet = 5; bullet > 1; bullet --){
                Bleft --;
                if (shot > tree)
                    printf ("\nMartian:\n- I'm more to the left! <--- \n");
                    else if (shot < tree)
                             printf ("\nMartian:\n- I'm more to the right! ---> \n");
                else {
                    printf ("\nMartian:\n - Ouch!!!\nTHE HUNTER KILLED THE MARTIAN\n");
                    printf ("  ____  ____  _____  _____  ____  _____  _________  ________  _______      ____      ____  _____  ____  _____   ______    \n"
                            " |_   ||   _||_   _||_   _||_   \\|_   _||  _   _  ||_   __  ||_   __ \\    |_  _|    |_  _||_   _||_   \\|_   _|.' ____ \\   \n"
                            "   | |__| |    | |    | |    |   \\ | |  |_/ | | \\_|  | |_ \\_|  | |__) |     \\ \\  /\\  / /    | |    |   \\ | |  | (___ \_|  \n"
                            "   |  __  |    | '    ' |    | |\\ \\| |      | |      |  _| _   |  __ /       \\ \\/  \\/ /     | |    | |\\ \\| |   _.____`.   \n"
                            "  _| |  | |_    \\ \\__/ /    _| |_\\   |_    _| |_    _| |__/ | _| |  \\ \\_      \\  /\\  /     _| |_  _| |_\\   |_ | \\____) |  \n"
                            " |____||____|    `.__.'    |_____|\\____|  |_____|  |________||____| |___|      \\/  \\/     |_____||_____|\\____| \\______.'  \n\n");
                    return 0;
                }
            printf ("You missed, try again (%d bullets left): ", Bleft);
            scanf ("%d", &shot);
        }
break;

case 2:
    printf ("                _____\n"
"             ,-       -.\n"
"            / o       o \\\n"
"           /   \     /   \\\n"
"          /     )---(     \\\n"
"         /     ( 6 6 )     \\\n"
"        /       \\ ^ /       \\\n"
"       /         )=(         \\\n"
"      /   o   .--^-^--.   o   \\\n"
"     /    I  /  -   -  \\  I    \\\n"
" .--(    (_}y/\\       /\\y{_)    )--.\n"
"(     .___l\/__\\_____/__\\/l___,     )\n"
" \\                                 /\n"
"   -._      o O o O o O o      _,- \n"
"      `--Y--.___________.--Y--'\n"
"         |==.___________.==| \n"
"         `==.___________.==' \n\n");
    printf ("\nYou are a Martian that is hiding on Earth, a hunter is searching for you.\nIn front of you is a forest with 100 trees\nChoose a tree (1 - 100) to hide behind: ");
    scanf ("%d", &tree);
    system ("cls");

    printf ("  ,______________________________________     \n"
            "  |_________________,----------._ [____]  \\---,__  __....-----==== \n"
            "                  (_(||||||||||||)___________/                   |\n"
            "                      `----------'        [ ))--,                |\n"
            "                                                 `,  _,--....___ |\n"
            "                                                   `/           - \n\n");

    printf ("        ^  ^  ^   ^    ^  ^   ^  ^  ^   ^  ^\n"
            "       /|\\/|\\/|\\ /|\\  /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\ \n"
            "       /|\\/|\\/|\\ /|\\  /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\ \n"
            "       /|\\/|\\/|\\ /|\\  /|\\/|\\ /|\\/|\\/|\\ /|\\/|\\ \n");

    printf ("\nYou are a Hunter, your job is to kill an alien invader.\nHe is hidden in 1 of the 100 trees of the forest (you only have 5 bullets)\nChoose a tree (1 - 100) to shoot: ");
    scanf ("%d", &shot);

        for (bullet = 5; bullet > 1; bullet --){
                Bleft --;
                if (shot > tree)
                    printf ("\nMartian:\n- I'm more to the left! <--- \n");
                    else if (shot < tree)
                             printf ("\nMartian:\n- I'm more to the right! ---> \n");
                else {
                    printf ("\nMartian:\n - Ouch!!!\nTHE HUNTER KILLED THE MARTIAN\n");
                    printf ("  ____  ____  _____  _____  ____  _____  _________  ________  _______      ____      ____  _____  ____  _____   ______    \n"
                            " |_   ||   _||_   _||_   _||_   \\|_   _||  _   _  ||_   __  ||_   __ \\    |_  _|    |_  _||_   _||_   \\|_   _|.' ____ \\   \n"
                            "   | |__| |    | |    | |    |   \\ | |  |_/ | | \\_|  | |_ \\_|  | |__) |     \\ \\  /\\  / /    | |    |   \\ | |  | (___ \_|  \n"
                            "   |  __  |    | '    ' |    | |\\ \\| |      | |      |  _| _   |  __ /       \\ \\/  \\/ /     | |    | |\\ \\| |   _.____`.   \n"
                            "  _| |  | |_    \\ \\__/ /    _| |_\\   |_    _| |_    _| |__/ | _| |  \\ \\_      \\  /\\  /     _| |_  _| |_\\   |_ | \\____) |  \n"
                            " |____||____|    `.__.'    |_____|\\____|  |_____|  |________||____| |___|      \\/  \\/     |_____||_____|\\____| \\______.'  \n\n");

                    return 0;
                }
            printf ("You missed, try again (%d bullets left): ", Bleft);
            scanf ("%d", &shot);
        }
break;
}
printf ("\nHunter:\n- Out of bullets, Im getting you next time!!!\nTHE MARTIAN SURVIVED THE HUNTER\n");
printf ("Correct tree: %d\n", tree);
printf (" ____    ____       _       _______   _________  _____       _       ____  _____   ____      ____  _____  ____  _____   ______    \n"
        "|_   \\  /   _|     / \\     |_   __ \\ |  _   _  ||_   _|     / \\     |_   \\|_   _| |_  _|    |_  _||_   _||_   \\|_   _|.' ____ \\   \n"
        "  |   \\/   |      / _ \\      | |__) ||_/ | | \\_|  | |      / _ \\      |   \\ | |     \\ \\  /\\  / /    | |    |   \\ | |  | (___ \\_|  \n"
        "  | |\\  /| |     / ___ \\     |  __ /     | |      | |     / ___ \\     | |\\ \\| |      \\ \\/  \\/ /     | |    | |\\ \\| |   _.____`.   \n"
        " _| |_\\/_| |_  _/ /   \\ \\_  _| |  \\ \\_  _| |_    _| |_  _/ /   \\ \\_  _| |_\\   |_      \\  /\\  /     _| |_  _| |_\\   |_ | \\____) |  \n"
        "|_____||_____||____| |____||____| |___||_____|  |_____||____| |____||_____|\\____|      \\/  \\/     |_____||_____|\\____| \\______.'  \n\n");
return 0;
}

//Shot gun art by Daniel 'SkyPhideaux' Wesely
