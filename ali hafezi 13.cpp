// ali hafezi 13.cpp : main project file.

#include "stdafx.h"
#include "iostream"
#include "windows.h"
#include "conio.h"
#include "ctime"
#include "math.h"
using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////
//////first function (for find position on the screen)//////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////

void gotoxy(int x, int y)

  {//start gotoxy function.

		HANDLE hConsoleOutput;
		COORD dwCursorPosition;
		cout.flush();
		dwCursorPosition.X = x;
		dwCursorPosition.Y = y;
		hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);

  }//end gotoxy function.
///////////////////////////////////////////////////////////////////////////////
//////////////////////password function/////////////////////////////
//////////////////////////////////////////////////////////////////////////
unsigned short pass(short c)

{//start pass function.

	    system("color 56") ;//color function optional.

	unsigned short              control = 1 ;//first bool.
	char     g[4] = {16,17,30,31} ;//first char.
	char                       ch ;//second char.
    short                   l = 0 ;//first short.
	short                  s = 20 ;//second short.
	short                   e = 5 ;//third short.
    short            counter = -1 ;//forth short.
	unsigned short    a[19] = {3405,4112,4819,5519,5512,4812,4112,3412,2719,3426,4126,4826,4119,3412,2712};//sixth short.
	unsigned short    b[19] = {0} ;//seventh short.
	

		system("cls") ;//remove data on screen.


   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
	  //find position then print.
	gotoxy(40,35) ;
	cout<<"8" ;//print data on screen.

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
      //find position then print.
	gotoxy(45,38) ;
	cout<<"6" ;//print data on screen.


   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
      //find position then print.
	gotoxy(40,41) ;
	cout<<"2" ;//print data on screen.


   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
      //find position then print.
	gotoxy(35,38) ;
	cout<<"4" ;//print data on screen.


   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
      //find position then print.
	gotoxy(35,35) ;
	cout<<"7" ;//print data on screen.

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
      //find position then print.
	gotoxy(45,35) ;
	cout<<"9" ;//print data on screen.


   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
      //find position then print.
	gotoxy(35,41 );
	cout<<"1" ;//print data on screen.


   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
      //find position then print.
	gotoxy(45,41) ;
	cout<<"3" ;//print data on screen.


   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
      //find position then print.
	gotoxy(40,38);
	cout<<"h";//print data on screen.

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),91);//color option for font.
      //find position then print.
	gotoxy(47,38) ;
	cout<<g[0] ;//print data on screen.

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),91);//color option for font.
      //find position then print.
	gotoxy(33,38) ;
	cout<<g[1] ;//print data on screen.

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),91);//color option for font.
      //find position then print.
	gotoxy(40,33) ;
	cout<<g[2] ;//print data on screen.

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),91);//color option for font.
      //find position then print.
	gotoxy(40,43) ;
	cout<<g[3] ;//print data on screen.

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),90);//color option for font.
      //find position then print.
	gotoxy(27,50) ;
	cout<<" ENTER PASSWORD:press Enter" ;//print data on screen.

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),94);//color option for font.
      //find position then print.
	gotoxy(15,47) ;
	cout<<" HELP:press SPACE" ;//print data on screen.
	

   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),91);//color option for font.
      //find position then print.
	gotoxy(50,47) ;
	cout<<" EXIT:press Esc" ;//print data on screen.



			//make the base of password (drawing point on the screen).
		  //nested loops.
		for( short i = 0 ; i < 4 ; i ++ )

		{//first for start.

			    for( short i = 0 ; i < 5 ; i ++ )

			          {//second for start.

				            s += 7 ;//change the position.
			
				
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
      //find position then print.
	 gotoxy(s,e);
	 cout<<"h";//print data on screen.
		
				
			           }//second for end.

			                s = 20 ;//change the position.

			                e += 7 ;//change the position.

		}//first for end

		
		                     s = 27 ;//change the position.

		                     e = 5 ;//change the position.

		    




     do {//start of do while order.



				ch = getch() ;//get the charecter.
				
			//identify function of keyboard recive.
     while((ch!='4' && ch!='6')&&(ch!='8' && ch!='2')&&(ch!='7' && ch!='9')&&(ch!='1' && ch!='3')&&(ch!=13 && ch!=' ')&& ch!=27 )

				ch = getch() ;//get the charecter.



	     //switch order.
		switch(ch)

	{//start switch order
			
			//first case.
		case '4':
			
			    //if order for controling movement on the screen.
			if( s > 27 )

			{//start if order.

		                     s -= 7 ;

          //find position then print.
		gotoxy(s,e);
		cout<<".......";

			   counter ++ ;//counting the movement on the screen.

			}//end if order.

		break ;
			
			

			//second case.
		case '6':

				//if order for controling movement on the screen.
			if( s > 19 && s < 49 )

			{//start if order.

          //find position then print.
		gotoxy(s,e);
		cout<<".......";

		s += 7 ;//change the position.

	    counter ++ ;//counting the movement on the screen.

			}//end if order.

		break;

				
			//third case.
		case '8':

			    //if order for controling movement on the screen.
			if( e > 6 )

			{//start if order.
			
		         for(int i = 0 ; i < 7 ; i ++ )

			          {//start for order.
    
                            //find position then print.
		                  gotoxy(s,e);
		                  cout<<".";

		                     e -= 1;//change the position.

			           }//end for order.

	               counter ++ ;//counting the movement on the screen.

			}//end if order.

		break;	


			//forth case.
		case '2':

			   //if order for controling movement on the screen.
			if(e < 25 )

			{//start if order.
			
		         for(int i = 0 ; i < 7 ; i ++ )

			          {//start for order.
          
		                   //find position then print.
		                 gotoxy(s,e) ;
		                 cout<<"." ;

		                   e += 1 ;//change the position.

		              }//end for order.

			       counter ++ ;//counting the movement on the screen.

			}//end if order.

		break;

			//fifth case.
		case '7':

			    //if order for controling movement on the screen.
			if( e > 6 && s > 27 )

			{//start if order.
			
			     for(int i = 0 ; i < 7 ; i ++ ) 

			          {//start for order.

                            //find position then print.
		                  gotoxy(s,e) ;
		                  cout<<"." ;

		                    s -= 1 ;//change the position.

		                    e -= 1 ;//change the position.

			          }//end for order.

	              counter ++ ;//counting the movement on the screen.

			}//end if order.

		break;


			//sixth case.
		case '3':

			    //if order for controling movement on the screen.
			if( s < 49 && e < 25 )

			{//start if order.
			
			     for(int i = 0 ; i < 7 ; i ++ )

			          {//start for order.

                            //find position then print.
		                  gotoxy(s,e) ;
		                  cout<<"." ;

		                    s += 1 ;//change the position.

		                    e += 1 ;//change the position.

			          }//end for order.

	              counter ++ ;//counting the movement on the screen.

			}//end for order.

		break;
		
			
			//seventh case.
		case '1':

			   //if order for controling movement on the screen.
			if(s > 27 && e < 25 )

			{//start if order.
			
			     for(int i = 0 ; i < 7 ; i ++ )

			          {//start for order.

		                    //find position then print.	  
		                  gotoxy(s,e) ;
		                  cout<<"." ;

		                    s -= 1 ;//change the position.

		                    e += 1 ;//change the position.

			          }//end for order.

	             counter ++ ;//counting the movement on the screen.

			}//end if order.

		break;	
	

			//eighth case.
		case '9':

				//if order for controling movement on the screen.
			 if(e > 6 && s < 49 )

			{//start if order.

		         for(int i = 0 ; i < 7 ; i ++ )

		              {//start for order.

			                //find position then print.
			              gotoxy(s,e) ;
			              cout<<"." ;

			                s += 1 ;//change the position.

			                e -= 1 ;//change the position.


		              }//end for order.

	            counter ++ ;//counting the movement on the screen.

			}//end if order.

		break;


			//ninth case.
		case ' ':
			
			if( l < 2 && c <= 3 )

			{//start if order.

				l ++ ;//counting.

               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),92);//color option for font.
				  //find position then print.
			    gotoxy(60,54);
				cout<<"633684441366774";//print data on screen.

					          Sleep(1000);//sleep CPU.

               SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),255);//color option for font.
			      //find position then print.
                gotoxy(60,54);
				cout<<"633684441366774";//print data on screen.

			}//end if order.

			
		break;
			
		
			

			//tenth case.
		case 13:

		         control = 0 ;//get the false value.

			break;



			//eleventh case.
        case 27:

			     control=2;//change the number.



		return control ;//return to main.

		

			
	}//end switch order.

		

		b[counter] = s * 100 + e ;//make the number from position on the screen.



     }while(control) ;//end of while order.

			

      control = 0 ;//get the false value.

			//chek the pass.
		for(int i = 0 ; i < 19 ; i ++ )

				//take number.
            if( a[i] != b[i] )
        
				control = 1 ;//get the true value.
	 

		
			return control ;//return to main.


}//end of pass order.
////////////////////////////////////////////////////////////
//////////////////////animation function/////////////////
/////////////////////////////////////////////////////
void animat()

