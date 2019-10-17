#include<iostream.h>
//BY HSB
void main()
{
   clrscr();  char ch;int d;int ab;int map();map();void intro();intro();void inro2();inro2();
  do{ clrscr();cout<<endl<<endl<<endl<<endl<<"-_--_--_-_--_-_-- Welcome to MULTI-FUNCTIONAL PROGRAM -_-_--_-_--_-_--_";
   cout<<endl<<"Hello Noble Human (You must be here to judge me ^-^ ^o^ ) "<<endl<<endl<<"I am programmed to show the skills of creators by  performing one these things  you choose.";
   cout<<endl<<endl<<"1.) Print a 'Hello World' program code."<<endl<<"2.) Print a pattern. "<<endl<<"3.) Print Even or Odd numbers in a specified range."<<endl<<"4.) Print Prime numbers in a given range.  "<<endl<<"5.) Program to take food order."<<endl<<"6) Print 5 Questions Randomly ."<<endl<<"7.) Small Game. "/*<<endl<<"8.) Some jokes"*/<<endl<<endl<<" Enter the corresponding number : ";
   cin>>ab;
	 void hello();void pattern();void cipher();void Eve();void Prim();void Ord();void ques();void guess();
	 switch(ab)
	 {
		 case 1:hello();
		 break;

		  case 2: pattern();
		  break;
		  case 3:Eve();
		  break;
		  case 4:Prim();
		  break;
		  case 5:Ord();
		  break;
		  case 6:ques();
		  break;
		  case 7:guess();
		  break;
		 // case 8:break;
	      default : cout<<"wrong choice";
	 }clrscr();cout<<endl<<"Wanna Go to Main Menu enter y or n : "<<endl;cin >>ch;if((ch=='y')||(ch=='Y')){d=1;}else{d=0;} }while(d==1);clrscr();
	 cout<<endl<<"@@@@@@@  @@    @@   @@@@@   @@@    @   @@    @@   @@    @@     @@@    @@  @@  ";
	 cout<<endl<<"   @@    @@    @@  @@   @@  @@ @   @   @@  @@      @@  @@    @@  @@   @@  @@  ";
	 cout<<endl<<"   @@    @@@@@@@@  @@   @@  @@  @  @   @@@@          @@     @@    @@  @@  @@  ";
	 cout<<endl<<"   @@    @@    @@  @@@@@@@  @@   @ @   @@  @@        @@      @@   @@  @@  @@  ";
	 cout<<endl<<"   @@    @@    @@  @@   @@  @@    @@   @@   @@       @@       @@@@     @@@@   ";
	 cout<<""<<endl<<endl;
	 cout<<"Program was made by Harjot Singh Baidwan , Gourav Deshwal and Harinder Singh"<<endl;
	 cout<<"Keep coding !!! :)";


getch();
}
int map()
{
 clrscr();
	cout<<"";
	cout<<"              !!!!!!                          JAI HIND "<<endl;
	cout<<"               !!!!!!! "<<endl;
	cout<<"                !!!!!!  !!!!!! "<<endl;
	cout<<"                !!!!!!!!!!!!"<<endl;
	cout<<"                  !!!!!!!!! "<<endl;
	cout<<"                 !!!!!!!!!"<<endl;
	cout<<"                  !!!!!!!!!    "<<endl;
	cout<<"                !!!!!!!!!"<<endl;
	cout<<"                !!!!!!!!!!!!!                       !!!!"<<endl;
	cout<<"              !!!!!!!!!!!!!!!!           !       !!!!!!!!"<<endl;
	cout<<"               !!!!!!!!!!!!!!!!!!!        !!     !!!!!!!!!"<<endl;
	cout<<"             !!!!!!!!!!!!!!!!!!!!!!!!!!    !!  !!!!!!!  "<<endl;
	cout<<"         !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout<<"          !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!!"<<endl;
	cout<<"   !!!!!  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!     !!!!!!!"<<endl;
	cout<<"  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      !!!!"<<endl;
	cout<<"      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!         !!!"<<endl;
	cout<<"   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        "<<endl;
	cout<<"     !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        "<<endl;
	cout<<"        !!!!!!  !!!!!!!!!!!!!!!!!!!!!!!!       "<<endl;
	cout<<"          !!!!  !!!!!!!!!!!!!!!!!!!       "<<endl;
	cout<<"                !!!!!!!!!!!!!!!!!!!         "<<endl;
	cout<<"                 !!!!!!!!!!!!!!!!!!!!          "<<endl;
	cout<<"                !!!!!!!!!!!!!!!!!         "<<endl;
	cout<<"                 !!!!!!!!!!!!!!!              "<<endl;
	cout<<"                  !!!!!!!!!!!!!!               "<<endl;
	cout<<"     !!            !!!!!!!!!!!!!!             "<<endl;
	cout<<"     !!            !!!!!!!!!!!!!                "<<endl;
	cout<<"      !!           !!!!!!!!!!                    "<<endl;
	cout<<"        !!           !!!!!!!!!                             "<<endl;
	cout<<"                     !!!!!!!                      "<<endl;
	cout<<"                      !!!!!                     "<<endl;
	cout<<"                       !!!                "<<endl;
    cout<<"Press enter to continue";
	getch();


}
void intro()
{

		    int a=99;
     int b[99][99];

     int cu=5;

     int eio=1;

     int g=7;
	int nn=0;
    // intializing

   do{ nn++;for( int i=0;i<a;i++)
	{  for(int j=0;j<a;j++)
	     {
	     b[i][j]=0;

	     }
	 }

     // filling one diagonal

     for(  i=0;i<a;i++)
     {  for(int j=0;j<a;j++)
	    {      if(i==j)
	      {
		b[i][j]=g;
	       }
		   else{}
	    }
	 }

	//filling another
	for( i=0;i<a;i++)
     {  for(int j=a-1;j>=0 ;j--)
	    {
	      if(i+j==a-1)
	     {
	      b[i][j]=g;

	     }
	}
      }

	// filing left side
      for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
	{ if(((j<i)&&(b[i][j]==' '))&&(i+j<a-1))
			{
				b[i][j]=eio;
		}
	}
    }
    //filling right side
    for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      {
       if(((j>i)&&(b[i][j]==' '))&&(i+j>a-1))
	     { b[i][j]=eio;
	     }
      }
    }
	 //filling upper side
      for(i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      { if(((j>i)&&(b[i][j]==' '))&&(i+j<a-1))
	  {
	 b[i][j]=cu;
	   }
      }
    }
   //filling lower side
    for(i=0;i<a;i++)
    {   for(int j=0;j<a;j++)
	{   if(b[i][j]==' ')
	    {   b[i][j]=cu;
	    }
	}
    }
     for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      {
	      cout<<b[i][j]+" ";
	     if(j==a-1)
	    {cout<<"\n";
	    }
	  }
   }}while(nn<56); cout<<endl<<"Science DAY "<<endl;for(int i=0;i<12345;i++){}clrscr();
 int de=0; while(de<4){de++; cout<<endl;}

	cout<<"          Welcome to Science Day"<<endl<<endl<<endl;
	
	
	cout<<"    ______   ()()()____               "<<endl;
	cout<<"          | ()()( |       @@@@@@   @@@@@   @@@@@@     @@@@@@@     @@@@@@   "<<endl;
	cout<<"          |   ()()|      @     @  @     @  @          @           @     @ "<<endl  ;
	cout<<"          |   ()()|            @  @     @  @          @           @     @ "<<endl;	
	cout<<"          |*******|          @     @@@@@   @@@@@@     @@@@@@      @@@@@@      "<<endl;
	cout<<"          |*******|        @      @     @  @          @           @    @@     "<<endl;
	cout<<"          |_______|      @        @     @  @          @           @     @"<<endl;
	cout<<"                        @         @     @  @          @           @     @  "<<endl;
	cout<<"                        @@@@@@     @@@@@   @          @@@@@@@@    @@@@@@      "<<endl;
	cout<<"";
	cout<<"";
	cout<<"Press enter to continue";
     getch();	return;
	}

	void inro2()
{

		    int a=99;
     int b[99][99];

     int cu=5;

     int eio=1;

     int g=7;
	int nn=0;
    // intializing

   do{ nn++;for( int i=0;i<a;i++)
	{  for(int j=0;j<a;j++)
	     {
	     b[i][j]=0;

	     }
	 }

     // filling one diagonal

     for(  i=0;i<a;i++)
     {  for(int j=0;j<a;j++)
	    {      if(i==j)
	      {
		b[i][j]=g;
	       }
		   else{}
	    }
	 }

	//filling another
	for( i=0;i<a;i++)
     {  for(int j=a-1;j>=0 ;j--)
	    {
	      if(i+j==a-1)
	     {
	      b[i][j]=g;

	     }
	}
      }

	// filing left side
      for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
	{ if(((j<i)&&(b[i][j]==' '))&&(i+j<a-1))
			{
				b[i][j]=eio;
		}
	}
    }
    //filling right side
    for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      {
       if(((j>i)&&(b[i][j]==' '))&&(i+j>a-1))
	     { b[i][j]=eio;
	     }
      }
    }
	 //filling upper side
      for(i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      { if(((j>i)&&(b[i][j]==' '))&&(i+j<a-1))
	  {
	 b[i][j]=cu;
	   }
      }
    }
   //filling lower side
    for(i=0;i<a;i++)
    {   for(int j=0;j<a;j++)
	{   if(b[i][j]==' ')
	    {   b[i][j]=cu;
	    }
	}
    }
     for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      {
	      cout<<b[i][j]+" ";
	     if(j==a-1)
	    {cout<<"\n";
	    }
	  }
   }}while(nn<56); cout<<endl<<"Lets GO...^()^";for(int i=0;i<12345;i++){}clrscr();



	return;
	}




