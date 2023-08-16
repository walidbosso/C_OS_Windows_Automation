#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    // Generate dynamic file name
 	system("mode con: cols=15 lines=1");
//start /B cmd /c "mode con: cols=15 lines=1 x=0 y=0"
    // Construct command to save screenshot
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