{//start animat function.

			system("cls");//remove all data.
		
	         system("color f0");//color option.

	    
	    unsigned short number=5;//first int.

		/*in this part we make an animation that show 5 4 3 2 1 this is
		for the first of this program and i shoud notice this that 
		one of the most important think is making number by logical
		instruction.*/


//////////////////////////the first part print number//////////////////////////////////////////

	  while(number>0)


	       {//start while order.

		         system("cls");//remove data on the screen.

		             cout<<"\a";//send a sound in each second.
		

		       unsigned short      s = 45 ;//second int.
		       unsigned short      e = 10 ;//third int.
		       unsigned short length = 15 ;//forth int.
		       unsigned short         top ;//fifth int.
		       unsigned short     campare ;//sixth int.
		       unsigned short           q ;//seventh int.

			//first switch to get the irst positon.
		switch(number)

		{//start first switch order.

		  //3 case's for get the position for numbers "2" "3" "5". 	
		case 5:
		case 3:
		case 2:
		 
		
		     length = 15 ;//the length of numbers.

		     top = 5 ;//5 pulse need for printing those numbers.
		
		     q = 1 ;//seprative part.

		   break ;


		   //this case get position for number 4.
		case 4:

			 s = 25 ;//change the position.
			
			 length = 15 ;//the length of numbers.

			 top = 3 ;//3 pulse need for printing those numbers.
			 
			 q = 2 ;//seprative part.

		   break ;


		  //this case get position for number 1.
		case 1:

			s = 38 ;//change the position.

			top = 1 ;//1 pulse need for printing those numbers.

			q = 3 ;//seprative part.

			length *= 2 ;//the length of numbers.

			break ;

		}//end first switch order.


		           while( top > 0 )

	                     {//start second while order.

		                     campare = top % 2 ;//campare odd and even numbers.

		                          for( short i = 0 ; i < length ; i ++ )

		                               {//start for order

			                               if( q == 1 )//numbers 5,2,3 statement.

			                                  {//start if order.

			                                        if( campare == 0 )//campare odd & even.

				                                      e ++ ;//change position.

			                                        else

				                                      s -- ;//change position.

			                                   }//end if order.

				
			                               if( q == 2 )//number 4 statement.

			                                   {//start if order.

				                                    if( campare == 0 )//campare odd & even.

				                                      s ++ ;//change position.

				                                    else

				                                      e ++ ;//change position.

			                                   }//end if order.


			                               if(q == 3)//number 1 statement.

				                                      e ++ ;
				


//////////////************************the  printing part************************//////////////
                     
							   
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);//color option for font.
			                //find position.
			              gotoxy(s,e);
			              cout<<"......";//print the data on screen.

////////////////////////////////****************************************////////////////////


		                               }//end for order.

		                           top = top - 1 ;//print the next statment.

					//second switch for make the number.
		        switch(number)

		           {//start switch order.

						//number 5 statment
		             case 5:

			           if( top < 4 )//if order.

				          s = 45 ;//change the position.

			       break ;

						//number 5 statment
		             case 4:

		               if( top == 1 )

		                  {//start if order.

			                  e = 10 ;//change the position.

			                  length = length * 2 ;//the length of numbers.

			                  s = 46 ;//change the position.

		                  }//end if order.

		           break ;

						//number 5 statment
		             case 3:

			         s = 45 ;//change the position.

			       break ;

						//number 5 statment
		             case 2:

			         s = 45 ;//change the position.

			           if( top == 2 )//if order.

				           s = s - length ;//number 5 statment

			       break;


		           

		}//end the swicth order




		}//end of second while.

      number = number - 1 ;//next number.

		  Sleep(1000);//time out (sleep CPU for 1 second).


		system("color f0");//color option.

		}//end while order.


