#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
     system("mode con: cols=15 lines=1");
    
    char command[1000];
    
    strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkeypress rwin+B ");
    system(command);
    strcpy(command, " \"C:\\Users\\packardbell\\Desktop\\Apps Desktop\\Apps files\\EcMenu_v1.6\\Files\\nircmd\\nircmd_x64.exe\"");
    
   
    
    strcat(command, " sendkey right press ");
    system(command);
    
    
     strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey right press ");
    system(command);
    
    
     strcpy(command, " \"PATH_TO\\nircmd_x64.exe\"");
    
    strcat(command, " sendkey spc press ");
    system(command);
    
 
  
     
    
 
    return 0;
}

