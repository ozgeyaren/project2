#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<conio.h>



 using namespace std ;
 int islem;
 int global_degisken=1;


class shopping {

	

	public:	
		

 static int totalCost;

 char str[100];
 char items[16][100];
 int id;
 int clothingChoice;
 int num;
 int electronicChoise;
 int furnitureChoise;
 void OnlineShopping();
} ;





class banka {

public:


void creditcard();
void check();
	int sayi;
	int balance;
	fileread();
	void Onlinebanka();
	
	
	
	
	
	
};


void banka :: Onlinebanka (){

	static int totalCost;

void creditcard();
void check();
	int sayi;
	int balance;
//	creditcard();
//	check();

	void Onlinebanka();


 	FILE *dosya ;
 	
 	
         char AccountHolder[3][20];
         char IBANNumber [3][20];
         char CardPassword [3][20];
         char BankName [3][20];
         char AccountNumber [3][20];
         char Balance [3][20];
         char CurrencyType [3][20];
         char AccountType [3][20];
         
         char AccountNumber_log[20], CardPassword_log[20], IBANNumber_log[20];
         int control_Flag = 0;
         int i=0, sayac=0;
         
    

		 
        
        while(1){
		
		printf("please enter 0 for credit card  :\n");
		printf("please enter 1 for check :\n");
		printf("otherwise the program is going to close:\n");
		printf("your choie ->");
		scanf("%d", &sayi) ;
		if(sayi== 0) {
		
		
		   creditcard();
		}
		else if(sayi == 1){
		  check();
		}
		else {
			break;
	   }
	}
	
} 


         void creditcard(){
        FILE *dosya;
       	 char AccountHolders[3][20];
         char IBANNumbers [3][20];
         char CardPasswords [3][20];
         char BankNames [3][20];
         char AccountNumbers [3][20];
         char Balances [3][20];
         char CurrencyTypes [3][20];
         char AccountTypes [3][20];
         char AccountHolder[20];
         
     static int totalCost;

        
         
         
         
         char AccountNumber_log[20], CardPassword_log[20], IBANNumber_log[20], AccountHolder_log[20];
         int control_Flag = 0;
         int i=0, sayac=0;
         int sayi;
         
 	
	
 	if( (	dosya=fopen("yarenn.txt", "r") ) !=NULL){
		while(!feof(dosya)) {
		  	fscanf(dosya,"%s %s %s %s %s %s %s %s", &AccountHolders[i],&IBANNumbers[i],&CardPasswords[i],&BankNames[i],&AccountNumbers[i],&Balances[i],&CurrencyTypes[i],&AccountTypes[i]);
		  	i++;
	  	}
	  	
	  	
	  	

	  	printf("please enter your AccountNumber 		: "); 			scanf("%s", &AccountNumber_log);		
     	printf("please enter your CardPassword	: "); 			scanf("%s", &CardPassword_log);
     	i = 0;
		 for(i = 0; i<3 ; i++){
     		if(strcmp(AccountNumbers[i],AccountNumber_log) == 0 and strcmp(CardPasswords[i],CardPassword_log) == 0){
     			printf("\n\n");
     			//printf("AccountHolder %s\n", AccountHolders[i]);
				control_Flag = 1;
				printf("please enter AccountHolder :"); scanf("%s", &AccountHolder_log);
     			if(strcmp(AccountHolders[i],AccountHolder_log)==0)
				 {
     				printf("welcome to inter task %s \n\n", AccountHolders[i]);
     			
     				//////////////////////////// buraya total cost iþlemi gleecek
     				
            					while(1)
					{	
						
		
						printf("\n\n totalCost:");
						scanf("%d",&totalCost);
						if(totalCost<=atoi(Balances[i] ) ) 
						{ 
						 itoa (int(atoi(Balances[i])-totalCost), Balances[i], 10);
							printf(" total cost: %d TL \n",totalCost);
							printf(" new balance: %s TL \n",Balances[i]);
							break;
						}

						else
						{ 
							printf("\n insufficient balance.\n");
							printf(" totalCost.\n\n");
		
							continue;
						}
					}
					printf("\n\n");
					break;

	
     				
     				
				 }
				 else{
				 	printf("your AccountHolder is wrong please try login again\n");
				 	break;
				 }
			 }
		 }
		 if(control_Flag == 0){
		 	printf("there is no person as %s %s\n\n", AccountNumber_log, CardPassword_log);
		 }
 	}
 
  	else
  	{	
  		printf("file can not open") ;
  	}
 	fclose(dosya);
 }
 
 
 
 void check(){
 		FILE *dosya ;
 	   	char AccountHolders[3][20];
         char IBANNumbers [3][20];
         char CardPasswords [3][20];
         char BankNames [3][20];
         char AccountNumbers [3][20];
         char Balances [3][20];
         char CurrencyTypes [3][20];
         char AccountTypes [3][20];
         
         	static int totalCost;

         
         char AccountNumber_log[20], CardPassword_log[20], IBANNumber_log[20], AccountHolder_log[20];
         int control_Flag = 0;
         int i=0, sayac=0;
         int sayi;
         
 		
	
 	if( (	dosya=fopen("yarenn.txt", "r") ) !=NULL){
		while(!feof(dosya)) {
		  	fscanf(dosya,"%s %s %s %s %s %s %s %s", &AccountHolders[i],&IBANNumbers[i],&CardPasswords[i],&BankNames[i],&AccountNumbers[i],&Balances[i],&CurrencyTypes[i],&AccountTypes[i]);
		  	i++;
	  	}

	  	printf("please enter your AccountNumber 		: "); 			scanf("%s", &AccountNumber_log);		
     	printf("please enter your IBANNumber	: "); 			scanf("%s", &IBANNumber_log);
     	i = 0;
		 for(i = 0; i<3 ; i++){
     		if(strcmp(AccountNumbers[i],AccountNumber_log) == 0 and strcmp(IBANNumbers[i],IBANNumber_log) == 0){
     			printf("\n\n");
     			//printf("AccountHolder %s\n", AccountHolders[i]);
				control_Flag = 1;
				printf("please enter AccountHolder :"); scanf("%s", &AccountHolder_log);
     			if(strcmp(AccountHolders[i],AccountHolder_log)==0)
				 {
     				printf("welcome to inter task %s\n\n", AccountHolders[i]);
     				break;
     				///////////////buraya total cost iþlemi gelcek
     				while(1)
					{	
						
		
						printf("\n\n totalCost:");
						scanf("%d",&totalCost);
						if(totalCost<=atoi(Balances[i] ) ) 
						{ 
						 itoa (int(atoi(Balances[i])-totalCost), Balances[i], 10);
							printf(" total cost: %d TL \n",totalCost);
							printf(" new balance: %s TL \n",Balances[i]);
							break;
						}

						else
						{ 
							printf("\n insufficient balance.\n");
							printf(" totalCost.\n\n");
		
							continue;
						}
					}
					printf("\n\n");
					break;
}
				 else{
				 	printf("your AccountHolder is wrong please try login again\n");
				 	break;
				 }
			 }
		 }
		 if(control_Flag == 0){
		 	printf("there is no person as %s %s\n\n", AccountNumber_log, IBANNumber_log);
		 }
 	}
 
  	else
  	{	
  		printf("file can not open") ;
  	}
 	fclose(dosya);
 
 

}