///////////////////////////////////////////part two "lighting"//////////////////////////////////


         system("cls");

         cout<<"\a\a";



		
		system("color c1");	
		Sleep(400);//time out.
		
        system("color a1");	
		Sleep(400);//time out.

			
		system("color 94");	
		Sleep(400);	//time out.		

		system("color 68");	
		Sleep(300);//time out.

		system("color 45");	
		Sleep(200);//time out.

		system("color 63");	
		Sleep(100);//time out.


		system("color c5");	
		Sleep(90);//time out.
		
		system("color e4");	
		Sleep(90);//time out.

			
		system("color 25");	
		Sleep(90);//time out.			

		system("color 58");	
		Sleep(90);//time out.

		system("color a6");	
		Sleep(90);//time out.

		system("color 80");	
		Sleep(90);//time out.

		system("color 63");	
		Sleep(80);//time out.


		system("color cf");	
		Sleep(70);//time out.
		
		system("color 36");	
		Sleep(70);//time out.

			
		system("color 94");	
		Sleep(70);//time out.			

		system("color 74");	
		Sleep(70);//time out.

		system("color 08");	
		Sleep(70);//time out.

		system("color 4a");	
		Sleep(70);//time out.


		system("color 34");	
		Sleep(60);//time out.

		system("color a2");	
		Sleep(60);//time out.


		system("color c5");	
		Sleep(60);//time out.
		
		system("color 10");	
		Sleep(50);//time out.

			
		system("color 94");	
		Sleep(50);//time out.			

		system("color 74");	
		Sleep(50);//time out.

		system("color a6");	
		Sleep(50);//time out.

		system("color 63");	
		Sleep(50);//time out.



		system("color f1");	
		Sleep(40);//time out.
		
		system("color a1");	
		Sleep(40);//time out.

			
		system("color f4");	
		Sleep(40);//time out.			

		system("color 68");	
		Sleep(40);//time out.

		system("color f5");	
		Sleep(40);//time out.

		system("color 63");	
		Sleep(40);//time out.


		system("color f5");	
		Sleep(40);//time out.
		
		system("color e4");	
		Sleep(40);//time out.

			
		system("color f5");	
		Sleep(40);//time out.			

		system("color 58");	
		Sleep(40);//time out.

		system("color f6");	
		Sleep(40);//time out.

		system("color 80");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.


		system("color cf");	
		Sleep(40);//time out.
		
		system("color f6");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color 08");	
		Sleep(40);//time out.

		system("color fa");	
		Sleep(40);//time out.


		system("color 34");	
		Sleep(40);//time out.

		system("color f2");	
		Sleep(40);//time out.


		system("color c5");	
		Sleep(40);//time out.
		
		system("color f0");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color a6");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.



		system("color c1");	
		Sleep(40);//time out.
		
		system("color f1");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color 68");	
		Sleep(40);//time out.

		system("color f5");	
		Sleep(40);//time out.

		system("color 63");	
		Sleep(40);//time out.


		system("color f5");	
		Sleep(40);//time out.
		
		system("color e4");	
		Sleep(40);//time out.

			
		system("color f5");	
		Sleep(40);//time out.			

		system("color 58");	
		Sleep(40);//time out.

		system("color f6");	
		Sleep(40);//time out.

		system("color 80");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.


		system("color cf");	
		Sleep(40);//time out.
		
		system("color f6");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color 08");	
		Sleep(40);//time out.

		system("color fa");	
		Sleep(40);//time out.


		system("color 34");	
		Sleep(40);//time out.

		system("color f2");	
		Sleep(40);//time out.


		system("color c5");	
		Sleep(40);//time out.
		
		system("color f0");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);	//time out.		

		system("color f4");	
		Sleep(40);//time out.

		system("color a6");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.

		system("color f1");	
		Sleep(40);//time out.
		
		system("color a1");	
		Sleep(40);//time out.

			
		system("color f4");	
		Sleep(40);//time out.			

		system("color 68");	
		Sleep(40);//time out.

		system("color f5");	
		Sleep(40);//time out.

		system("color 63");	
		Sleep(40);//time out.


		system("color f5");	
		Sleep(40);//time out.
		
		system("color e4");	
		Sleep(40);//time out.

			
		system("color f5");	
		Sleep(40);//time out.			

		system("color 58");	
		Sleep(40);//time out.

		system("color f6");	
		Sleep(40);//time out.

		system("color 80");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.

	
		system("color cf");	
		Sleep(40);//time out.
		
		system("color f6");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color 08");	
		Sleep(40);//time out.

		system("color fa");	
		Sleep(40);//time out.


		system("color 34");	
		Sleep(40);//time out.

		system("color f2");	
		Sleep(40);//time out.


		system("color c5");	
		Sleep(40);//time out.
		
		system("color f0");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color f4");	
		Sleep(40);//time out.

		system("color a6");	
		Sleep(40);//time out.

		system("color f3");	
		Sleep(40);//time out.



		system("color c1");	
		Sleep(40);//time out.
		
		system("color f1");	
		Sleep(40);//time out.

			
		system("color 94");	
		Sleep(40);//time out.			

		system("color 68");	
		Sleep(40);//time out.

		system("color f5");	
		Sleep(40);//time out.

		system("color 63");	
		Sleep(40);//time out.


		system("color f5");	
		Sleep(40);//time out.
		
		system("color e4");	
		Sleep(40);//time out.

			
		system("color f5");	
		Sleep(40);//time out.			

		system("color 58");	
		Sleep(40);//time out.

		system("color f6");	
		Sleep(40);//time out.

		system("color 80");	
		Sleep(30);//time out.

		system("color f3");	
		Sleep(30);//time out.


		system("color cf");	
		Sleep(30);//time out.
		
		system("color f6");	
		Sleep(30);//time out.

			
		system("color 94");	
		Sleep(30);//time out.	

		system("color f4");	
		Sleep(30);//time out.

		system("color 08");	
		Sleep(30);//time out.

		system("color fa");	
		Sleep(30);//time out.


		system("color 34");	
		Sleep(30);//time out.

		system("color f2");	
		Sleep(30);//time out.


		system("color c5");	
		Sleep(20);//time out.
		
		system("color f0");	
		Sleep(20);//time out.

			
		system("color 94");	
		Sleep(20);	//time out.		

		system("color f4");	
		Sleep(20);//time out.

		system("color a6");	
		Sleep(20);//time out.

		system("color f3");	
		Sleep(20);//time out.


}//end animat function.

