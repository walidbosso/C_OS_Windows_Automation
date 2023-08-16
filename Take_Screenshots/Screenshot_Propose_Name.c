#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
	system("");
    // Generate dynamic file name
    char nom[1000];
    printf("~--------------------------------~\n");
    printf("  Entrer nom de fichier : ");
    printf("\n~-----------------------~ ");
    scanf("%s",nom);
    system("exit");

    // Construct command to save screenshot
    char command[1000];
    strcpy(command, "nircmd"); // " special caractere khas ykon msboq b /
    
    strcat(command, " savescreenshot ");
    
    sprintf(command + strlen(command), "%s.png",nom); // ou strcat
    //printf("%s",command);

    // Execute command to save screenshot
    system(command);
    char pic[1000];
    sprintf(pic, "%s.png",nom);
    system(pic);
    

    return 0;
}

