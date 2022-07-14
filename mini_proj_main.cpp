//include space
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<process.h>

//defining symbols
#define spade 06 //Used to print spade symbol
#define club 05  //Used to print club symbol
#define diamond 04 //Used to print diamond symbol
#define heart 03 //Used to print heart symbol

//glbal variables
int i; //to switch between player and dealer
int a; //for 1 to 13 of player
int b; //for 1 to 4 of player
int c; //for 1 to 13 of dealer
int d; // for 1 to 4 of dealer
int tot1; //total for player
int tot2; //total for dealer
int final1; //total of player for stand
int final2; //total of dealer after player stands
char play_ch; //choose between hit or stand 

//functions used
void choices();
void num_cards_player(int su1);
void face_cards_player(int ca1);
void num_cards_dealer(int su2);
void face_cards_dealer(int ca2);
void rules();
void play();

//main function
int main()
{
	system("COLOR 02"); // Background color changing function
	printf("\n");
    printf("\n");
    printf("\n");
    printf("\n              222                111                            ");
    printf("\n            222 222            11111                              ");
    printf("\n           222   222          11 111                            "); 
    printf("\n                222              111                               "); 
    printf("\n               222               111                           ");   
    printf("\n");
    printf("\n%c%c%c%c%c     %c%c            %c%c         %c%c%c%c%c    %c    %c                ", club, club, club, club, club, spade, spade, diamond, diamond, heart, heart, heart, heart, heart, club, club);  
    printf("\n%c    %c    %c%c           %c  %c       %c     %c   %c   %c              ", club, club, spade, spade, diamond, diamond, heart, heart, club, club);            
    printf("\n%c    %c    %c%c          %c    %c     %c          %c  %c               ", club, club, spade, spade, diamond, diamond, heart, club, club);                        
    printf("\n%c%c%c%c%c     %c%c          %c %c%c %c     %c          %c %c              ", club, club, club, club, club, spade, spade, diamond, diamond, diamond, diamond, heart, club, club);      
    printf("\n%c    %c    %c%c         %c %c%c%c%c %c    %c          %c%c %c             ", club, club, spade, spade, diamond, diamond, diamond, diamond, diamond, diamond, heart, club, club, club);                       
    printf("\n%c     %c   %c%c         %c      %c    %c          %c   %c               ", club, club, spade, spade, diamond, diamond, heart, club, club);                                         
    printf("\n%c     %c   %c%c        %c        %c    %c     %c   %c    %c             ", club, club, spade, spade, diamond, diamond, heart, heart, club, club);                                                            
    printf("\n%c%c%c%c%c%c    %c%c%c%c%c%c%c   %c        %c     %c%c%c%c%c    %c     %c            ", club, club, club, club, club, club, spade, spade, spade, spade, spade, spade, spade, diamond, diamond, heart, heart, heart, heart, heart, club, club);                                                                                     
    printf("\n");     
    printf("\n                        21                                   ");
     
    printf("\n     %c%c%c%c%c%c%c%c      %c%c         %c%c%c%c%c    %c    %c                ", diamond, diamond, diamond, diamond, diamond, diamond, diamond, diamond, heart, heart, club, club, club, club, club, spade, spade);                     
    printf("\n        %c%c        %c  %c       %c     %c   %c   %c              ", diamond, diamond, heart, heart, club, club, spade, spade);                                      
    printf("\n        %c%c       %c    %c     %c          %c  %c               ", diamond, diamond, heart, heart, club, spade, spade);                                           
    printf("\n        %c%c       %c %c%c %c     %c          %c %c              ", diamond, diamond, heart, heart, heart, heart, club, spade, spade);                                     
    printf("\n        %c%c      %c %c%c%c%c %c    %c          %c%c %c             ", diamond, diamond, heart, heart, heart, heart, heart, heart, club, spade, spade, spade);                                                
    printf("\n        %c%c      %c      %c    %c          %c   %c               ", diamond, diamond, heart, heart, club, spade, spade);                                                                               
    printf("\n     %c  %c%c     %c        %c    %c     %c   %c    %c             ", diamond, diamond, diamond, heart, heart, club, spade, spade);                                                                                                               
    printf("\n      %c%c%c      %c        %c     %c%c%c%c%c    %c     %c            ", diamond, diamond, diamond, heart, heart, club, club, club, club, club, spade, spade);                                                                                                                                        
    printf("\n");  
    printf("\n         222                     111                         ");
    printf("\n        222                      111                         ");
    printf("\n       222                       111                         ");
    printf("\n      222222222222222      111111111111111                       ");
    printf("\n      2222222222222222    11111111111111111                         ");
    printf("\n");
    printf("\n");
	int choice=-1; //main choice
	printf("Welcome to BLACKJACK!!");
	printf("\nEnter 1 to Begin the Greatest Game Ever Played.");
    printf("\nEnter 2 to See a Complete Listing of Rules.");
    printf("\nEnter 3 to Exit Game. (Not Recommended)");
    printf("\nEnter choice:");
    while(choice != 1 || choice != 2 || choice != 3)
    {
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:{
    		system("cls");
    		play();
			break;
		}
		case 2:{
			system("cls");
			rules();
			choices();
			break;
		}
		case 3:{
			system("cls");
			printf("Sorry To Hear That '^' ");
			exit(0);
			break;
		}
		default:{
			printf("Wrong Input!! Please Try Again\n");
			break;
		}
	}
	}
}
void choices()
{
			printf("Are You Now Ready To Play The Greatest Game Ever?!(Enter Y or N)\n");
			char cho; //Choice to start or exit
			scanf("%c",&cho);
			while(cho!='Y' && cho!='y' && cho!='N' && cho!='n')
			{
				scanf("%c",&cho);
				printf("Wrong Input! Please Try Again\n");
		}
		if(cho=='Y' || cho=='y')
		{
			system("cls");
    		play();
		}
		else if(cho=='N' || cho=='n')
		{
			system("cls");
			printf("Sorry To Hear That '^' ");
			exit(0);
		}
}
void num_cards_player(int su1)
{
	if(su1==1)
	{
		printf("-------\n");
    	printf("|%c    |\n", heart); 
    	printf("|  %d  |\n", a);
    	printf("|    %c|\n", heart);
    	printf("-------\n");
		printf("You Got %d Of Hearts\n",a);
	}
	else if(su1==2)
	{
	printf("-------\n");
    printf("|%c    |\n", diamond);
    printf("|  %d  |\n", a);
    printf("|    %c|\n", diamond);
    printf("-------\n");
	printf("You Got %d Of Diamonds\n",a);	
	}
	else if(su1==3)
	{
	printf("-------\n");
    printf("|%c    |\n", spade);
    printf("|  %d  |\n", a);
    printf("|    %c|\n", spade);
    printf("-------\n");
	printf("You Got %d Of Spades\n",a);
	}
	else if(su1==4)
	{
	printf("-------\n");
    printf("|%c    |\n", club);
    printf("|  %d  |\n", a);
    printf("|    %c|\n", club);
    printf("-------\n");
	printf("You Got %d Of Clubs\n",a);
	}
}
void face_cards_player(int ca1)
{
	if(ca1==11)
	{
		if(b==1)
		{
		printf("-------\n");
    	printf("|%c    |\n", heart);
    	printf("|  J  |\n");
    	printf("|    %c|\n", heart);
    	printf("-------\n");
		printf("You Got J Of Hearts\n");
		a=10;}
		else if(b==2)
		{
		printf("-------\n");
    	printf("|%c    |\n", diamond);
    	printf("|  J  |\n");
    	printf("|    %c|\n", diamond);
    	printf("-------\n");
		printf("You Got J Of Diamonds\n");
		a=10;}
		else if(b==3)
		{
		printf("-------\n");
    	printf("|%c    |\n", spade);
    	printf("|  J  |\n");
    	printf("|    %c|\n", spade);
    	printf("-------\n");
		printf("You Got J Of Spades\n");
		a=10;}
		else if(b==4)
		{
		printf("-------\n");
    	printf("|%c    |\n", club);
    	printf("|  J  |\n");
    	printf("|    %c|\n", club);
    	printf("-------\n");
		printf("You Got J Of Clubs\n");
		a=10;}
	}
	else if(ca1==12)
	{
		if(b==1)
		{
		printf("-------\n");
    	printf("|%c    |\n", heart);
    	printf("|  Q  |\n");
    	printf("|    %c|\n", heart);
    	printf("-------\n");
		printf("You Got Q Of Hearts\n");
		a=10;}
		else if(b==2)
		{
		printf("-------\n");
    	printf("|%c    |\n", diamond);
    	printf("|  Q  |\n");
    	printf("|    %c|\n", diamond);
    	printf("-------\n");
		printf("You Got Q Of Diamonds\n");
		a=10;}
		else if(b==3)
		{
		printf("-------\n");
    	printf("|%c    |\n", spade);
    	printf("|  Q  |\n");
    	printf("|    %c|\n", spade);
    	printf("-------\n");
		printf("You Got Q Of Spades\n");
		a=10;}
		else if(b==4)
		{
		printf("-------\n");
    	printf("|%c    |\n", club);
    	printf("|  Q  |\n");
    	printf("|    %c|\n", club);
    	printf("-------\n");
		printf("You Got Q Of Clubs\n");
		a=10;}
	}
	else if(ca1==13)
	{
		if(b==1)
		{
		printf("-------\n");
    	printf("|%c    |\n", heart);
    	printf("|  K  |\n");
    	printf("|    %c|\n", heart);
    	printf("-------\n");
		printf("You Got K Of Hearts\n");
		a=10;}
		else if(b==2)
		{
		printf("-------\n");
    	printf("|%c    |\n", diamond);
    	printf("|  K  |\n");
    	printf("|    %c|\n", diamond);
    	printf("-------\n");
		printf("You Got K Of Diamonds\n");
		a=10;}
		else if(b==3)
		{
		printf("-------\n");
    	printf("|%c    |\n", spade);
    	printf("|  K  |\n");
    	printf("|    %c|\n", spade);
    	printf("-------\n");
		printf("You Got K Of Spades\n");
		a=10;}
		else if(b==4)
		{
		printf("-------\n");
    	printf("|%c    |\n", club);
    	printf("|  K  |\n");
    	printf("|    %c|\n", club);
    	printf("-------\n");
		printf("You Got K Of Clubs\n");
		a=10;}
	}
}
void num_cards_dealer(int su2)
{
	if(su2==1)
	{
	printf("-------\n");
    printf("|%c    |\n", heart); 
    printf("|  %d  |\n", c);
    printf("|    %c|\n", heart);
    printf("-------\n");
	printf("The Dealer Got %d Of Hearts\n",c);}
	else if(su2==2)
	{
	printf("-------\n");
    printf("|%c    |\n", diamond);
    printf("|  %d  |\n", c);
    printf("|    %c|\n", diamond);
    printf("-------\n");
	printf("The Dealer Got %d Of Diamonds\n",c);}
	else if(su2==3)
	{
	printf("-------\n");
    printf("|%c    |\n", spade);
    printf("|  %d  |\n", c);
    printf("|    %c|\n", spade);
    printf("-------\n");
	printf("The Dealer Got %d Of Spades\n",c);}
	else if(su2==4)
	{
	printf("-------\n");
    printf("|%c    |\n", club);
    printf("|  %d  |\n", c);
    printf("|    %c|\n", club);
    printf("-------\n");
	printf("The Dealer Got %d Of Clubs\n",c);}
}
void face_cards_dealer(int ca2)
{
	if(ca2==11)
	{
		if(d==1)
		{
		printf("-------\n");
    	printf("|%c    |\n", heart);
    	printf("|  J  |\n");
    	printf("|    %c|\n", heart);
    	printf("-------\n");
		printf("The Dealer Got J Of Hearts\n");
		c=10;}
		else if(d==2)
		{
		printf("-------\n");
    	printf("|%c    |\n", diamond);
    	printf("|  J  |\n");
    	printf("|    %c|\n", diamond);
    	printf("-------\n");
		printf("The Dealer Got J Of Diamonds\n");
		c=10;}
		else if(d==3)
		{
		printf("-------\n");
    	printf("|%c    |\n", spade);
    	printf("|  J  |\n");
    	printf("|    %c|\n", spade);
    	printf("-------\n");
		printf("The Dealer Got J Of Spades\n");
		c=10;}
		else if(d==4)
		{
		printf("-------\n");
    	printf("|%c    |\n", club);
    	printf("|  J  |\n");
    	printf("|    %c|\n", club);
    	printf("-------\n");
		printf("The Dealer Got J Of Clubs\n");
		c=10;}
	}
	else if(ca2==12)
	{
		if(d==1)
		{
		printf("-------\n");
    	printf("|%c    |\n", heart);
    	printf("|  Q  |\n");
    	printf("|    %c|\n", heart);
    	printf("-------\n");
		printf("The Dealer Got Q Of Hearts\n");
		c=10;}
		else if(d==2)
		{
		printf("-------\n");
    	printf("|%c    |\n", diamond);
    	printf("|  Q  |\n");
    	printf("|    %c|\n", diamond);
    	printf("-------\n");
		printf("The Dealer Got Q Of Diamonds\n");
		c=10;}
		else if(d==3)
		{
		printf("-------\n");
    	printf("|%c    |\n", spade);
    	printf("|  Q  |\n");
    	printf("|    %c|\n", spade);
    	printf("-------\n");
		printf("The Dealer Got Q Of Spades\n");
		c=10;}
		else if(d==4)
		{
		printf("-------\n");
    	printf("|%c    |\n", club);
    	printf("|  Q  |\n");
    	printf("|    %c|\n", club);
    	printf("-------\n");
		printf("The Dealer Got Q Of Clubs\n");
		c=10;}
	}
	else if(ca2==13)
	{
		if(d==1)
		{
		printf("-------\n");
    	printf("|%c    |\n", heart);
    	printf("|  K  |\n");
    	printf("|    %c|\n", heart);
    	printf("-------\n");
		printf("The Dealer Got K Of Hearts\n");
		c=10;}
		else if(d==2)
		{
		printf("-------\n");
    	printf("|%c    |\n", diamond);
    	printf("|  K  |\n");
    	printf("|    %c|\n", diamond);
    	printf("-------\n");
		printf("The Dealer Got K Of Diamonds\n");
		c=10;}
		else if(d==3)
		{
		printf("-------\n");
    	printf("|%c    |\n", spade);
    	printf("|  K  |\n");
    	printf("|    %c|\n", spade);
    	printf("-------\n");
		printf("The Dealer Got K Of Spades\n");
		c=10;}
		else if(d==4)
		{
		printf("-------\n");
    	printf("|%c    |\n", club);
    	printf("|  K  |\n");
    	printf("|    %c|\n", club);
    	printf("-------\n");
		printf("The Dealer Got K Of Clubs\n");
		c=10;}
	}
}
void rules()
{
	printf("\n           RULES of BLACKJACK");
     printf("\n          ---------------------------");
     printf("\nI.");
     printf("\n     Thou shalt not question the odds of this game.");
     printf("\n      %c This program generates cards at random.", spade);
     printf("\n      %c If you keep losing, you are very unlucky!\n", diamond);
      
     printf("\nII.");
     printf("\n     Each card has a value.");
     printf("\n      %c Number cards 1 to 10 hold a value of their number.", spade);
     printf("\n      %c J, Q, and K cards hold a value of 10.", diamond);
     printf("\n      %c Ace cards hold a value of 11", club);
     printf("\n     The goal of this game is to reach a card value total of 21.\n");
      
     printf("\nIII.");
     printf("\n     After the dealing of the first two cards, YOU must decide whether to HIT or STAY.");
     printf("\n      %c Staying will keep you safe, hitting will add a card.", spade);
     printf("\n     Because you are competing against the dealer, you must beat his hand.");
     printf("\n     BUT BEWARE!.");
     printf("\n      %c If your total goes over 21, you will LOSE!.", diamond);
     printf("\n     But the world is not over, because you can always play again.\n");
     printf("\n\n");
}
void play()
{
	tot1=0;
	tot2=0;
	srand(time(0));
	while(tot1<21 && tot2<21)
	{
		printf("Would You Like To Hit Or Stand?\n");
		scanf("%s",&play_ch);
		a=rand() % 13 + 1;
		b=rand()% 4 + 1;
		c=rand() % 13 + 1;
		d=rand()% 4 + 1;
		if(play_ch=='H' || play_ch=='h')
		{
			if(tot2<17)
			{
				if(a<=10)
				{
					num_cards_player(b);
				}
				else
				{
					face_cards_player(a);
				}
				if(c<=10)
				{
					num_cards_dealer(d);
				}
				else
				{
					face_cards_dealer(c);
				}
				tot1+=a;
				tot2+=c;
				system("pause");
				printf("Your Total Is %d\n",tot1);
				system("pause");
				printf("The Dealer's Total Is %d\n",tot2);
				system("pause");
			}
			else if(tot2>=17)
			{
				if(a<=10)
				{
					num_cards_player(b);
				}
				else
				{
					face_cards_player(a);
				}
				tot1+=a;
				system("pause");
				printf("Your Total Is %d\n",tot1);
				system("pause");
				printf("The Dealer's Total Is %d\n",tot2);
				system("pause");
			}
			final1=tot1;
			final2=tot2;
		}
		else if(play_ch=='S' || play_ch=='s')
		{
			if(tot2>17)
			{
				final1=tot1;
				final2=tot2;
				system("pause");
				printf("Your Total Is %d\n",final1);
				system("pause");
				printf("The Dealer's Total is %d\n",final2);
				system("pause");
			}
			else if(tot2<17)
			{
				final1=tot1;
				while(tot2<17)
				{
					system("pause");
					printf("As The Dealer Still Has Less Than 17 He Keeps Drawing\n");
					c=rand() % 13 + 1;
					d=rand()% 4 + 1;
					if(c<=10)
					{
						num_cards_dealer(d);
					}
					else
					{			
						face_cards_dealer(c);
					}
					tot2+=c;
					system("pause");
					printf("The Dealer's Total Is %d\n",tot2);
					system("pause");
				}
				final2=tot2;
				system("pause");
				printf("Your Total Is %d\n",final1);
//				printf("The Dealer's Total is %d\n",final2);
			}
			break;
		}
	}
	if(final1>21 && final2<21)
	{
		system("cls");
		printf("Aw Snap!\n");
		printf("You Have Gone Over 21\n");
		printf("You Lose!\n");
	}
	else if(final2>21 && final1<21)
	{
		system("cls");
		printf("YAAY!!\n");
		printf("The Dealer Has Gone Over 21\n");
		printf("You Win!!\n");
	}
	else if(final1>21 && final2>21)
	{
		system("cls");
		printf("YAAY!!\n");
		printf("The Dealer Has Gone Over 21\n");
		printf("You Win!!\n");
	}
	else if(final1<21 && final2<21 &&final1>final2)
	{
		system("cls");
		printf("YAAY!!\n");
		printf("Your Total Is Greater Than The Dealer's Total\n");
		printf("You Win!!\n");
	}
	else if(final1<21 && final2<21 &&final1<final2)
	{
		system("cls");
		printf("Aw Snap!\n");
		printf("Your Total Is Less Than The Dealer's Total\n");
		printf("You Lose!\n");
	}
	else if(final1==21)
	{
		system("cls");
		printf("YAAY!!\n");
		printf("You Got 21\n");
		printf("You Win!!\n");
	}
	else if(final2==21)
	{
		system("cls");
		printf("Aw Snap!\n");
		printf("The Dealer Got 21\n");
		printf("You Lose!\n");
	}
	printf("\n\n");
	printf("Game Over!!\n");
	printf("Woud You Like To Play Again?(Y or N)\n");
	char again;
	scanf("%s",&again);
	while(again!='Y' && again!='y' && again!='n' && again!='N')
	{
		printf("Invalid Input Try Again\n");
		scanf("%s",&again);
	}
	if(again=='Y' || again=='y')
	{
	system("cls");
	play();}
	else if(again=='N' || again=='n')
	exit(0);
}