/////////////////////////////////////////////////////////

void average(float x[3][10][4]);
void average(int x[3][10][4]);
void average(double x[3][10][4]);

//////////////////////////////////////////////////////////
void campare(double x[3][10][4]);
void campare(float x,int e);
void campare(int x[3][10][4]);
//////////////////////////////////////////////////////////////
/////////////////////////////////////

/////////////////////game function///////////////////////

unsigned game(char ch)

{//start game function.

		char            g = 2 ;//second char
	    bool      control = 1 ;//the only bool.
		unsigned short s = 40 ;//first int.
		unsigned short e = 56 ;//second int.
	    unsigned   x[15] = {0};//third int.
	    unsigned   y[15] = {0};//forth int.
		unsigned     score = 0;//fifth int.
		
	srand(time(0));//srand order.

			//make the random position.
		for(short i = 0 ; i < 9 ; i ++ )

		{//start for order.

               x[i] = rand() % 80 ;//arraye.

               y[i] = rand() % 40 ;//arraye.

		}//end for order.



	do{//start do while order.



		
			   //make the random position.
			for( short i = 0 ; i < 9 ; i ++ )
			
			if( y[i] == 57 )//if order.

			{//start if order.

				y[i] = 0 ;//recive 0.

				x[i] = rand() % 80 ;//random number.
		
			}//end if order.

			

				//print and move .
           for( short i = 0 ; i < 9 ; i ++ )

             {//start if order.

					//find position.
	             gotoxy(x[i],y[i]);
	                cout<<g<<g<<g<<g<<g;//print char.
		               y[i] ++ ;//move the position.

              }//end if order.

	system("color 3f");//color option.

		
		Sleep(3);//time out.


	
 
                ch = getch() ;//recive char.

                  //second while for get the identify character.
			while((ch!='6' && ch!='4') && ch!='5')

				ch = getch() ;//recive char.

				//find position.
		    gotoxy(s,e);
			cout<<"k";//print the object.

		switch (ch)

		   {//start switch order.

			   //move right.
		     case '6':

			      if( s < 78 )//if order.

			          s ++ ;//change the position.

	        break;


				//move left.
		     case '4':

			      if( s > 1 )//if order.

			          s -- ;//change the position.

			break;
		

		   }//end switch order

		//cheking missing part.
	for( short i = 0 ; i < 9 ; i ++ )

	if( ( s >= x[i] && e == y[i] ) && ( s <= x[i] + 5 ) )//campare positions.
		
			control = 0 ;//get the false value.
	
	
		system("cls");//remove all data on the screen.

			//find the position.
		gotoxy(s,e);
		cout<<"k";//print the object.
		
		score += 10 ;


			//find the position.
		gotoxy(58,2);
		cout<<"your score:"<<score;//print score.
		

	}while(control);//end do while order.
	
	
		return score;
			
}//end game function.

