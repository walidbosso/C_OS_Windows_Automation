#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {

 system("mode con: cols=15 lines=1");


    char command[1000];
    
    strcpy(command, "nircmd");
    
    strcat(command, " sendkeypress rwin+B ");
    system(command);
    strcpy(command, "nircmd");
    
    strcat(command, " sendkey right press ");
    system(command);
    
    
     strcpy(command, "nircmd");
    
    strcat(command, " sendkey right press ");
    system(command);
    
    
     strcpy(command, "nircmd");
    
    strcat(command, " sendkey spc press ");
    system(command);
    
 
 
    strcpy(command, "nircmd");
    
    strcat(command, " wait 100 ");
    system(command);
    
    strcpy(command, "nircmd");
    
    strcat(command, " sendkey down press ");
    system(command);
    
    strcpy(command, "nircmd");
    
    strcat(command, " sendkey spc press ");
    system(command);
     
    
 
    return 0;
}

