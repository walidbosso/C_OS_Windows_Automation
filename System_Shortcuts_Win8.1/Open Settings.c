#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    // Generate dynamic file name
 
 system("mode con: cols=15 lines=1");
    // Construct command to save screenshot
    char command[1000];
    
    strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkeypress rwin+I ");
    system(command);
    strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " wait 100 ");
    system(command);
    
     strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey down press ");
    system(command);
     strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey down press ");
    system(command);
     strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey down press ");
    system(command);
     strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey down press ");
    system(command);
     strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey down press ");
    system(command);
    strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey down press ");
    system(command);
    strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey down press ");
    system(command);
    
    strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey down press ");
    system(command);
    
    strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey enter press ");
    system(command);
     
    
 
    return 0;
}

