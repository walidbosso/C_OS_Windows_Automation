
#include <stdio.h>
#include <process.h>

int main()
{	system("color f9"); //75
    int choice=0;

   do{
   
    printf("***************************************\n");
    printf(" Power Tools :\n\n");
    printf("   1. Eteindre l'ordinateur...\n");
    printf("   2. Redemarrer...\n");
    printf("   3. Verrouiller...\n");
    printf("   4. Metter En Veille...\n");
    printf("   5. Deconnecter compte (Pas besoin!)\n");
    printf("\n***************************************\n");
    printf(" Informations :\n\n");
    printf("   6. System Information...\n");
    printf("   7. Pilotes...\n"); 
    printf("   8. Hotspot Management...\n");
    printf("   9. Wifi Configuration...\n");
    printf("   10. Temps avant Veille et Eteindre..\n");
    printf("   11. IP-Adresse(ipconfig)...\n");
    printf("   12. Tous infos de PC(systeminfo)...\n");		  
    printf("   13. Clavier Visuel...\n");
    printf("   14. Programmes et desinstallations..\n");
    printf("\n***************************************\n");
    printf(" Projection :\n\n");
    
    printf("   15. Dupliquer...\n");
    printf("   16. Resolution et affichage...\n");
    printf("   17. Ecran du Pc uniquement...\n");
    
    printf("\n***************************************\n");
    printf("   0. Quitter...\n");
    
    printf("\n***************************************\n");

    printf("\n   Choisit le numero convenable : ");
    printf("\n       --> ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0:
           
			system("exit"); //
            
        break;
		case 1:
            system("SHUTDOWN -S -t 0");
            
            break;
        case 2:
            system("SHUTDOWN -r -t 0");
         
            break;
        case 3:
            system("rundll32.exe user32.dll,LockWorkStation"); //verouiller, lock
           
            
            break;
	    case 4:
	        system("SHUTDOWN -h"); //veille
	       
        	break;
        case 5:
	        system("SHUTDOWN -l");
	        
	        /*------------------------------*/
	        
	        break;
        case 6:
	        system("msinfo32");
	        
	        system("cls");
	        
	        
	        break;
	    case 7:
	        system("devmgmt.msc");
	        
			system("cls");    
	        break;
	    case 8:
	        system("start PATH_TO\\Hotspot");
	        
	        system("cls");
	       
	    break;
        case 9:
	        system("ncpa.cpl");
	        
	        system("cls");
	       
	    break;
	     case 10:
	        system("control /name Microsoft.PowerOptions /page pagePlanSettings");
	          
			system("cls"); 
	        break;
		case 11:
	        system("ipconfig");
	        system("pause");
	        system("cls");break;
	      case 12:
	        system("systeminfo"); 
			system("pause");
			system("cls");   
	            
	        break;
	   
		case 13:
	        system("osk.exe");
			  
			system("cls"); 
	        break;
		case 14:
	        system("control appwiz.cpl"); 
			
			system("cls");  
	        break;    
   
	    case 15:
	        system("displayswitch /clone"); 
			
			system("cls");   
	        break;
	    case 16:
	        system("desk.cpl"); 
	        
			system("cls");   
	        break;
	     case 17:
	        system("displayswitch /internal"); 
			system("pause");
			system("cls");   
	        break;
	    
	  
        default:
            printf("\n Choix invalide ! "); 
			// start telegram, taskkill /im telegram (quitter), taskill /im telegram /f (kill), taskkil /pid 123 '/f'
            system("pause");
            system("cls");
    }
}while(choice!=0 && choice!=1 && choice!=2 && choice!=3 && choice!=4 && choice!=5);
    return 0;

}
