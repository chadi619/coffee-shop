#include<stdio.h>
#include<windows.h>
#include<conio.h>



main()
{
	int pick,currency;
	char deci;
	//enum coffee{ERROR,ESPRESSO,ESPRESSO_CONPANA,DOPPIO,ESPRESSO_MACCHIATO,AMERICANO,CAPPUCINO,LATTE,FREDO,FRAPPE,MOCHA,IRISH,CARAMEL_MACCHIATO};
	double money=1,t=1,c=1,amount=1,price=1;
	
	printf("\t\t\t\t\t\tMENU\n");
	start:
	printf("\nprice is in USD\n");
	printf("\n1_ESPRESSO: 2.00$\n\n2_ESPRESSO CONPANA: 4.00$\n\n3_DOPPIO: 4.00$\n\n4_ESPRESSO MACCHIATO: 4.00$\n\n5_AMERICANO: 5.00$\n\n6_CAPPUCINO: 6.00$\n\n7_LATTE: 6.00$\n\n8_FREDO: 7.00$\n\n9_FRAPPE: 7.00$\n\n10_MOCHA: 7.00$\n\n11_IRISH: 7.00$\n\n12_CARAMEL MACCHIATO: 7.00$\n");
	
	printf("\nplease pick your coffees number:");
	scanf("%d",&pick);
	printf("number of cups:");
	scanf("%lf",&amount);
	if(amount<=0 || amount>100)
	{
		printf("please chose logical amount");
		Sleep(2000);
		system("cls");
		goto start;
	}
	system("cls");
	
	
	if(pick<=0 || pick>12)
	{
		printf("there is no such a drink \nclick 'E' to exit or 'ENTER KEY' to try again:");
		deci=getch();
		if(deci==13){//enter key in ascii
			goto start;
		}
	}
	else if(pick==1)
	{	price=2.0;
		printf("Coffee you chosed is:ESPRESSO \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==2)
	{
		price=4.0;
		printf("Coffee you chosed is:ESPRESSO CONPANA \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==3)
	{
		price=4.0;
		printf("Coffee you chosed is:DOPPIO \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==4)
	{
		price=4.0;
		printf("Coffee you chosed is:ESPRESSO MACCHIATO \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==5)
	{
		price=5.0;
		printf("Coffee you chosed is:AMERICANO \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==6)
	{
		price=6.0;
		printf("Coffee you chosed is:CAPPUCINO \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==7)
	{
		price=6.0;
		printf("Coffee you chosed is:LATTE \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==8)
	{
		price=7.0;
		printf("Coffee you chosed is:FREDO \nprice is:$%.2f",price*amount);
	
	}
	else if(pick==9)
	{
		price=7.0;
		printf("Coffee you chosed is:FRAPPE \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==10)
	{
	
		price=7.0;
		printf("Coffee you chosed is:MOCHA \nprice is:$%.2f",price*amount);
	}
	else if(pick==11)
	{	
		price=7.0;
		printf("Coffee you chosed is:IRISH \nprice is:$%.2f",price*amount);
		
	}
	else if(pick==12)
	{
		price=7.0;
		printf("Coffee you chosed is:CARAMEL MACCHIATO \nprice is:$%.2f",price*amount);
		
	}
	payment:
	printf("\nplease chose the currency you are going to pay with:");
	printf("\n\n1_MAD\n\n2_USD\n\n3_YEN\n\n4_EURO\n\n5_POUND STERLING\n\n6_AUD(Australian Dollar)\n\n7_LOONIE(Canadian Dollar)");
	printf("\n\nenter number of the currency will be paid with:");
	scanf("%d",&currency);
	if(currency<=0 || currency>7)
	{
		printf("currency is not available!\nClick 'ENTER KEY' to go back to choosing coffee or 'R' to chose another currency of Click 'E' to Exit:");
		deci=getch();
		if(deci==13){
			system("cls");
			goto start;
		}
		else if(deci=='r'){
			system("cls");
			goto payment;
		}
	}
	if(deci!='e'){
	
	printf("put money:");
	scanf("%lf",&money);
}
again:
	switch(currency){
		
		case 1 :
			t=money*0.11;
			c=t-(price*amount);
			if(c>0)
			{
				printf("your change is:%fUSD ",c);
			}
			else if(c==0)
			{
				printf("no change is left");
			}
			else if(c<0){
				printf("\nnot enough money would you like to decrease the amount of cups press 'k' to exite press 'e':");
				deci=getch();
				if(deci=='k')
				{
					amount--;
					goto again;	
				}
				
			}
			break;
		
			case 2:
			t=money;
			if(t-(price*amount)>0)
			{
				printf("your change is:%f",t-(price*amount));
			}
			else if(t-(price*amount)==0)
			{
				printf("no change is left");
			}
			else{
				printf("\nnot enough money would you like to decrease the amount of cups press 'k' to exite press 'e':");
				deci=getch();
				if(deci=='k')
				{
					amount--;
					goto again;	
				}
				
			}

			break;
		
			case 3:
			t=money*0.0086;
			
			if(t-(price*amount)>0)
			{
				printf("your change is:%.2f",t-(price*amount));
			}
			else if(t-(price*amount)==0)
			{
				printf("no change is left");
			}
			else{
				printf("\nnot enough money would you like to decrease the amount of cups press 'k' to exite press 'e':");
				deci=getch();
				if(deci=='k')
				{
					amount--;
					goto again;	
				}
				
			}
			
			break;
		
			case 4:
			t=money*1.15;
			
			if(t-(price*amount)>0)
			{
				printf("your change is:%.2f",t-(price*amount));
			}
			else if(t-(price*amount)==0)
			{
				printf("no change is left");
			}
			else{
				printf("\nnot enough money would you like to decrease the amount of cups press 'k' to exite press 'e':");
				deci=getch();
				if(deci=='k')
				{
					amount--;
					goto again;	
				}
				
			}
			
			break;
		
			case 5:
		
			t=money*1.36;
		
			if(t-(price*amount)>0)
			{
				printf("your change is:%.2f",t-(price*amount));
			}
			else if(t-(price*amount)==0)
			{
				printf("no change is left");
			}
			else{
				printf("\nnot enough money would you like to decrease the amount of cups press 'k' to exite press 'e':");
				deci=getch();
				if(deci=='k')
				{
					amount--;
					goto again;	
				}
				
			}
			
			break;
			
			case 6:
			t=money*0.76;
			
			if(t-(price*amount)>0)
			{
				printf("your change is:%.2f",t-(price*amount));
			}
			else if(t-(price*amount)==0)
			{
				printf("no change is left");
			}
			else{
				printf("\nnot enough money would you like to decrease the amount of cups press 'k' to exite press 'e':");
				deci=getch();
				if(deci=='k')
				{
					amount--;
					goto again;	
				}
				
			}
			
			break;
			
			case 7:
			t=money*0.79;
		
			if(t-(price*amount)>0)
			{
				printf("your change is:%.2f",t-(price*amount));
			}
			else if(t-(price*amount)==0)
			{
				printf("no change is left");
			}
			else{
				printf("\nnot enough money would you like to decrease the amount of cups press 'k' to exite press 'e':");
				deci=getch();
				if(deci=='k')
				{
					amount--;
					goto again;	
				}
				
			}
			
			break;
	}
}
