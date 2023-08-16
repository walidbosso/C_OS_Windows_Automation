
#include <stdio.h>
#include <process.h>
#include <string.h>

int main()
{	
    int choice=0;
    char name[100];
    char command[200];

   do {
    printf("\n***********************************************\n");
    printf(" Hotspot Configuration: :\n\n");
    printf("   1. Allow and Start Hotspot ...\n");  
    printf("   2. Stop and disallow Hotspot...\n");
    printf("   3. Show Hotspot Informations...\n");
    printf("   4. Open Wifi Configuration...\n");  
    printf("   5. Change when laptop hibernate...\n");  
    printf("\n***********************************************\n");
    printf("   0. Exit...\n");  
    printf("\n***********************************************\n");
    printf("\n  Choose a number : ");
    printf("\n  --> ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0:         
			system("exit");          
            break;
		case 1:	
			printf("\n");
			system("ncpa.cpl");
            system("netsh wlan set hostednetwork mode=allow");
            system("netsh wlan start hostednetwork");            
            system("netsh wlan show hostednetwork");
            printf("P.S. This will open wi-fi configuration!'...\n     Right-click on Wi-Fi -> Properties \n     -> Share Tap -> Enable first option\n     Choose The Hotspot in Dropdown, Press Ok\n\n");
			system("pause");
            system("cls");
            
            break;
	    case 2:	
			printf("\n");        
	        system("netsh wlan stop hostednetwork");
	        system("netsh wlan set hostednetwork mode=disallow");
			system("netsh wlan show hostednetwork");	
	        system("pause");
	        system("cls");	        
	        break;
	    
        case 3:       	
	        system("netsh wlan show hostednetwork");
	        system("pause");
	        system("cls");
	    break;

	    case 4:
	        system("ncpa.cpl");
	        system("cls");  
	        break;
	     case 5:
	        system("control /name Microsoft.PowerOptions /page pagePlanSettings");
		
			system("cls"); // control /name Microsoft.System pour Version Windows
	        break;
       
	   
        default:
            printf("\n  Choix invalide ! \n"); //devmgmt.msc pilotes  //desk.cpl projecter Win+P + resolution //systeminfo tous infos de PC
            system("pause");
            system("cls");
    }
}while (choice != 0);

    return 0;

}