void hello()
{ 
  clrscr(); 
			cout<<"________________________________________________________"<<endl;
			cout<<"|  ___________________________________________________  |"<<endl;
			cout<<"| |   @    @  @@@@@  @        @         @@@@     @@@  | |"<<endl;
			cout<<"| |   @    @  @      @        @        @    @    @ @  | |"<<endl;
			cout<<"| |   @    @  @      @        @       @      @   @ @  | |"<<endl;
			cout<<"| |   @@@@@@  @@@@   @        @       @      @   @ @  | |"<<endl;
			cout<<"| |   @    @  @      @        @       @      @    @   | |"<<endl;
			cout<<"| |   @    @  @      @        @        @    @         | |"<<endl;
			cout<<"| |   @    @  @@@@@  @@@@@@@  @@@@@@    @@@@      @   | |"<<endl;
            cout<<"| |___________________________________________________| |"<<endl;
			cout<<"|_______________________________________________________|"<<endl;
	char ch='"';
	cout<<"#include<iostream.h>"<<endl;
	cout<<"#include<conio.h>"<<endl;
	cout<<"void main()"<<endl;
	cout<<"{"<<endl;
	cout<<"  "<<"clrscr();"<<endl;
	cout<<"  "<<"cout"<<ch<<"hello world"<<ch<<";"<<endl;
	cout<<"  "<<"getch();"<<endl;
	cout<<"}"<<endl;
	getch();return;
}

 void pattern()
{
		    int a=99;
     int b[99][99];

     int cu=5;

     int eio=1;

     int g=7;
	int nn=0;
    // intializing

   do{ nn++;for( int i=0;i<a;i++)
        {  for(int j=0;j<a;j++)
	     {
	     b[i][j]=0;

	     }
         } 

     // filling one diagonal

     for(  i=0;i<a;i++)
     {  for(int j=0;j<a;j++)
	    {      if(i==j)
	      {
	        b[i][j]=g;
	       }   
		   else{}
	    }
	 }

	//filling another
	for( i=0;i<a;i++)
     {  for(int j=a-1;j>=0 ;j--)
	    {
	      if(i+j==a-1)
	     {
	      b[i][j]=g;

	     }
        }
      }

	// filing left side
      for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
        { if(((j<i)&&(b[i][j]==' '))&&(i+j<a-1))
			{
				b[i][j]=eio;
	        }
        }
    }
    //filling right side
    for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      { 
       if(((j>i)&&(b[i][j]==' '))&&(i+j>a-1))
	     { b[i][j]=eio;
	     } 
      }
    }
	 //filling upper side
      for(i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      { if(((j>i)&&(b[i][j]==' '))&&(i+j<a-1))
	  { 
         b[i][j]=cu;
	   }
      }
    }
   //filling lower side
    for(i=0;i<a;i++)
    {   for(int j=0;j<a;j++)
	{   if(b[i][j]==' ')
	    {   b[i][j]=cu;
	    }
	}
    }
     for( i =0;i<a;i++)
    {   for(int j=0;j<a;j++)
      {
	      cout<<b[i][j]+" ";
	     if(j==a-1)
	    {cout<<"\n";
	    }
	  }  
   }}while(nn<56); cout<<endl<<"CGCCGC"<<endl;for(int i=0;i<12345;i++){}clrscr();
      return;

   }
