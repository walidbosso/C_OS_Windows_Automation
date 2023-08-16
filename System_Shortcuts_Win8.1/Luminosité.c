#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {

 	system("mode con: cols=15 lines=1");

    char command[1000];
    
    strcpy(command, "nircmd");
    
    strcat(command, " sendkeypress rwin+I ");
    system(command);
    strcpy(command, "nircmd");
    
    strcat(command, " wait 500 ");
    system(command);
     strcpy(command, "nircmd");
    
    strcat(command, " sendkey down press ");
    system(command);
    
    
     strcpy(command, "nircmd");
    
    strcat(command, " sendkey down press ");
    system(command);
    
    
     strcpy(command, "nircmd");
    
    strcat(command, " sendkey down press ");
    system(command);
    
 
     strcpy(command, "nircmd");
    
    strcat(command, " sendkey down press ");
    system(command);
    
  
   
     strcpy(command, "nircmd");
    
    strcat(command, " sendkey right press ");
    system(command);
    strcpy(command, "nircmd");
    
    strcat(command, " sendkey right press ");
    system(command);
 
    
    strcpy(command, "nircmd");
    
    strcat(command, " sendkey enter press ");
    system(command);
     
    
 
    return 0;
}