/////////////////////////////////////////////////////////////////end game function.
////////////////////////////

int main()
{//start main function.
////////////////////////////////////////////////////////////////////
	/////////////password part//////////////////////////

    unsigned  tim=16;
	unsigned short b=1;
    unsigned short control;

	do{// start do while order.
		
	     control=pass(b);//call pass function.

		    system("color 78");//color option.

			     if(control==2)//if order for exit.

		            return 0;//exit.

		    Sleep(tim);//sleep order.

		      tim=tim*2;//time multiply by 2.
		
		         b++;// help counter.

	}while(control);//end do while order
/////////////////////////////////////////////////////////////////////////////end.*****

	/////////////////////////////animation part/////////////////////////////
	   ////////////////////////////////////////////////////////////////
								
									animat();

/////////////////////////////////////////////////////////////////end*************
////////

          /////////////////////the body of this program//////////////
                       ////*******************************///////


float    num[3][10][4] ;//float arraye.
		int   innum[3][10][4];//float arraye.
		double    donum[3][10][4];
		float   help[3][10][4] ;//float arraye.
		bool co=1;


	    system("color 42");//color option.

		//print the name of program.
	cout<<"\n\t\t\t\t"<<"  VIRTUAL CLASSES"<<"\n\n\n\n";

		//print the usage.
	cout<<"this program is for hobbys and the names you see are the real name of real\nperson.\n\n";

		//print instraction.
	cout<<"INSTRUCTION:"<<"\n";

		//print first instruction.
	cout<<"1.by pressing enter you can play again.\n";

		//print second instruction.
	cout<<"2.by pressing space you come back the first page.\n";

		//print third instruction.
	cout<<"3.by pressing Esc you exit the program.\n";

		//print the name of programmer.
	cout<<"\nPROGRAMMER:ENGINEER ALI HAFEZI";


		//print the end.
	cout<<"\n\n\n\t\t\t\t"<<"ENJOY AND FUN";

		//find position.
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";


	    system("pause");//stop order.


		do{
			system("cls");
		srand(time(0));//srand order.

		//nested loop for making random numbers.
		

		for( int i = 0 ; i < 10 ; i ++ )

			for(int j = 0 ; j < 4 ; j ++ )
			{
            
				num[0][i][j] = rand() % 20 ;//random number.

				innum[1][i][j]  =  rand() %21;//save int number befor make float number.

				donum[2][i][j] = rand() % 21;

				help[0][i][j] = rand() % 101 ;//random number.

				help[0][i][j] = help[0][i][j] / 100 ;//make number.

				num[0][i][j] = num[0][i][j] + help[0][i][j] ;//make number.

			}

int z=2;
char ch=0;
int k=0;
     int s=4;
	  int e=5;                    system("cls");
		              system("color 3f");

                       gotoxy(20,3);
					   cout<<"please chose the class of those three teachers.";

					
                       gotoxy(20,7);
					   cout<<"master ali hafezi:press H.";


                       gotoxy(20,10);
					   cout<<"master homan sayyari:press S.";


                       gotoxy(20,13);
					   cout<<"master safar vafadar:press V.";

char b[13];
		char c[13];

	char main[3][10][2][15]={{"bahrami","maziyar","arjmand","mostafa","mohamadi","rana","afkhami","sara","nazari","roza","danesh","shayan","derafshi","danesh","hafezi","salman","vaezi","amir","nikoo","farhad"},
	{"bahari","negar","hoseyni","ali","ahmadi","negin","abedi","somaye","ghasemi","sara","kamali","sodeh","foladi","fateme","rezaee","ali","amini","ramin","hasani","kamal"},
	{"kashani","mohsen","meysami","mohammad","alipoor","narges","moosavi","shahrzad","alizade","negin","shahrokh ","reza","norozi","farhad","abdoli","ali","mostmand","morteza","asgari","zahra"}};

    for(int k=0;k<3;k++)

	    for(int i=0;i<10;i++)

		    for(int j=0;j<10;j++)

		       {	

			int x=strcmp(main[k][i][0],main[k][j][0]);

			if( x < 0 )

			{

				strcpy(b,main[k][i][0]);
											
			    strcpy(main[k][i][0],main[k][j][0]);
								
		        strcpy(main[k][j][0],b);
									
	            strcpy(c,main[k][j][1]);
								
	            strcpy(main[k][j][1],main[k][i][1]);
									
	            strcpy(main[k][i][1],c);

			}
		}

	

          




 
                ch = getch() ;

                  //second while for get the identify character.
			while((ch!='h' && ch!='s') && ch!='v')

				ch = getch() ;

 system("cls");
//find position.
	gotoxy( 3 , 5 );
	cout<<"lastname";

	//find position.
	gotoxy( 13 , 5 );
	cout<<"firstname";

	//find position.
    gotoxy( 25 , 5 );
	cout<<"logic";

	//find position.
	gotoxy( 37 , 5 );
	cout<<"physics";

	//find position.
	gotoxy(49,5);
	cout<<"english";

	//find position.
	gotoxy(61,5);
	cout<<"math";

		switch(ch)
		{

		case 'h':
			 
for(int i = 0 ; i < 10 ; i ++ )
		{
			e+=2;
           gotoxy(1,e);
			cout<<i+1<<".";
				for(int j=0;j<2;j++)
				{
					
		         gotoxy(s,e);

	          cout<<main[0][i][j];
			  s+=9;
				}
				s=13;
			for(int j = 0 ; j < 4 ; j ++)
			{
				
				s = s + 12 ;

				Sleep (100) ;//time out.
				

				//find position.
				gotoxy(s,e);
				cout<<num[0][i][j];

				
			}


			s = 4 ;
		}
average(num);
cout<<"\n\n";
system("pause");
system("cls");

       for( int j = 0 ; j < 10 ; j ++ )
   
                 for( int k = 0 ; k < 4 ; k ++ )
				 {
					 z++;
							campare(num[0][j][k],z);
				 }
			break;

		case 's':

			
for(int i = 0 ; i < 10 ; i ++ )
		{
			e+=2;
           gotoxy(1,e);
			cout<<i+1<<".";
				for(int j=0;j<2;j++)
				{
					
		         gotoxy(s,e);

	          cout<<main[1][i][j];
			  s+=9;
				}
				s=13;
			for(int j = 0 ; j < 4 ; j ++)
			{
				
				s = s + 12 ;

				Sleep (100) ;//time out.
				

				//find position.
				gotoxy(s,e);
				cout<<innum[1][i][j];

				
			}


			s = 4 ;
		}
     average(innum);
	 cout<<"\n\n";
      system("pause");
      system("cls");
        campare(innum);
			break;

		case 'v':

			 
for(int i = 0 ; i < 10 ; i ++ )
		{
			e+=2;
           gotoxy(1,e);
			cout<<i+1<<".";
				for(int j=0;j<2;j++)
				{
					
		         gotoxy(s,e);

	          cout<<main[2][i][j];
			  s+=9;
				}
				s=13;
			for(int j = 0 ; j < 4 ; j ++)
			{
				
				s = s + 12 ;

				Sleep (100) ;//time out.
				

				//find position.
				gotoxy(s,e);
				cout<<donum[2][i][j];

				
			}


			s = 4 ;
  		}
average(donum);
cout<<"\n\n";
      system("pause");
      system("cls");
        campare(donum);
			break;
		}


//find position.
			gotoxy(8,49);
          cout<<"PLAY AGAIN:Enter";


			//find position.
			gotoxy(36,49);
		  cout<<"HOME:SPACE";
			

			//find position.
			gotoxy(63,49);
		  cout<<"EXIT:Esc";





 
                ch = getch() ;

                  //second while for get the identify character.
			while((ch!=13 && ch!=27) && ch!=' ')

				ch = getch() ;


				          switch(ch)//switch functin.

                             {//start of switch functin.


						//first case for continue.
                         case 13:

	                             co = 1 ;//put true in variable.

	                             break;

						 //second case for back home.
                         case ' ':
							  
							     co = 1 ;//put true in variable.

	
		system("cls");//remove all above data.

	    system("color 42");//color option.

		//print the name of program.
	cout<<"\n\t\t\t\t"<<"  VIRTUAL CLASSES"<<"\n\n\n\n";

		//print the usage.
	cout<<"this program is for hobbys and the names you see are the real name of real\nperson.\n\n";

		//print instraction.
	cout<<"INSTRUCTION:"<<"\n";

		//print first instruction.
	cout<<"1.by pressing enter you can play again.\n";

		//print second instruction.
	cout<<"2.by pressing space you come back the first page.\n";

		//print third instruction.
	cout<<"3.by pressing Esc you exit the program.\n";

		//print the name of programmer.
	cout<<"\nPROGRAMMER:ENGINEER ALI HAFEZI";


		//print the end.
	cout<<"\n\n\n\t\t\t\t"<<"ENJOY AND FUN";

		//find position.
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";


	    system("pause");//stop order.

                                 break;

						  //third case for exit.
                          case 27:

	                             co = 0 ;//put false in variable.

	                             break;

                             }//end of switch function.


		}while(co);//end of do while.



///////////////////////////////end of the body////////////////////
//////////////******////////****************/////////////////*******


//////////////////////game time/////////////////////////////////
/////////////////////////////////////

system("cls");
cout<<"\n\n\n\t\t\tits time for fun";

cout<<"\n\nmove with 4 & 6 & by pressing 5 the picture move";

system("pause");
system("cls");
  char ch;
 int score=0;
score=game(ch);

system("cls");

cout<<"\n\n\n\t\tyour score is "<<score;

Sleep(5000);

		return 0;
}