void cipher()
{
	char  chr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char code[26];
	for(int i=0;i<=25;i++){cout<<endl<<"enter code word for "<<chr[i]<< " : ";cin>>code[i];}cout<<endl<<"Cipher table complete .Now lets start ciphering."<<endl<<"enter a statement to cipher";
	     /* char	string ss(30);
		cin>>ss<<endl;
		for(i=0;i<ss.length();i++)
		{	for(int j=0;j<=25;j++)
			{
				if(ss.at(i)==chr[j]){cout<<code[j];}
				else if(ss.at(i)==' '){cout<<ss.at(i);}
				else{}
			}
		}   */
	return;
}
void Eve()
{     clrscr();cout<<"Lets print even and odd numbers"<<endl<<endl;
	cout<<"Enter the Range for printing even odd number : ";int m,n;cin>>m;cout<<" to";cin>>n;cout<<endl;
	for(int i=m;i<=n;i++){if(i%2==0){cout<<endl<<"  "<<i<<" even ";}else{cout<<endl<<"  "<<i<<" odd ";}}
     getch();	return;
}
void Prim()
{		clrscr();cout<<"Lets print Prime numbers"<<endl<<endl;		int count=0;cout<<"Enter the Range for printing prime number : "<<endl;
				int m,n;cin>>m;cout<<" to ";cin>>n;cout<<endl;
				for(int i=m;i<=n;i++){
					for(int j=1;j<=i;j++)
					{
						if(i%j==0){count=count+1;}
						else{}
					}
						if(count==2){cout<<i<<" ";count=0;}
						else{count=0;}
				} getch(); return;}
