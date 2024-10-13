#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char *duelists[] = {"Phoenix", "Reyna", "Jett", "Raze", "Yoru", "Iso"};
int sized = sizeof(duelists) / sizeof(duelists[0]);

const char *sentinels[] = {"Deadlock", "Chamber", "Cypher",
                           "Killjoy",  "Sage",    "Vyse"};
int sizes = sizeof(sentinels) / sizeof(sentinels[0]);

const char *initiators[] = {"KAY/O", "Breach", "Gekko", "Skye", "Fade", "Sova"};
int sizei = sizeof(initiators) / sizeof(initiators[0]);

int main(){

srand(time(0));
char name[100];
char agent[20];
bool duelist;
bool sent;
bool initiate;
char type;

printf("Select your username: \n");
fgets(name, 100, stdin);
name[strlen(name)-1] = '\0';

while(strlen(name) == 0){

    printf("You need a name to play!\n");
    printf("Select your username: \n");
    fgets(name, 100, stdin);
    name[strlen(name)-1] = '\0';

}

printf("Do you want to be a Duelist? (Y or N)\n");
scanf("%c", &type);

switch(type){

    case 'Y':
        duelist = 1;
        sent = 0;
        initiate = 0;
        break;
    case 'N':
        duelist = 0;
        printf("Do you want to be a Sentinel? (Y or N)\n");
        scanf(" %c", &type);
        break;
    default: 
        printf("Try again \n");

}


switch(type){

    case 'Y':
        sent = 1;
        initiate = 0;
        break;
    case 'N':
        sent = 0;
        printf("Do you want to be a Initiator? (Y or N)\n");
        scanf(" %c", &type);
        break;
    default: 
        printf("Try again \n");

}

switch(type){

    case 'Y':
        initiate = 1;
        break;
    case 'N':
        initiate = 0;
        printf("Go smokes then lil bro");
        break;
    default: 
        printf("Go smokes then lil bro");
}


if(duelist == true){

    int randomd = (rand() % sized);
    printf("%s, you are going to play %s.", name, duelists[randomd]);

}
else if(sent == true){

    int randoms = (rand() % sizes);
    printf("%s, you are going to play %s.", name, sentinels[randoms]);
    
}
else if(initiate == true){

     int randomi = (rand() % sizei);
    printf("%s, you are going to play %s.", name, initiators[randomi]);

}
else{

    printf("Rip bozo");

}

return 0;
}