void shopping ::  OnlineShopping() 
{

	
	static int totalCost;
 int i,j,choice,c=1,a[16],cost[16];
 for(i=0;i<16;i++)
 a[i]=0;
 char str[100];
 

	char items[16][100]=
 {
 "Sweater",
 "tshirt",
 "coat",
 "sneakers",
 "short",
 "trousers",
 "laptop",
 "bluetooth headphone",
 "Smart watch"
 "powerbank",
 "smart tv",
 "full hd monitor",
 "dresser",
 "bookshelf",
 "dining table",
 "swivel chair"  
 };	
 
 
     
	 
 
 
 printf("Please Enter Your Name\n");
 gets(str);
 printf("Hello %s, Welcome to our Online Shopping.\n",str);
 do{
  //C is 1 by default
  if(c==1){
  printf("Enter\n1 - Clothing\n2 - Electronic\n3 - Furniture\nAny other number to exit\n");
  scanf("%d",&choice);
  
  
  switch(choice)
  {
   case 1:
   {
    int clothingChoice;
    printf("Enter\n1 - Sweater\n2 - tshirt\n3 - coat\n4 - sneakers\n5 - shorts\n6 - trousers\nAny other number to exit\n");
    scanf("%d",&clothingChoice);
    cost[0]=60;
    cost[1]=45;
    cost[2]=180;
    cost[3]=220;
    cost[4]=75;
    cost[5]=90;
    
    switch(clothingChoice)
    {
    	
    	
     case 1:
     {
      int num;
      printf("You chose Sweater.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=60;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 2:
     {
      int num;
      printf("You chose tshirt.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=45;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     
     case 3:
     {
      int num;
      printf("You chose coat.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=180;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     case 4:
     {
      int num;
      printf("You chose sneakers.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=220;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 5:
     {
      int num;
      printf("You chose shorts.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=75;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     
     case 6:
     {
      int num;
      printf("You chose trousers.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=90;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     
     default:{
      printf("Exit from clothing Accesories\n");
      break;
     }
     
     
     
    }
    break;
   }
   
   /*  seçim 2 a içerideki ürünleridöndürüyor */
   
   case 2:
   {
    int electronicChoice;
    printf("Enter\n1 - laptop\n2 - bluetooth headphone\n3 - smart watch\n4 - powerbank\n5 - smart tv\n6 - full hd monitor\nAny other number to exit\n");
    scanf("%d",&electronicChoice);
    cost[6]=1850;
    cost[7]=180;
    cost[8]=240;
    cost[9]=90;
    cost[10]=950;
    cost[11]=620;
    
    
    switch(electronicChoice)
    {
    	
    	
     case 1:
     {
      int num;
      printf("You chose laptop.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=1850;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 2:
     {
      int num;
      printf("You chose bluetooth headphone.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=180;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 3:
     {
      int num;
      printf("You chose smart watch.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalCost+=240;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 4:
     {
      int num;
      printf("You chose powerbank.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[9]++;
       totalCost+=90;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 5:
     {
      int num;
      printf("You chose smart tv.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[10]++;
       totalCost+=950;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 6:
     {
      int num;
      printf("You chose coat.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[11]++;
       totalCost+=620;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     default:{
      printf("Exit from electronic Category\n");
      break;
     }
     
    }
    break;
   }
   
   
   case 3:
   {
    int furnitureChoice;
    printf("Enter\n1 - dresser\n2 - bookshelf\n3 - dining table\n4 - swivel chair\nAny other number to exit\n");
    scanf("%d",&furnitureChoice);
    cost[12]=105;
    cost[13]=170;
    cost[14]=250;
    cost[15]=85;
    
    
    switch(furnitureChoice)
    {
    	
    	
     case 1:
     {
      int num;
      printf("You chose to buy furniture.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[12]++;
       totalCost+=105;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 2:
     {
      int num;
      printf("You chose to buy bookshelf.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[13]++;
       totalCost+=170;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 3:
     {
      int num;
      printf("You chose to buy dining table.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[14]++;
       totalCost+=250;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     
     case 4:
     {
      int num;
      printf("You chose swivel chair.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[15]++;
       totalCost+=85;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     
     default:{
      printf("Exit from furniture Category\n");
      break;
     }
    }
    
    
    
    break;
   }
   default:
   {
    printf("Enter Valid Categories Choice\n");
    break;
   }
}
  

  
  
  printf("%s's cart\n",str);
  printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
  for(i=0;i<16;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("Total Cost\t\t\t\t\t%d\n",totalCost);
	printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 complete the shopping\n Any other number to Exit\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   if(id<16&&id>0){
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<16;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("Total Cost\t\t\t\t\t%d\n",totalCost);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 complete the shopping\n Any other number to Exit\n");
     scanf("%d",&c);
  }
 



 }while(c==1 || c==2 );
 
 if (c==3) {
 printf("your cart has been approved.\n");
 printf("Your Final Cost is %d\n",totalCost);
 global_degisken = 2;
}

else{	
	 global_degisken = 3;
	printf("you quit the program.your cart will be deleted.\n");
 	printf("Thanks %s for Choosing Us and Visit us again.\n",str);
}

}
      
int main() {
	
	
	
	while(1) {
		if (global_degisken == 1) {
			shopping hesap;
			hesap.OnlineShopping() ;
		}
		else if(global_degisken == 2) 
		{	
			banka abc;
			abc.Onlinebanka();
		}
		else{
			break;	
		}
 
	}
}
 
 
 
 


	