void Ord()
{     clrscr();       int a,d=0;char ch;
	do{cout<<"^^^^^^^^^^^^^^Soft canteen services_------------";
	cout<<endl<<endl<<"1.) Pizza"<<endl<<"2.) Burger"<<endl<<"3.)Boiled egg"<<endl<<"4.) Thali  "<<endl<<"5.) Sandwich"<<endl<<"6.) Coke"<<endl<<endl<<" Enter the corresponding number : ";
	 cin>>a;cout<<"You ordered ";
	switch(a)
	 {
		 case 1:cout<<"Pizza ,";
		 break;

		  case 2: cout<<"Burger,";
		  break;
		  case 3:cout<<"Boiled egg ,";
		  break;
		  case 4:cout<<" Thali ,";
		  break;
		  case 5:cout<<"Sandwich,";
		  break;
		  case 6:cout<<" Coke ,";
		  break;

	      default : cout<<"Nothing";
    }cout<<endl<<"Wanna order more enter y or n : ";cin >>ch;
    if((ch=='y')||(ch=='Y')){d=1;}else{d=0;}clrscr();
    }while(d==1);
	return;
}
void ques()
{

	  clrscr();cout<<"Question Paper"<<endl<<endl; randomize();int a,n,dd;char ch;
 do{ for(int i=0;i<5;i++)
  {
      a=rand();
      do
      {    n=(a/8)/2;//n*=3;
	  a=a/8;
      }while(n>20);
    cout<<endl<<"Q "<<i+1<<".)";
	switch(n)
	{

		 case 1: cout<<"Write a program to print hello world.";
		 break;

		  case 2: cout<<"What is difference between SRAM and DRAM ?";
		  break;
		  case 3:cout<<"Write a program to find palindrome number from 1947 to 2018.";
		  break;
		  case 4:cout<<"Write a program to print pattern of diamond.";
		  break;
		  case 5:cout<<"Write a program to find greatest out three numbers.";
		  break;
		  case 6:cout<<"What are secondary memory devices ?";
		  break;
		  case 7:cout<<"Write a short note on memory.";
		  break;
		  case 8:cout<<"Write a program to print even numbers from 1 to 10.";
		  break;
		  case 9: cout<<"Draw a flowchart to find factorial of a number.";
		 break;

		  case 10: cout<<"Write short note on computer.";
		  break;
		  case 11:cout<<"What do you mean by the term Fall through ?";
		  break;
		  case 12:cout<<"What is the meaning of the term iteration.";
		  break;
		  case 13:cout<<"Write a short note on spell check in MS-Word.";
		  break;
		  case 14:cout<<"what do you mean by MAIL MERGE ?";
		  break;
		  case 15:cout<<"Write a program to print CGC 10^898393 times  within one second.";
		  break;
		  case 16:cout<<"Write a program to print logarithmic tables. ";
		  break;
		  case 17:cout<<"Write about operators in c++.";
		  break;
		  case 18:cout<<"What are literals ?State difference between literals and constants.";
		  break;
		  case 19:cout<<"Write a loop to fill up your System Ram.";
		  break;
		  case 20:cout<<"Describe  C++ in at least 100 lines.";
		  break;
	      default : cout<<"wrong choice";
	}
  }
    cout<<endl<<"Want to print  again ? Press Y Or N"<<endl;cin>>ch;if((ch=='y')||(ch=='Y')){dd=1;}else{dd=0;}}while(dd!=0);
      return;
}
void guess()
{

	char ch;

 int dd=0;int ba ,bo,a,n ;randomize();
      do{  clrscr();cout<<"________Guess the number between 1 to 20________"<<endl<<"Rules"<<endl<<"1.Both players need to guess a number from 1 to 20.If the guess matches with the computers guess you win. "<<endl;cout<<"Enter player 1 choice : ";cin>>ba;cout<<endl<<"Enter player 2 choice : ";cin>>bo;cout<<endl;

	 a=rand();
       do
      {    n=(a/8)/2;//n*=3;
	   a=a/8;
       }while(n>20);
	   if(n==bo){cout<<"Player 2 wins";}else if(bo==ba){cout<<"Cannot guess same number";}else if(ba==n){cout<<"Player 1 wins";}else{cout<<"both lose";}cout<<endl<<"Want to play Again press y or n : ";cin>>ch;if((ch=='y')||(ch=='Y')){dd=1;}else{dd=0;}
	  }while(dd!=0);return;
  }