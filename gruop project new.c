#include<windows.h>
#include<stdio.h>

	int i,j,s,d,n,c,a,f,k;
	char A[3][20]={"Starting station","Stopping station","Distances"};
	int B[15][3]={{1,2,34},{1,3,151},{1,4,180},{1,5,214},{1,6,314},{2,3,142},
	{2,4,173},{2,5,181},{2,6,281},{3,4,28},{3,5,39},{3,6,95},{4,5,15},{4,6,63},{5,6,48}};
	char C[6][15]={"Monaragala","Wellawaya","Rathnapura","Eheliyagoda","Avissawella","Colombo"};	


	
void main(){
	printf("\a");
	for(i=0; i<2; i++)
    {
	printf("\n\n\n\n\n\n\t\t ========================================================================================");
	printf("\n\n");
	printf("\n\t\t\t\t                   WELCOME TO BUS SYSTEM                   "); 
	printf("\n");
	 printf("\n\n\t\t ========================================================================================");
	  Sleep(400);
      system("cls");
      Sleep(400);
      }
   
    selection();	

//switch cases
if(a<4){
	switch(a){
		
	   case 1:
	   	destinations(); //functions
	   	table();
		
	   case 2:
	   	destinations();
		data();
		printf("\a");
		ticket();
		calculation();
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
		break;
	   
   
	}}
	else{
		printf("\n\t\t\tInvalid Value...................................");
		selection();
		
	}	 
}

//selection method
int selection(){
	printf("\n\n\t=========================================== TICKET MACHINE ============================================\n\n\n");
	printf("\n\n\t\t\tPlease enter your choice from below (1-3):");
	printf("\n\n\n\t\t\t[1] ===> Search for distance\n\n");
	printf("\t\t\t[2] ===> Issue a ticket\n\n");
	printf("\t\t\t[3] ===> Exit\n\n");
	printf("\n\n\t=======================================================================================================\n\n\n");
	printf("\t\t\tYOUR CHOICE  -  ");
	scanf("%d",&a);
}	
//destinations
 int destinations(){
     printf("\n\n\n\tDestinations\t:\n\n");
     for(i=0;i<6;i++){
     printf("\t\t%d  -  %s \n",i+1,C[i]);
}
}


//table about distances
int table(){
	printf("\n\n");
	 printf("----------------------------Distances---------------------------\n\n\n");
	for(i=0;i<3;i++){
		printf("   %3s\t",A[i]);
}
   printf("\n\n");
	 for(i=0;i<15;i++){
	for(j=0;j<3;j++){
		printf("\t%3d\t\t",B[i][j]);
	}
    printf("\n");	
}
}
//input information
int data(){

	printf("\n\n\n\tStarting station\t :  ");
	scanf("%d",&s);
	printf("\n\tDestination\t\t :  ");
	scanf("%d",&d);
	printf("\n\tNo of passengers\t :  ");
	scanf("%d",&n);
	
}


//issue a ticket
int ticket(){
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
    printf("\n\n\n       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    printf("\n\t\t TICKET");
    printf("\n       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    printf("\n\n");
    printf("\t\tMonaragala");
    printf("\n\t\tRoute:98/2");
    printf("\n\t    Monaragala-Colombo\n");
    time_t t;   
    time(&t);
   	printf("\n\t %s\n", ctime(&t));
 
}
 //calculation
 int calculation(){
 	int p=5;  // fare for 1km
 
 	for(i=0;i<15;i++){
 		for(j=0;j<2;j++){
 			if(s==B[i][j]){
 				
 		        for(k=0;k<2;k++){
 			      if(d==B[i][k]){
 				 
 				  printf("\n\n\t  %s - %s",C[s-1],C[d-1]);
 				  printf("\n\t    (Journey - %d KM)",B[i][2]);
   	              printf("\n\t  FULL : %.f * Rs.%.2f ",(float)n,(float)p*B[i][2]);
   	              printf("\n\t     TOTAL = %.2f ",n*(float)p*B[i][2]);	
			      }
			      
			    }
			 } 
			 
 		}	
	 
	 
	 
	  }
	  
	 
	printf("\n\n\tDepot Hotline : 0552276281");
    printf("\n\n       ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
    printf("\n");
    printf("\n");
    
   
    
 }