void average(float x[3][10][4])

{//start function.


	float average[3][10] = {0} ;//float number.
    int                  e = 5 ;//make position.

			//nested loop for make the average.
       for( int i = 0 ; i < 3 ; i ++ )

           for( int j = 0 ; j < 10 ; j ++ )

		        {//start first for.

                 for( int k = 0 ; k < 4 ; k ++ )

			         

				   average[i][j] = average[i][j] + x[i][j][k] ;//plus whole.

			         
			   average[i][j] = average[i][j] / 4 ;//get the average

		        }//end first for.

			//find position.
        gotoxy(70,5);
		cout<<"average";//print order.
         
				//for order.
             for( int j = 0 ; j < 10 ; j ++ )

                {//start for order.

                e += 2 ;//change the position.

                 Sleep(50);//time out.

					//find position.
                gotoxy(70,e);
				cout<<average[0][j];//print order.

                }//end for order.


}//end function.
void average(double x[3][10][4])

{//start function.


	double average[3][10] = {0} ;//float number.
    int                  e = 5 ;//make position.

			//nested loop for make the average.
       for( int i = 0 ; i < 3 ; i ++ )

           for( int j = 0 ; j < 10 ; j ++ )

		        {//start first for.

                 for( int k = 0 ; k < 4 ; k ++ )

			         

				   average[i][j] = average[i][j] + x[i][j][k] ;//plus whole.

			         
			   average[i][j] = average[i][j] / 4 ;//get the average

		        }//end first for.

			//find position.
        gotoxy(70,5);
		cout<<"average";//print order.
         
				//for order.
             for( int j = 0 ; j < 10 ; j ++ )

                {//start for order.

                e += 2 ;//change the position.

                 Sleep(50);//time out.

					//find position.
                gotoxy(70,e);
				cout<<average[2][j];//print order.

                }//end for order.


}//end function.

void average(int x[3][10][4])

{//start function.


	int average[3][10] = {0} ;//float number.
    int                  e = 5 ;//make position.

			//nested loop for make the average.
       for( int i = 0 ; i < 3 ; i ++ )

           for( int j = 0 ; j < 10 ; j ++ )

		        {//start first for.

                 for( int k = 0 ; k < 4 ; k ++ )

			         

				   average[i][j] = average[i][j] + x[i][j][k] ;//plus whole.

			         
			   average[i][j] = average[i][j] / 4 ;//get the average

		        }//end first for.

			//find position.
        gotoxy(70,5);
		cout<<"average";//print order.
         
				//for order.
             for( int j = 0 ; j < 10 ; j ++ )

                {//start for order.

                e += 2 ;//change the position.

                 Sleep(50);//time out.

					//find position.
                gotoxy(70,e);
				cout<<average[1][j];//print order.

                }//end for order.


}//end function.


void campare(int x[3][10][4])
{
	int s=0;
	int e=1;
	int camp[40] = {0} ;//float number.
 

       

        

           for( int j = 0 ; j < 10 ; j ++ )

		        

                 for( int k = 0 ; k < 4 ; k ++ )

				 {
			        camp[s] = x[1][j][k] % 2 ;
					s++;	
				 }
		        s=0;
            for( int i = 0 ; i < 10 ; i ++ )
		        
                 for( int j = 0 ; j < 4;j ++ )
				 {
			        if(camp[s] == 0)
					{
						s++;
							e++;
						gotoxy(3,e);
						cout<<x[1][i][j]<<": even";
					}

					else
					{
						s++;
						e++;
						gotoxy(3,e);
						cout<<x[1][i][j]<<": odd";

					}

					}

}

void campare(double x[3][10][4])
{

    int s=0;
	int e=1;
	int camp[40] = {0} ;//float number.
 

       

        

           for( int j = 0 ; j < 10 ; j ++ )

		        

                 for( int k = 0 ; k < 4 ; k ++ )

				 {
			      camp[s] = int(x[2][j][k]) % 2 ;
					s++;	
				 }
		        s=0;
            for( int i = 0 ; i < 10 ; i ++ )
		        
                 for( int j = 0 ; j < 4;j ++ )
				 {
			        if(camp[s] == 0)
					{
						s++;
							e++;
						gotoxy(3,e);
						cout<<x[2][i][j]<<": even";
					}

					else
					{
						s++;
						e++;
						gotoxy(3,e);
						cout<<x[2][i][j]<<": odd";

					}

					}
}
void campare(float x,int e)
{

   float y=0;
	
	int camp = 0 ;//float number.
 
		y=floor(x);
       
		camp = int(y) % 2;

        if(camp==0)
		{
			e++;
			gotoxy(3,e);
			cout<<y<<": even";
		}
		else
		{
			e++;
            gotoxy(3,e);
			cout<<y<<": odd";
		}
        

}
