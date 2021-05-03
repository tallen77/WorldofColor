// team clover
// elizabeth rubio, kathryn compton, taylor allen, janaye loper

// main / driver program for A WORLD OF COLOR
#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <unistd.h>
#include <iomanip>
#include "Player.h"
using namespace std;

// struct for array of challenge questions and answers
struct Challenge
{
    string question;
    string answer;
};

// (non-member) function prototypes
void round(Player&, Challenge[], string[], Player&,Player playerOne,Player playerTwo);
void showMap(string[],Player&,Player&);

//main function
int main()
{
    // splash screen (title and map)
    cout<<"╔═╗  ╦ ╦╔═╗╦═╗╦  ╔╦╗  ╔═╗╔═╗  ╔═╗╔═╗╦  ╔═╗╦═╗ ┬" <<endl;////calvin s from https://patorjk.com/
    cout<<"╠═╣  ║║║║ ║╠╦╝║   ║║  ║ ║╠╣   ║  ║ ║║  ║ ║╠╦╝ │" <<endl;
    cout<<"╩ ╩  ╚╩╝╚═╝╩╚═╩═╝═╩╝  ╚═╝╚    ╚═╝╚═╝╩═╝╚═╝╩╚═ o" <<endl;
    
    
    cout<<"                           ***          ***"<<endl;
    cout<<"                        ***    **     **   ***"<<endl;
    sleep(1);
    cout<<"                       **        ** **       **"<<endl;
    cout<<"                ***    **          *         **    ***"<<endl;
    sleep(1);
    cout<<"            **      **  **         3        **  **     **"<<endl;
    cout<<"           **         **  **              **  **         **"<<endl;
    sleep(1);
    cout<<"          *             *  *             *  *              *"<<endl;
    cout<<"           **            *  *   * * *   * *              **"<<endl;
    sleep(1);
    cout<<"             **            ** *        ***             **"<<endl;
    cout<<"               *           *              *             *"<<endl;
    sleep(1);
    cout<<"                *    4    *       6        *      2     *"<<endl;
    cout<<"               *           *              *              *"<<endl;
    sleep(1);
    cout<<"             **             * *       * * *               **"<<endl;
    cout<<"           **             *  *  * * *  *    *              **"<<endl;
    sleep(1);
    cout<<"          *             *   *            *    *            *"<<endl;
    cout<<"           **          **  *       5      *     **        **"<<endl;
    sleep(1);
    cout<<"             **      **  **                **     **   **"<<endl;
    cout<<"                ***    **                   **      ***"<<endl;
    sleep(1);
    cout<<"                     **            *          **   1 *"<<endl;
    cout<<"                      **         * *         ** *       *  * "<<endl;
    sleep(1);
    cout<<"                        *     **   **       *     *        *"<<endl;
    cout<<"                         **  *       *   **         *     *"<<endl;
    sleep(1);
    cout<<"                                                      ** "<<endl;
    /////////////////////////////////////////////////////////////////////////clovetopia
    
    cout<<"╔═╗  ╦    ╔═╗  ╦  ╦  ╔═╗  ╔╦╗  ╔═╗  ╔═╗  ╦  ╔═╗"<<endl;
    usleep(500000);
    cout<<"║    ║    ║ ║  ╚╗╔╝  ║╣    ║   ║ ║  ╠═╝  ║  ╠═╣"<<endl;
    usleep(500000);
    cout<<"╚═╝  ╩═╝  ╚═╝   ╚╝   ╚═╝   ╩   ╚═╝  ╩    ╩  ╩ ╩"<<endl;
    usleep(500000);
    cout<<endl<<endl;
    /////////////////////////////////////////////////////////////////////////
    // dramatic backstory
    string line1="The year was 2099";
    for(int i=0;i<line1.size();i++)
    {
        cout.flush();
        usleep(100000);
        cout<<line1[i];
    }
    string dots=".....";
    for(int i=0;i<dots.size();i++)
    {
        cout.flush();
        usleep(200000);
        cout<<dots[i];
    }
    cout<<endl;
    string line2="The volcanoes erupted for weeks, scorching most of the earth, making it uninhabitable.";
    for(int i=0;i<line2.size();i++)
    {
        cout.flush();
        usleep(100000);
        cout<<line2[i];
    }
    cout<<endl;
    string line3="Fire rained down from above, ash painting the world gray.";
    for(int i=0;i<line3.size();i++)
    {
        cout.flush();
        usleep(100000);
        cout<<line3[i];
    }
    cout<<endl;
    string line4="When the dust settled all survivors fled to the last country still standing";
    for(int i=0;i<line4.size();i++)
    {
        cout.flush();
        usleep(100000);
        cout<<line4[i];
    }
    for(int i=0;i<dots.size();i++)
    {
        cout.flush();
        usleep(200000);
        cout<<dots[i];
    }
    cout<<endl;
    string line5="The world is bleak and full of darkness. It is now a race to see who can bring color back, and lead the people into this new era." ;
    for(int i=0;i<line5.size();i++)
    {
        cout.flush();
        usleep(100000);
        cout<<line5[i];
    }
    cout<<endl;
    string line6="You must fight for your people and return color to the world, but alas, there is another, your rival.";
    for(int i=0;i<line6.size();i++)
    {
        cout.flush();
        usleep(100000);
        cout<<line6[i];
    }
    cout<<endl;
    string line7="Start your journey and fight valianty, for the fate and color of the world rests in your hands.";
    for(int i=0;i<line7.size();i++)
    {
        cout.flush();
        usleep(100000);
        cout<<line7[i];
    }
    cout<<endl<<endl<<endl;
 
 /////////////////////////////////////////////////////
 Player playerOne;
 Player playerTwo;
 int choice;
 string colorChoice;
 string playerName;
 string weaponChoice;
 ////////////////////////////////////////////////////
 // menu screen
 cout<<"┬ ┬┌─┐┬  ┌─┐┌─┐┌┬┐┌─┐  ┌┬┐┌─┐  ┌─┐  ┬ ┬┌─┐┬─┐┬  ┌┬┐  ┌─┐┌─┐  ┌─┐┌─┐┬  ┌─┐┬─┐ ┬"<<endl;
 cout<<"│││├┤ │  │  │ ││││├┤    │ │ │  ├─┤  ││││ │├┬┘│   ││  │ │├┤   │  │ ││  │ │├┬┘ │"<<endl; 
 cout<<"└┴┘└─┘┴─┘└─┘└─┘┴ ┴└─┘   ┴ └─┘  ┴ ┴  └┴┘└─┘┴└─┴─┘─┴┘  └─┘└    └─┘└─┘┴─┘└─┘┴└─ o"<<endl; 
 cout<<"(1)___S t a r t  G a m e______"<<endl;
 cout<<"(2)___H o w  t o  P l a y_____"<<endl;
 cout<<"(3)___W e a p o n  S t a t s__"<<endl;
 cout<<"(4)___C r e d i t s___________"<<endl;
 cout<<"(5)___E x i t_________________"<<endl;
 cin>>choice;
    
        switch (choice)
        {
            case 1: cout<<"Let's Begin!"<<endl<<endl;
            break;
            case 2: cout<<"Throughout the game you will be prompted to enter a letter, number, or a word."<<endl;
                    cout<<"By entering these you will be able to make game decisions and progress from level to level."<<endl<<endl;
            break;
            case 3: cout<<"┬ ┬┌─┐┌─┐┌─┐┌─┐┌┐┌  ┌─┐┌┬┐┌─┐┌┬┐┌─┐"<<endl;
                    cout<<"│││├┤ ├─┤├─┘│ ││││  └─┐ │ ├─┤ │ └─┐"<<endl;
                    cout<<"└┴┘└─┘┴ ┴┴  └─┘┘└┘  └─┘ ┴ ┴ ┴ ┴ └─┘"<<endl;
                    cout<<"____________________________________________  "<<endl;
                    cout<<"|SWORD     Level 1  |  Level 2  |  Level 3  | "<<endl;
                    cout<<"|Damage:      3     |     4     |     5     | "<<endl;
                    cout<<"|Defense:     2     |     3     |     4     | "<<endl;
                    cout<<"|Reliability: 3     |     4     |     5     | "<<endl;
                    cout<<"____________________________________________  "<<endl;
                    cout<<"|CLUB      Level 1  |  Level 2  |  Level 3  | "<<endl;
                    cout<<"|Damage:      2     |     3     |     4     | "<<endl;
                    cout<<"|Defense:     1     |     2     |     3     | "<<endl;
                    cout<<"|Reliability: 2     |     3     |     4     | "<<endl;
                    cout<<"____________________________________________  "<<endl;
                    cout<<"|CROSSBOW  Level 1  |  Level 2  |  Level 3  | "<<endl;
                    cout<<"|Damage:      1     |     2     |     3     | "<<endl;
                    cout<<"|Defense:     3     |     4     |     5     | "<<endl;
                    cout<<"|Reliability: 1     |     2     |     3     | "<<endl;
                    cout<<"--------------------------------------------- "<<endl;
            break;
            case 4: cout<<"All Title fonts from (https://patorjk.com/)"<<endl;//give credits for ascii art from end and clover
                    cout<<"Map design inspired by shamrock art from(ascii.co.uk)"<<endl<<endl;
            break;
            case 5: cout<<"Goodbye...Thank you for playing 'A World of Color'!"<<endl;
                    exit(EXIT_SUCCESS);
            break;
            default: cout<<"Please enter a valid menu choice(1,2,3,4,5)."<<endl<<endl;
        }
        while(choice==2 || choice==3 || choice==4)///////takes user back to menu if 2 3 or 4
        {
            cout<<"(1)___S t a r t  G a m e______"<<endl;
            cout<<"(2)___H o w  t o  P l a y_____"<<endl;
            cout<<"(3)___W e a p o n  S t a t s__"<<endl;
            cout<<"(4)___C r e d i t s___________"<<endl;
            cout<<"(5)___E x i t_________________"<<endl;
            cin>>choice;
            switch (choice)
            {
                case 1: cout<<"Let's Begin!"<<endl<<endl;
                break;
                case 2: cout<<"Throughout the game you will be prompted to enter a letter, number, or a word."<<endl;
                        cout<<"By entering these you will be able to make game decisions and progress from level to level."<<endl<<endl;
                break;
                case 3: cout<<"┬ ┬┌─┐┌─┐┌─┐┌─┐┌┐┌  ┌─┐┌┬┐┌─┐┌┬┐┌─┐"<<endl;
                        cout<<"│││├┤ ├─┤├─┘│ ││││  └─┐ │ ├─┤ │ └─┐"<<endl;
                        cout<<"└┴┘└─┘┴ ┴┴  └─┘┘└┘  └─┘ ┴ ┴ ┴ ┴ └─┘"<<endl;
                        cout<<"____________________________________________  "<<endl;
                        cout<<"|SWORD     Level 1  |  Level 2  |  Level 3  | "<<endl;
                        cout<<"|Damage:      3     |     4     |     5     | "<<endl;
                        cout<<"|Defense:     2     |     3     |     4     | "<<endl;
                        cout<<"|Reliability: 3     |     4     |     5     | "<<endl;
                        cout<<"____________________________________________  "<<endl;
                        cout<<"|CLUB      Level 1  |  Level 2  |  Level 3  | "<<endl;
                        cout<<"|Damage:      2     |     3     |     4     | "<<endl;
                        cout<<"|Defense:     1     |     2     |     3     | "<<endl;
                        cout<<"|Reliability: 2     |     3     |     4     | "<<endl;
                        cout<<"____________________________________________  "<<endl;
                        cout<<"|CROSSBOW  Level 1  |  Level 2  |  Level 3  | "<<endl;
                        cout<<"|Damage:      1     |     2     |     3     | "<<endl;
                        cout<<"|Defense:     3     |     4     |     5     | "<<endl;
                        cout<<"|Reliability: 1     |     2     |     3     | "<<endl;
                        cout<<"--------------------------------------------- "<<endl;
                break;
                case 4: cout<<"All Title fonts from (https://patorjk.com/)"<<endl<<endl;//give credits for ascii art from end and clover
                        cout<<"Map design inspired by shamrock art from(ascii.co.uk)"<<endl<<endl;
                break;
                case 5: cout<<"Goodbye...Thank you for playing 'A World of Color'!"<<endl;
                        exit(EXIT_SUCCESS);
                break;
                default: cout<<"Please enter a valid menu choice(1,2,3,4,5)."<<endl<<endl;
            }
            while(choice!=1 && choice!=2 && choice!=3 && choice!=4)/////input validation for switch menu
            {
                 cout<<"(1)___S t a r t  G a m e______"<<endl;
                 cout<<"(2)___H o w  t o  P l a y_____"<<endl;
                 cout<<"(3)___W e a p o n  S t a t s__"<<endl;
                 cout<<"(4)___C r e d i t s___________"<<endl;
                 cout<<"(5)___E x i t_________________"<<endl;
                 cin>>choice;
                 
                 switch (choice)
                    {
                        case 1: cout<<"Let's Begin!"<<endl<<endl;
                        break;
                        case 2: cout<<"Throughout the game you will be prompted to enter a letter, number, or a word."<<endl;
                                cout<<"By entering these you will be able to make game decisions and progress from level to level."<<endl<<endl;
                        break;
                        case 3: cout<<"┬ ┬┌─┐┌─┐┌─┐┌─┐┌┐┌  ┌─┐┌┬┐┌─┐┌┬┐┌─┐"<<endl;
                                cout<<"│││├┤ ├─┤├─┘│ ││││  └─┐ │ ├─┤ │ └─┐"<<endl;
                                cout<<"└┴┘└─┘┴ ┴┴  └─┘┘└┘  └─┘ ┴ ┴ ┴ ┴ └─┘"<<endl;
                                cout<<"____________________________________________  "<<endl;
                                cout<<"|SWORD     Level 1  |  Level 2  |  Level 3  | "<<endl;
                                cout<<"|Damage:      3     |     4     |     5     | "<<endl;
                                cout<<"|Defense:     2     |     3     |     4     | "<<endl;
                                cout<<"|Reliability: 3     |     4     |     5     | "<<endl;
                                cout<<"____________________________________________  "<<endl;
                                cout<<"|CLUB      Level 1  |  Level 2  |  Level 3  | "<<endl;
                                cout<<"|Damage:      2     |     3     |     4     | "<<endl;
                                cout<<"|Defense:     1     |     2     |     3     | "<<endl;
                                cout<<"|Reliability: 2     |     3     |     4     | "<<endl;
                                cout<<"____________________________________________  "<<endl;
                                cout<<"|CROSSBOW  Level 1  |  Level 2  |  Level 3  | "<<endl;
                                cout<<"|Damage:      1     |     2     |     3     | "<<endl;
                                cout<<"|Defense:     3     |     4     |     5     | "<<endl;
                                cout<<"|Reliability: 1     |     2     |     3     | "<<endl;
                                cout<<"--------------------------------------------- "<<endl;
                        break;
                        case 4: cout<<"All Title fonts from (https://patorjk.com/)"<<endl<<endl;//give credits for ascii art from end and clover
                                cout<<"Map design inspired by shamrock art from(ascii.co.uk)"<<endl<<endl;
                        break;
                        case 5: cout<<"Goodbye...Thank you for playing 'A World of Color'!"<<endl;
                                exit(EXIT_SUCCESS);
                        break;
                        default: cout<<"Please enter a valid menu choice(1,2,3)."<<endl<<endl;
                    }
            }
        }
 ////////////////////////////////////get player one info
 cin.ignore();
 cout<<"What is Player 1's name?"<<endl;
 getline(cin,playerName);
 playerOne.setName(playerName);
 cout<<"What color would Player 1 like? (enter blue or green)"<<endl;
 getline(cin,colorChoice);
 while(colorChoice!="blue" && colorChoice!="Blue" && colorChoice!="green" && colorChoice!="Green")////////input validation for color
 {
     cout<<"That is not a valid color choice! Please enter blue or green."<<endl;
     getline(cin,colorChoice);
 }
 playerOne.setColor(colorChoice);
 //set player two color based on player one's color choice
 if(playerOne.getColor()=="blue"|| playerOne.getColor()=="Blue")
 {
     colorChoice="green";
     playerTwo.setColor(colorChoice);
 }
 else if(playerOne.getColor()=="green"|| playerOne.getColor()=="Green")
 {
     colorChoice="blue";
     playerTwo.setColor(colorChoice);
 }
 /////////
 cout<<"Which starting weapon would Player 1 like? (enter 1 for sword, 2 for crossbow, or 3 for club)"<<endl;
 getline(cin,weaponChoice);
 ////////
    if(weaponChoice=="1")
    {
         weaponChoice="sword";
    }
    else if(weaponChoice=="2")
    {
         weaponChoice="crossbow";
    }
     else if(weaponChoice=="3")
    {
         weaponChoice="club";
    }
///////// validate weapon choice
    while(weaponChoice!="sword" && weaponChoice!="crossbow" && weaponChoice!="club")///////input validation for weapon choice
    {
        cout<<"That is an invalid choice! Please enter 1 for sword, 2 for crossbow, or 3 for club"<<endl;
        getline(cin,weaponChoice);
        if(weaponChoice=="1")
        {
            weaponChoice="sword";
        }
        else if(weaponChoice=="2")
        {
             weaponChoice="crossbow";
        }
         else if(weaponChoice=="3")
        {
             weaponChoice="club";
        }
    }
 ////////////player one info recap
 playerOne.setWeapon(weaponChoice);
 playerOne.setWeaponLevel(1);
 cout<<endl<<"Player 1, "<<playerOne.getName()<<", You chose to represent the color "
     <<playerOne.getColor()<<" ,and will be using a "
     <<playerOne.getWeapon()<<" , in your journey to claim territory and bring color back to the world"<<endl<<endl;
/////////////////////////////////////////get player two info
 cout<<"What is Player 2's name?"<<endl;
 getline(cin,playerName);
 playerTwo.setName(playerName);
 cout<<"Player 2, your color will be: "<<playerTwo.getColor()<<endl;
 cout<<"Which starting weapon would Player 2 like?(enter 1 for sword, 2 for crossbow, or 3 for club)"<<endl;
 getline(cin,weaponChoice);
 ///////
 if(weaponChoice=="1")
    {
         weaponChoice="sword";
    }
    else if(weaponChoice=="2")
    {
         weaponChoice="crossbow";
    }
     else if(weaponChoice=="3")
    {
         weaponChoice="club";
    }
///////
    while(weaponChoice!="sword" && weaponChoice!="crossbow" && weaponChoice!="club")/////input validation for weapon choice
    {
        cout<<"That is an invalid choice! Please enter 1 for sword, 2 for crossbow, or 3 for club"<<endl;
        getline(cin,weaponChoice);
        if(weaponChoice=="1")
        {
            weaponChoice="sword";
        }
        else if(weaponChoice=="2")
        {
             weaponChoice="crossbow";
        }
         else if(weaponChoice=="3")
        {
             weaponChoice="club";
        }
    }
////////player two info recap
 playerTwo.setWeapon(weaponChoice);
 playerTwo.setWeaponLevel(1);
 cout<<endl<<"Player 2, "<<playerTwo.getName()<<", You chose to represent the color "
     <<playerTwo.getColor()<<" ,and will be using a "
     <<playerTwo.getWeapon()<<" , in your journey to claim territory and bring color back to the world"<<endl<<endl;

//////////////////////////////read in questions and answers file
 int NUMQ = 30; // number of questions
 Challenge quests[NUMQ]; // array of structs to hold corresponding questions and answers
 ifstream inFile;
 inFile.open("questions.txt"); // open file containing questions
 if(!inFile)
 {
     cout<<"you forgot to add you questions file!"<<endl;
     exit(EXIT_FAILURE);
 }
 for(int i=0;i<NUMQ;i++) // read in qs and as
 {
     getline(inFile,quests[i].question);
     getline(inFile,quests[i].answer);
 }

 /////////////////////////array of strings for territory ownership
 string terrOwn[6]={"-","-","-","-","-","-"};

 /////////////////////making object copies for map
 Player playerOneCopy=playerOne;
 Player playerTwoCopy=playerTwo;

 ///////////////////////////loop to call round function
 for(int i=0;i<6;i++)
 {
   cout<<endl;
   cout<<"~ P L A Y E R  1    R O U N D  "<<i+1<<" ~"<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   round(playerOne,quests,terrOwn,playerTwo,playerOneCopy,playerTwoCopy);
   cout<<"~ P L A Y E R  2    R O U N D  "<<i+1<<" ~"<<endl;
   cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
   round(playerTwo,quests,terrOwn,playerOne,playerOneCopy,playerTwoCopy);
 }

 ////////////////////////////////////congrats you have reached the end :)
 // determine winner/tie
 int p1wins=0;
 int p2wins=0;
 string winner=" ";
 for(int i=0;i<6;i++)
 {
     if(terrOwn[i]==playerOne.getName())
     {
        p1wins++; 
     }
     else if(terrOwn[i]==playerTwo.getName())
     {
        p2wins++; 
     }
 }
 if(p1wins>p2wins)
 {
     winner=playerOne.getName();
 }
 else if(p2wins>p1wins)
 {
     winner=playerTwo.getName();
 }
 else if(p1wins==p2wins)
 {
     if(playerOne.getCoins()>playerTwo.getCoins())
     {
         winner=playerOne.getName();
     }
     else if(playerOne.getCoins()<playerTwo.getCoins())
     {
         winner=playerTwo.getName();
     }
     else if(playerOne.getCoins()==playerTwo.getCoins())
     {
         winner=playerOne.getName()+" and "+playerTwo.getName();
     }
 }
 /////////////////////////////closing story of new leader of the people
	 string e1="Twas a difficult journey and you have both fought courageously.";
	 for(int i=0;i<e1.size();i++)
	 {
	    cout.flush();
	    usleep(100000);
	    cout<<e1[i];
	 }
	 cout<<endl;
	 string e2;
	 if(winner==playerOne.getName())
     {
         e2="However, it is time to unveil the leader of the new world...";
     }
     else if(winner==playerTwo.getName())
     {
         e2="However, it is time to unveil the leader of the new world...";
     }
     else
     {
         e2="However, it is time to unveil the leaders of the new world...";
     }
	 for(int i=0;i<e2.size();i++)
	 {
	    cout.flush();
	    usleep(100000);
	    cout<<e2[i];
	 }
	 cout<<endl;
	 for(int i=0;i<winner.size();i++)
	 {
	    cout.flush();
	    usleep(100000);
	    cout<<winner[i];
	 }
	 string e3;
     if(winner==playerOne.getName())
     {
         e3=", you have brought peace and color back to the once dreary world.";
     }
     else if(winner==playerTwo.getName())
     {
         e3=", you have brought peace and color back to the once dreary world.";
     }
     else
     {
         e3=", you have both brought peace and color back to the once dreary world.";
     }
	 for(int i=0;i<e3.size();i++)
	 {
	    cout.flush();
	    usleep(100000);
	    cout<<e3[i];
	 }
	 cout<<endl;
	 for(int i=0;i<winner.size();i++)
	 {
	    cout.flush();
	    usleep(100000);
	    cout<<winner[i];
	 }
	 string e4;
	 if(winner==playerOne.getName())
     {
        e4=", your name will be carved into history, your tale told on tongues for generations to come, the universe ever grateful for your sacrifice.";
     }
     else if(winner==playerTwo.getName())
     {
        e4=", your name will be carved into history, your tale told on tongues for generations to come, the universe ever grateful for your sacrifice.";
     }
     else
     {
        e4=", your names will be carved into history, your tale told on tongues for generations to come, the universe ever grateful for your sacrifice.";
     }
     
	for(int i=0;i<e4.size();i++)
	{
	   cout.flush();
	   usleep(100000);
	   cout<<e4[i];
	}
	cout<<endl<<endl;
	/////////////////////////the end in ascii art (calvin s from https://patorjk.com)
 
    cout<< "╔╦╗  ╦ ╦  ╔═╗    ╔═╗  ╔╗╔  ╔╦╗  " <<endl; 
    usleep(500000);
    cout<< " ║   ╠═╣  ║╣     ║╣   ║║║   ║║  "<<endl; 
    usleep(500000);
    cout<< " ╩   ╩ ╩  ╚═╝    ╚═╝  ╝╚╝  ═╩╝"<<endl; 
    usleep(500000);
    
	return 0;
}// end of main

////////////////////////
// round function
void round(Player &p, Challenge challenges[],string terrOwn[], Player &o,Player playerOne,Player playerTwo)
{
	char choice, weaponSwap;
	bool back = 1;
	cout << "it's your turn, " << p.getName() << endl << endl;
  	usleep(500000);
	//////////////
	// weapon swapping / upgrading

	cout << "your current weapon is a level " << p.getWeaponLevel() << " " << p.getWeapon()<<endl;
  	usleep(500000);
	while(back)
	{
	  cout << "your current amount of coins: "<<p.getCoins()<<endl;
		cout << "\nwill you keep, upgrade(25c), or swap(50c) your weapon?\nk/u/s: ";
		cin >> choice;
		
		choice = tolower(choice);
		while(choice != 'k' && choice != 'u' && choice != 's')
		{
			cout << "invalid choice, please enter k, u, or s:";
			cin >> choice;
			choice = tolower(choice);
		}
		if(choice == 'k')
		{
			cout << "\n\nyou have chosen to continue using your current weapon" << endl;
			back = 0;
		}
		else if(choice == 'u')
		{
			cout << "\n\nyou have chosen to upgrade your " << p.getWeapon() << endl;

			if(p.getWeaponLevel() == 3)
			{
				cout << "this weapon is level 3 and cannot be upgraded further\n";
				back = 1;
			}
			else if(p.getWeaponLevel() == 1)
			{
				if(p.getCoins() < 25)
				{
					cout << "sorry, you do not have enough coins to upgrade "
					 	 << "your weapon to level 2\n";
					back = 1;
				}
				else // player has enough coins for upgrade
				{
					p.setWeaponLevel(2); // upgrade to level 2
                    p.setCoins(p.getCoins()-25);
					cout << "your weapon has been upgraded to level 2" << endl;
					cout << "your current amount of coins: "<<p.getCoins()<<endl;
					back = 0;
				}
			}
			else if(p.getWeaponLevel() == 2)
			{
				if(p.getCoins() < 25)
				{
					cout << "sorry, you do not have enough coins to upgrade "
					 	 << "your weapon to level 3\n";
					back = 1;
				}
				else // player has enough coins for upgrade
				{
					p.setWeaponLevel(3); // upgrade to level 3
                    p.setCoins(p.getCoins()-25);
					cout << "your weapon has been upgraded to level 3" << endl;
					cout << "your current amount of coins: "<<p.getCoins()<<endl;
					back = 0;
				}
			}
		}
		else if(choice == 's')
		{
			cout << "\n\nyou have chosen to swap out your " << p.getWeapon() << endl;

			if(p.getCoins() < 50)
			{
				cout << "sorry, you do not have enough coins to swap your weapon\n";
				back = 1;
			}
			else // player has enough coins for swap
			{
         		p.setCoins(p.getCoins()-50);
				if(p.getWeapon() == "sword")
				{
					cout << "you can swap your sword out for a club (c) or a crossbow (b)\n"
						   << "which do you choose?\n(c/b):";
					cin  >> weaponSwap;
					weaponSwap = tolower(weaponSwap);

					while(weaponSwap != 'c' && weaponSwap != 'b')
					{
						cout << "invalid weapon choice! you can only choose from"
							 << "club (c) or crossbow (b):";
						cin >> weaponSwap;
						weaponSwap = tolower(weaponSwap);
					}
				}
				else if(p.getWeapon() == "crossbow")
				{
					cout << "you can swap your crossbow out for a club (c) or a sword (s)\n"
						 << "which do you choose?\n(c/s):";
					cin >> weaponSwap;
					while(weaponSwap != 'c' && weaponSwap != 's')
					{
						cout << "invalid weapon choice! you can only choose from"
							 << "club (c) or sword (s):";
						cin >> weaponSwap;
						weaponSwap = tolower(weaponSwap);
					}
				}
				else if(p.getWeapon() == "club")
				{
					cout << "you can swap your sword out for a sword (s) or a crossbow(b)\n"
						 << "which do you choose?\n(s/b):";
					cin >> weaponSwap;
					while(weaponSwap != 's' && weaponSwap != 'b')
					{
						cout << "invalid weapon choice! you can only choose from"
							 << "sword (s) or crossbow (b):";
						cin >> weaponSwap;
						weaponSwap = tolower(weaponSwap);
					}
				}
				if(weaponSwap == 'c')
				{
					p.setWeapon("club");
					p.setWeaponLevel(1);
					cout << "you have now equipped the club\n";
					cout << "your current amount of coins: "<<p.getCoins()<<endl;
				}
				else if(weaponSwap == 'b')
				{
					p.setWeapon("crossbow");
					p.setWeaponLevel(1);
					cout << "you have now equipped the crossbow\n";
					cout << "your current amount of coins: "<<p.getCoins()<<endl;
				}
				else if(weaponSwap == 's')
				{
					p.setWeapon("sword");
					p.setWeaponLevel(1);
					cout << "you have now equipped the sword\n";
					cout << "your current amount of coins: "<<p.getCoins()<<endl;
				}
				back = 0;
			}	
		}
	}
	cout << endl << endl;

	/////////////
	// challenge
	string ans; // user answer to challenge question
	bool correct;

	cout << "now that you have secured your weapon, you must face a challenge"<<endl;
  usleep(500000);
	cout << "this will determine if you are worthy of an attempt to conquer a territory"<<endl<<endl;
  usleep(500000);
	cout << "here is your challenge:\n\n";
  usleep(500000);

	// randomly generate subscript of question to choose
	unsigned seed = time(0);
	srand (seed);
	int MIN_VALUE = 0;
	int MAX_VALUE = 29;
	int qNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	cout << challenges[qNum].question << endl
		   << "please enter your answer: ";
	cin  >> ans;
    ans[0]=tolower(ans[0]);
	if(ans != challenges[qNum].answer)
	{
		correct = 0;
		cout << "incorrect!\n";
    usleep(500000);
		cout << "you will not have the chance to conquer a territory this round\n";
    usleep(500000);
		cout << "your turn is now over\n\n";
    usleep(500000);

	}
	else // correct
	{
		correct = 1;
		p.setCoins(p.getCoins()+25);
		cout << "correct!\n";
    usleep(500000);
		cout<< "you have earned 25 coins!\n";
    usleep(500000);
		cout<< "your current amount of coins: "<<p.getCoins()<<endl;
    usleep(500000);
		cout<< "you will now get the chance to conquer a territory!\n";
    usleep(500000);
	}

	/////////////
	// territory conquering

	if(correct) // if they answered right, they can do this
	{
		int terrChoice;
		bool success;
        bool attack=1;
        showMap(terrOwn,playerOne,playerTwo);
		cout << "select which territory you would like to conquer\n";
		////// PRINT MAP ///////
    
		cout << "choose 1, 2, 3, 4, 5, or 6: ";
		cin >> terrChoice;
		while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
		{
			cout << "you must choose a territory number 1-6:";
			cin >> terrChoice;
		}


		//successful but owned by other player
		char steal;
		/////////////////////////////////////////////////////////////////////////////////////////////if opponent owns the territory
        if(terrOwn[terrChoice-1]==o.getName())
        {
            cout<<"This territory is currently owned by "<<o.getName()<<endl;
            cout<<"Are you sure you want to attempt to steal from them? y/n"<<endl;
            cin>>steal;
            steal=tolower(steal);
            while(steal!='y'&& steal!='n')
            {
                cout<<"That is not a valid choice, please enter y or n"<<endl;
                cin>>steal;
                steal=tolower(steal);
            }
            if(steal=='y')
            {
                if(p.getDamage()>o.getDefense())
                {
                    terrOwn[terrChoice-1] = p.getName();
                    success=1;
                }
                else if(p.getDamage()<o.getDefense())
                {
                    terrOwn[terrChoice-1] = o.getName();
                    success=0;
                }
                else if(p.getDamage()==o.getDefense())
                {
                    if(p.getDefense()>o.getDefense())
                    {
                        terrOwn[terrChoice-1] = p.getName();
                        success=1;
                    }
                    else if(p.getDefense()<o.getDefense())
                    {
                        terrOwn[terrChoice-1] = o.getName();
                        success=0;
                    }
                    else if(p.getDefense()==o.getDefense())
                    {
                        if(p.getDamage()>o.getDamage())
                        {
                            terrOwn[terrChoice-1] = p.getName();
                            success=1;
                        }
                        else if(p.getDamage()<o.getDamage())
                        {
                            terrOwn[terrChoice-1] = o.getName();
                            success=0;
                        }
                        else if(p.getDamage()==o.getDamage())
                        {
                            if(p.getReliability()>o.getReliability())
                            {
                                terrOwn[terrChoice-1] = p.getName();
                                success=1;
                            }
                            else if(p.getReliability()<o.getReliability())
                            {
                                terrOwn[terrChoice-1] = o.getName();
                                success=0;
                            }
                            else // if all stats same, random chance picks winner
                            {
                              int MIN=0;
                              int MAX=1;
                              int q = (rand() % (MAX - MIN + 1)) + MIN;
                              if(q==0)
                              {
                                terrOwn[terrChoice-1] = p.getName();
                                success=1;
                              }
                              else if(q==1)
                              {
                                terrOwn[terrChoice-1] = o.getName();
                                success=0;
                              }
                            }
                        }
                    }
                }
            }
            while(steal=='n')
            {
               cout << "You've chosen not to steal."<<endl;
               showMap(terrOwn,playerOne,playerTwo);
               cout << "select which territory you would like to conquer\n";
        		////// PRINT MAP ///////
            
        	   cout << "choose 1, 2, 3, 4, 5, or 6: ";
        	   cin >> terrChoice;
        	   while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
        			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
        		{
        			cout << "you must choose a territory number 1-6:";
        			cin >> terrChoice;
        		} 
        		while(terrOwn[terrChoice-1]==o.getName())
        		{
        		    cout<<"You chose to not steal during this turn, please choose another territory"<<endl;
        		    showMap(terrOwn,playerOne,playerTwo);
        		    cout << "choose 1, 2, 3, 4, 5, or 6: ";
            	   cin >> terrChoice;
            	   while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
            			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
            		{
            			cout << "you must choose a territory number 1-6:";
            			cin >> terrChoice;
            		} 
        		}
                while(terrOwn[terrChoice-1]==p.getName())
                {
                    cout<<p.getName()<<", you own this territory already, please choose another territory to conquer"<<endl;
                    cout << "select which territory you would like to conquer\n";
            		////// PRINT MAP ///////
            		showMap(terrOwn,playerOne,playerTwo);
            		cout << "choose 1, 2, 3, 4, 5, or 6: ";
            		cin >> terrChoice;
            		while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
            			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
            		{
            			cout << "you must choose a territory number 1-6:";
            			cin >> terrChoice;
            		}
                }    
                if(terrOwn[terrChoice-1]=="-")
                {
                    steal='y';
                }
                else if(terrOwn[terrChoice-1]==o.getName())
                {
                    cout<<"sorry, you chose not to steal this turn, time's up, turn is over."<<endl;
                    steal='y';
                    attack=0;
                }
                else
                {
                    cout<<"sorry, there are no free territories and you've chosen not to steal this round\n"
                        <<"your turn is over."<<endl;
                    steal='y';
                    attack=0;
                }
            }//steal==n
            
		    
        }//(terrOwn[terrChoice-1]==o.getName())
        /////////////////////////////////////////////////////////////////////////////////////////////if player already owns territory
        else if(terrOwn[terrChoice-1]==p.getName())
        {
            cout<<p.getName()<<", you own this territory already, please choose another territory to conquer"<<endl;
            cout << "select which territory you would like to conquer\n";
    		////// PRINT MAP ///////
    		showMap(terrOwn,playerOne,playerTwo);
    		cout << "choose 1, 2, 3, 4, 5, or 6: ";
    		cin >> terrChoice;
    		while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
    			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
    		{
    			cout << "you must choose a territory number 1-6:";
    			cin >> terrChoice;
    		}
    		while(terrOwn[terrChoice-1]==p.getName())
    		{
    		    cout<<p.getName()<<", you own this territory already, please choose another territory to conquer"<<endl;
    		    cout << "select which territory you would like to conquer\n";
        		////// PRINT MAP ///////
        		showMap(terrOwn,playerOne,playerTwo);
        		cout << "choose 1, 2, 3, 4, 5, or 6: ";
        		cin >> terrChoice;
        		while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
        			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
        		{
        			cout << "you must choose a territory number 1-6:";
        			cin >> terrChoice;
        		}
    		}
            if(terrOwn[terrChoice-1]==o.getName())
            {
                cout<<"This territory is currently owned by "<<o.getName()<<endl;
                cout<<"Are you sure you want to attempt to steal from them? y/n"<<endl;
                cin>>steal;
                steal=tolower(steal);
                while(steal!='y'&& steal!='n')
                {
                    cout<<"That is not a valid choice, please enter y or n"<<endl;
                    cin>>steal;
                    steal=tolower(steal);
                }
                if(steal=='y')
                {
                    if(p.getDamage()>o.getDefense())
                    {
                        terrOwn[terrChoice-1] = p.getName();
                        success=1;
                    }
                    else if(p.getDamage()<o.getDefense())
                    {
                        terrOwn[terrChoice-1] = o.getName();
                        success=0;
                    }
                    else if(p.getDamage()==o.getDefense())
                    {
                        if(p.getDefense()>o.getDefense())
                        {
                            terrOwn[terrChoice-1] = p.getName();
                            success=1;
                        }
                        else if(p.getDefense()<o.getDefense())
                        {
                            terrOwn[terrChoice-1] = o.getName();
                            success=0;
                        }
                        else if(p.getDefense()==o.getDefense())
                        {
                            if(p.getDamage()>o.getDamage())
                            {
                                terrOwn[terrChoice-1] = p.getName();
                                success=1;
                            }
                            else if(p.getDamage()<o.getDamage())
                            {
                                terrOwn[terrChoice-1] = o.getName();
                                success=0;
                            }
                            else if(p.getDamage()==o.getDamage())
                            {
                                if(p.getReliability()>o.getReliability())
                                {
                                    terrOwn[terrChoice-1] = p.getName();
                                    success=1;
                                }
                                else if(p.getReliability()<o.getReliability())
                                {
                                    terrOwn[terrChoice-1] = o.getName();
                                    success=0;
                                }
                                else
                                {
                                  int MIN=0;
                                  int MAX=1;
                                  int q = (rand() % (MAX - MIN + 1)) + MIN;
                                  if(q==0)
                                  {
                                    terrOwn[terrChoice-1] = p.getName();
                                    success=1;
                                  }
                                  else if(q==1)
                                  {
                                    terrOwn[terrChoice-1] = o.getName();
                                    success=0;
                                  }
                                }
                            }
                        }
                    }
                }
                while(steal=='n')
                {
                   cout << "You've chosen not to steal."<<endl;
                   cout << "select which territory you would like to conquer\n";
            		////// PRINT MAP ///////
                   showMap(terrOwn,playerOne,playerTwo);
            	   cout << "choose 1, 2, 3, 4, 5, or 6: ";
            	   cin >> terrChoice;
            	   while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
            			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
            		{
            			cout << "you must choose a territory number 1-6:";
            			cin >> terrChoice;
            		} 
            		while(terrOwn[terrChoice-1]==o.getName())
            		{
            		    cout<<"You chose to not steal during this turn, please choose another territory"<<endl;
            		    showMap(terrOwn,playerOne,playerTwo);
            		    cout << "choose 1, 2, 3, 4, 5, or 6: ";
                	   cin >> terrChoice;
                	   while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
                			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
                		{
                			cout << "you must choose a territory number 1-6:";
                			cin >> terrChoice;
                		} 
            		}
                    while(terrOwn[terrChoice-1]==p.getName())
                    {
                        cout<<p.getName()<<", you own this territory already, please choose another territory to conquer"<<endl;
                        cout << "select which territory you would like to conquer\n";
                		////// PRINT MAP ///////
                		showMap(terrOwn,playerOne,playerTwo);
                		cout << "choose 1, 2, 3, 4, 5, or 6: ";
                		cin >> terrChoice;
                		while(terrChoice != 1 && terrChoice != 2 && terrChoice != 3 && 
                			  terrChoice != 4 && terrChoice != 5 && terrChoice != 6)
                		{
                			cout << "you must choose a territory number 1-6:";
                			cin >> terrChoice;
                		}
                    }
                    if(terrOwn[terrChoice-1]=="-")
                    {
                        steal='y';
                    }
                    else if(terrOwn[terrChoice-1]==o.getName())
                    {
                        cout<<"sorry, you chose not to steal this turn, time's up, turn is over."<<endl;
                        steal='y';
                        attack=0;
                    }
                    else
                    {
                        cout<<"sorry, there are no free territories and you've chosen not to steal this round\n"
                            <<"your turn is over."<<endl;
                        steal='y';
                        attack=0;
                    }
                }//while loop
             
            }//if(terrOwn[terrChoice-1]==o.getName())
        }//else if(terrOwn[terrChoice-1]==p.getName())
        /////////////////////////////////////////////////////////////////////////////////////////////else if no one owns territory
        else if(terrOwn[terrChoice-1]=="-")
        {
            // success calculation (factor in chance)

			int MIN_VALUE = 1;
			int MAX_VALUE = 10;
			int successNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
		
    		if(p.getReliability() == 5) // reliability level 5 - 90% chance of success
    		{
    			if(successNum < 10)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    
    		}
    		else if(p.getReliability() == 4) // reliability level 4 - 80% chance of success
    		{
    		if(successNum < 9)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    
    		}
    		else if(p.getReliability() == 3) // reliability level 3 - 70% chance of success
    		{
    			if(successNum < 8)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    
    		}
    		else if(p.getReliability() == 2) // reliability level 2 - 60% chance of success
    		{
    			if(successNum < 7)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    
    		}
    		else if(p.getReliability() == 1) // reliability level 1 - 50% chance of success
    		{
    			if(successNum < 6)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    		}
    		///////////////////////////////////////////////////////////////////////very end of round
    		if(success==1)
    		{
                terrOwn[terrChoice-1] = p.getName();
            	cout << "your attack was successful!\n\n";
                usleep(500000);
            	// show territory takeover animation
            	showMap(terrOwn,playerOne,playerTwo);
            	cout << "congratulations," << p.getName() << " on your new ownership of territory " 
            		 << terrChoice << "!\n\n";
             	usleep(500000);
             	cout << "your turn is now over\n\n";
             	usleep(500000);
             	attack=0;
    		}
    		else
    		{
    		    cout << "sorry! your attack was not successful\n";
            	usleep(500000);
        		cout << "pro gamer tip: try upgrading to a more reliable weapon!\n";
            	usleep(500000);
        		cout << "your turn is now over\n\n";
            	usleep(500000);
        		attack=0;
    		}
        }//else if(terrOwn[terrChoice-1]=="-")
        
        ///////////////////// success calculation (factor in chance)
        if(success==1 && terrOwn[terrChoice-1]!="-")
        {
			int MIN_VALUE = 1;
			int MAX_VALUE = 10;
			int successNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    		if(p.getReliability() == 5) // reliability level 5 - 90% chance of success
    		{
    			if(successNum < 10)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    
    		}
    		else if(p.getReliability() == 4) // reliability level 4 - 80% chance of success
    		{
    			if(successNum < 9)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    
    		}
    		else if(p.getReliability() == 3) // reliability level 3 - 70% chance of success
    		{
    			if(successNum < 8)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    
    		}
    		else if(p.getReliability() == 2) // reliability level 2 - 60% chance of success
    		{
    			if(successNum < 7)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    
    		}
    		else if(p.getReliability() == 1) // reliability level 1 - 50% chance of success
    		{
    			if(successNum < 6)
    			{
    				success = 1;
    			}
    			else
    			{
    				success = 0;
    			}
    		}
        }
		////////////////////////////end of success calculation
    	if(success == 0 && attack==1) // unsuccessful -> turn ends
    	{
			cout << "sorry! your attack was not successful\n";
      		usleep(500000);
			cout<< "pro gamer tip: try upgrading to a more reliable weapon!\n";
      		usleep(500000);
			cout<< "your turn is now over\n\n";
      		usleep(500000);
    	}
    	else if(success==1 && attack==1) // successful -> take over territory and claim ownership 
    	{
    		terrOwn[terrChoice-1] = p.getName();
    		cout << "your attack was successful!\n\n";
        	usleep(500000);
    		// show territory takeover animation
            showMap(terrOwn,playerOne,playerTwo);
    		cout << "congratulations," << p.getName() << " on your new ownership of territory " 
    			 << terrChoice << "!\n\n";
           	usleep(500000);
    		cout << "your turn is now over\n\n";
           	usleep(500000);
    	}////////end of success messages
	}//if(correct)
}//end of round function



// showMap - map printing function
void showMap(string terrOwn[],Player &playerOne,Player &playerTwo)
{
    string section1[10]={"**   **","*   *"," *   *"," *    *","  *    *","   *   1  *","     *       *  *","        *        *","            *    *"};
    string section2[15]={" ***"," **    **","**        **","*            *","*              **","*               **","               *","      2      *","            *","              **","              **","           *","*       **","*  **","**"};
    string section3[9] ={"                ***             ***","             ***     **     **     ***","    **        ** **        **   ","  **         *         ** "," **         3       **  "," **              **  ","   *           * ","*   * * *  * "};
    string section4[14]={"     ***","  **      **"," **         **","*             *"," **            *","   **           *","     *           *","       *     4    *","      *           *","    **           *","  **            *"," *             *","  **        **","     **  **  "};
    string section5[10]={"      * * * *  ","      **          **","      *       5       *","      **                  *","     **                   *","   **           *          *","    **         * *        **","     *      **   **      *","      **  *        *  **"};
    string section6[5] ={"* *        **","*           *","*     6     *","  *         *","    *       * * "};
    
    /////////////////////////////////////section 1 setting colors
    if(terrOwn[0]==playerOne.getName())
    {
        if(playerOne.getColor()=="blue")
        {
            //colors section one blue
            section1[0]={"*\033[3;104;30m ^   \033[0m*"};
            section1[1]={"*\033[3;104;30m  ^  \033[0m*"};
            section1[2]={"*\033[3;104;30m ^   \033[0m*"};
            section1[3]={"\033[3;104;30m^   ^^\033[0m*"};
            section1[4]={"*\033[3;104;30m ^     \033[0m*"};
            section1[5]={"*\033[3;104;30m   1 ^ \033[0m*"};
            section1[6]={"  *\033[3;104;30m  ^  ^  \033[0m*\033[3;104;30m ^ \033[0m*"};
            section1[7]={"      *\033[3;104;30m  ^    ^ \033[0m*"};
            section1[8]={"         *\033[3;104;30m   ^  \033[0m*"};
        }
        else if(playerOne.getColor()=="green")
        {
            section1[0]={"*\033[3;42;30m  ^  \033[0m*"};
            section1[1]={"*\033[3;42;30m^    \033[0m*"};
            section1[2]={"*\033[3;42;30m    ^\033[0m*"};
            section1[3]={"\033[3;42;30m ^^   \033[0m*"};
            section1[4]={"*\033[3;42;30m    ^  \033[0m*"};
            section1[5]={"  *\033[3;42;30m ^ 1   \033[0m*"};
            section1[6]={"     *\033[3;42;30m    ^  \033[0m*\033[3;42;30m ^ \033[0m*"};
            section1[7]={"        *\033[3;42;30m  ^  ^   \033[0m*"};
            section1[8]={"           *\033[3;42;30m   ^  \033[0m*"};
        }
    }
    else if(terrOwn[0]==playerTwo.getName())
    {
        if(playerTwo.getColor()=="blue")
        {
            //colors section one blue
            section1[0]={"*\033[3;104;30m ^   \033[0m*"};
            section1[1]={"*\033[3;104;30m  ^  \033[0m*"};
            section1[2]={"*\033[3;104;30m ^   \033[0m*"};
            section1[3]={"\033[3;104;30m^   ^^\033[0m*"};
            section1[4]={"*\033[3;104;30m ^     \033[0m*"};
            section1[5]={"*\033[3;104;30m   1 ^ \033[0m*"};
            section1[6]={"  *\033[3;104;30m  ^  ^  \033[0m*\033[3;104;30m ^ \033[0m*"};
            section1[7]={"      *\033[3;104;30m  ^    ^ \033[0m*"};
            section1[8]={"         *\033[3;104;30m   ^  \033[0m*"};
        }
        else if(playerTwo.getColor()=="green")
        {
            section1[0]={"*\033[3;42;30m  ^  \033[0m*"};
            section1[1]={"*\033[3;42;30m^    \033[0m*"};
            section1[2]={"*\033[3;42;30m    ^\033[0m*"};
            section1[3]={"\033[3;42;30m ^^   \033[0m*"};
            section1[4]={"*\033[3;42;30m    ^  \033[0m*"};
            section1[5]={"  *\033[3;42;30m ^ 1   \033[0m*"};
            section1[6]={"     *\033[3;42;30m    ^  \033[0m*\033[3;42;30m ^ \033[0m*"};
            section1[7]={"        *\033[3;42;30m  ^  ^   \033[0m*"};
            section1[8]={"           *\033[3;42;30m   ^  \033[0m*"};
        }
    }
    ////////////////////////////////////////////////////section 2 setting colors
    if(terrOwn[1]==playerOne.getName())
    {
        if(playerOne.getColor()=="blue")
        {
           //color blue
            section2[0]={" ***"};
            section2[1]={" **\033[3;104;30m  *  \033[0m**"};
            section2[2]={"**\033[3;104;30m *     *\033[0m**"};
            section2[3]={"*\033[3;104;30m   *   **    \033[0m*"};
            section2[4]={"*\033[3;104;30m**         **  \033[0m**"};
            section2[5]={"*\033[3;104;30m     ***      * \033[0m**"};
            section2[6]={"\033[3;104;30m *        *    \033[0m*"};
            section2[7]={"\033[3;104;30m     * 2     \033[0m*"};
            section2[8]={"\033[3;104;30m   ***        \033[0m*"};
            section2[9]={"\033[3;104;30m *          *  \033[0m**"};              
            section2[10]={"\033[3;104;30m       **     \033[0m**"};
            section2[11]={"\033[3;104;30m *  *      \033[0m*"};
            section2[12]={"*\033[3;104;30m    *  \033[0m**"};
            section2[13]={"*\033[3;104;30m * \033[0m**"};
            section2[14]={"**"};
        }
        else if(playerOne.getColor()=="green")
        {
             //color green
            section2[0]={" ***"};
            section2[1]={" **\033[3;42;30m *   \033[0m**"};
            section2[2]={"**\033[3;42;30m       **\033[0m**"};
            section2[3]={"*\033[3;42;30m  **        *\033[0m*"};
            section2[4]={"*\033[3;42;30m     ***      \033[0m**"};
            section2[5]={"*\033[3;42;30m   *        *** \033[0m**"};
            section2[6]={"\033[3;42;30m**        **   \033[0m*"};
            section2[7]={"\033[3;42;30m  *    2 *   \033[0m*"};
            section2[8]={"\033[3;42;30m     ***      \033[0m*"};
            section2[9]={"\033[3;42;30m   *         **\033[0m**"};              
            section2[10]={"\033[3;42;30m    *    *    \033[0m**"};
            section2[11]={"\033[3;42;30m **     ** \033[0m*"};
            section2[12]={"*\033[3;42;30m     * \033[0m**"};
            section2[13]={"*\033[3;42;30m  *\033[0m**"};
            section2[14]={"**"};
        }
    }
    else if(terrOwn[1]==playerTwo.getName())
    {
        if(playerTwo.getColor()=="blue")
        {
            //color blue
            section2[0]={" ***"};
            section2[1]={" **\033[3;104;30m  *  \033[0m**"};
            section2[2]={"**\033[3;104;30m *     *\033[0m**"};
            section2[3]={"*\033[3;104;30m   *   **    \033[0m*"};
            section2[4]={"*\033[3;104;30m**         **  \033[0m**"};
            section2[5]={"*\033[3;104;30m     ***      * \033[0m**"};
            section2[6]={"\033[3;104;30m *        *    \033[0m*"};
            section2[7]={"\033[3;104;30m     * 2     \033[0m*"};
            section2[8]={"\033[3;104;30m   ***        \033[0m*"};
            section2[9]={"\033[3;104;30m *          *  \033[0m**"};              
            section2[10]={"\033[3;104;30m       **     \033[0m**"};
            section2[11]={"\033[3;104;30m *  *      \033[0m*"};
            section2[12]={"*\033[3;104;30m    *  \033[0m**"};
            section2[13]={"*\033[3;104;30m * \033[0m**"};
            section2[14]={"**"};
        }
        else if(playerTwo.getColor()=="green")
        {
            //color green
            section2[0]={" ***"};
            section2[1]={" **\033[3;42;30m *   \033[0m**"};
            section2[2]={"**\033[3;42;30m       **\033[0m**"};
            section2[3]={"*\033[3;42;30m  **        *\033[0m*"};
            section2[4]={"*\033[3;42;30m     ***      \033[0m**"};
            section2[5]={"*\033[3;42;30m   *        *** \033[0m**"};
            section2[6]={"\033[3;42;30m**        **   \033[0m*"};
            section2[7]={"\033[3;42;30m  *    2 *   \033[0m*"};
            section2[8]={"\033[3;42;30m     ***      \033[0m*"};
            section2[9]={"\033[3;42;30m   *         **\033[0m**"};              
            section2[10]={"\033[3;42;30m    *    *    \033[0m**"};
            section2[11]={"\033[3;42;30m **     ** \033[0m*"};
            section2[12]={"*\033[3;42;30m     * \033[0m**"};
            section2[13]={"*\033[3;42;30m  *\033[0m**"};
            section2[14]={"**"};
        }
    }
    /////////////////////////////////////////section 3 setting colors
    if(terrOwn[2]==playerOne.getName())
    {
        if(playerOne.getColor()=="blue")
        {
           //color blue
            section3[0]={"                ***            ***"};
            section3[1]={"             ***\033[3;104;30m~~~~~\033[0m**     **\033[3;104;30m~~~~~\033[0m***"};
            section3[2]={"     **\033[3;104;30m~~~~~~~~\033[0m** **\033[3;104;30m~~~~~~~~\033[0m**   "};
            section3[3]={"  **\033[3;104;30m~~~~~~~~~\033[0m*\033[3;104;30m~~~~~~~~~\033[0m** "};
            section3[4]={" **\033[3;104;30m~~~~~~~~3~~~~~~~\033[0m**  "};
            section3[5]={" **\033[3;104;30m~~~~~~~~~~~~~~\033[0m**  "};
            section3[6]={"   *\033[3;104;30m~~~~~~~~~~~\033[0m* "};
            section3[7]={"*   * * *  * "};
        }
        else if(playerOne.getColor()=="green")
        {
             //color green
            section3[0]={"                ***            ***"};
            section3[1]={"             ***\033[3;42;30m~~~~~\033[0m**     **\033[3;42;30m~~~~~\033[0m***"};
            section3[2]={"     **\033[3;42;30m~~~~~~~~\033[0m** **\033[3;42;30m~~~~~~~~\033[0m**   "};
            section3[3]={"  **\033[3;42;30m~~~~~~~~~\033[0m*\033[3;42;30m~~~~~~~~~\033[0m** "};
            section3[4]={" **\033[3;42;30m~~~~~~~~3~~~~~~~\033[0m**  "};
            section3[5]={" **\033[3;42;30m~~~~~~~~~~~~~~\033[0m**  "};
            section3[6]={"   *\033[3;42;30m~~~~~~~~~~~\033[0m* "};
            section3[7]={"*   * * *  * "};
        }
    }
    else if(terrOwn[2]==playerTwo.getName())
    {
        if(playerTwo.getColor()=="blue")
        {
            //color blue
            section3[0]={"                ***            ***"};
            section3[1]={"             ***\033[3;104;30m~~~~~\033[0m**     **\033[3;104;30m~~~~~\033[0m***"};
            section3[2]={"     **\033[3;104;30m~~~~~~~~\033[0m** **\033[3;104;30m~~~~~~~~\033[0m**   "};
            section3[3]={"  **\033[3;104;30m~~~~~~~~~\033[0m*\033[3;104;30m~~~~~~~~~\033[0m** "};
            section3[4]={" **\033[3;104;30m~~~~~~~~3~~~~~~~\033[0m**  "};
            section3[5]={" **\033[3;104;30m~~~~~~~~~~~~~~\033[0m**  "};
            section3[6]={"   *\033[3;104;30m~~~~~~~~~~~\033[0m* "};
            section3[7]={"*   * * *  * "};
        }
        else if(playerTwo.getColor()=="green")
        {
            //color green
            section3[0]={"                ***            ***"};
            section3[1]={"             ***\033[3;42;30m~~~~~\033[0m**     **\033[3;42;30m~~~~~\033[0m***"};
            section3[2]={"     **\033[3;42;30m~~~~~~~~\033[0m** **\033[3;42;30m~~~~~~~~\033[0m**   "};
            section3[3]={"  **\033[3;42;30m~~~~~~~~~\033[0m*\033[3;42;30m~~~~~~~~~\033[0m** "};
            section3[4]={" **\033[3;42;30m~~~~~~~~3~~~~~~~\033[0m**  "};
            section3[5]={" **\033[3;42;30m~~~~~~~~~~~~~~\033[0m**  "};
            section3[6]={"   *\033[3;42;30m~~~~~~~~~~~\033[0m* "};
            section3[7]={"*   * * *  * "};
        }
    }
    ///////////////////////////////////////////section 4 setting colors
    if(terrOwn[3]==playerOne.getName())
    {
        if(playerOne.getColor()=="blue")
        {
           //color blue
            section4[0]={"     ***"};
            section4[1]={"   **\033[3;104;30m /\\ \033[0m**"};
            section4[2]={" **\033[3;104;30m  /  \\  \033[0m**"};
            section4[3]={" *\033[3;104;30m  /    \\   \033[0m*"};
            section4[4]={" **\033[3;104;30m/      \\   \033[0m*"};
            section4[5]={"   **\033[3;104;30m      \\ /\\\033[0m*"};
            section4[6]={"     *\033[3;104;30m      /  \\\033[0m*"};
            section4[7]={"       *\033[3;104;30m   / 4  \\\033[0m*"};
            section4[8]={"      *\033[3;104;30m/\\ /      \033[0m*"};
            section4[9]={"    **\033[3;104;30m/  \\      \033[0m*"};
            section4[10]={"  **\033[3;104;30m/    /\\    \033[0m*"};
            section4[11]={" *\033[3;104;30m /    /  \\  \033[0m*"};
            section4[12]={"  **\033[3;104;30m   /    \033[0m**"};
            section4[13]={"    **\033[3;104;30m/    \033[0m**"};
        }
        else if(playerOne.getColor()=="green")
        {
             //color green
            section4[0]={"     ***"};
            section4[1]={"   **\033[3;42;30m /\\ \033[0m**"};
            section4[2]={" **\033[3;42;30m  /  \\  \033[0m**"};
            section4[3]={" *\033[3;42;30m  /    \\   \033[0m*"};
            section4[4]={" **\033[3;42;30m/      \\   \033[0m*"};
            section4[5]={"   **\033[3;42;30m      \\ /\\\033[0m*"};
            section4[6]={"     *\033[3;42;30m      /  \\\033[0m*"};
            section4[7]={"       *\033[3;42;30m   / 4  \\\033[0m*"};
            section4[8]={"      *\033[3;42;30m/\\ /      \033[0m*"};
            section4[9]={"    **\033[3;42;30m/  \\      \033[0m*"};
            section4[10]={"  **\033[3;42;30m/    /\\    \033[0m*"};
            section4[11]={" *\033[3;42;30m /    /  \\  \033[0m*"};
            section4[12]={"  **\033[3;42;30m   /    \033[0m**"};
            section4[13]={"    **\033[3;42;30m/    \033[0m**"};
        }
    }
    else if(terrOwn[3]==playerTwo.getName())
    {
        if(playerTwo.getColor()=="blue")
        {
            //color blue
            section4[0]={"     ***"};
            section4[1]={"   **\033[3;104;30m /\\ \033[0m**"};
            section4[2]={" **\033[3;104;30m  /  \\  \033[0m**"};
            section4[3]={" *\033[3;104;30m  /    \\   \033[0m*"};
            section4[4]={" **\033[3;104;30m/      \\   \033[0m*"};
            section4[5]={"   **\033[3;104;30m      \\ /\\\033[0m*"};
            section4[6]={"     *\033[3;104;30m      /  \\\033[0m*"};
            section4[7]={"       *\033[3;104;30m   / 4  \\\033[0m*"};
            section4[8]={"      *\033[3;104;30m/\\ /      \033[0m*"};
            section4[9]={"    **\033[3;104;30m/  \\      \033[0m*"};
            section4[10]={"  **\033[3;104;30m/    /\\    \033[0m*"};
            section4[11]={" *\033[3;104;30m /    /  \\  \033[0m*"};
            section4[12]={"  **\033[3;104;30m   /    \033[0m**"};
            section4[13]={"    **\033[3;104;30m/    \033[0m**"};
        }
        else if(playerTwo.getColor()=="green")
        {
            //color green
            section4[0]={"     ***"};
            section4[1]={"   **\033[3;42;30m /\\ \033[0m**"};
            section4[2]={" **\033[3;42;30m  /  \\  \033[0m**"};
            section4[3]={" *\033[3;42;30m  /    \\   \033[0m*"};
            section4[4]={" **\033[3;42;30m/      \\   \033[0m*"};
            section4[5]={"   **\033[3;42;30m      \\ /\\\033[0m*"};
            section4[6]={"     *\033[3;42;30m      /  \\\033[0m*"};
            section4[7]={"       *\033[3;42;30m   / 4  \\\033[0m*"};
            section4[8]={"      *\033[3;42;30m/\\ /      \033[0m*"};
            section4[9]={"    **\033[3;42;30m/  \\      \033[0m*"};
            section4[10]={"  **\033[3;42;30m/    /\\    \033[0m*"};
            section4[11]={" *\033[3;42;30m /    /  \\  \033[0m*"};
            section4[12]={"  **\033[3;42;30m   /    \033[0m**"};
            section4[13]={"    **\033[3;42;30m/    \033[0m**"};
        }
    }
    //////////////////////////////////////////section 5 setting colors
    if(terrOwn[4]==playerOne.getName())
    {
        if(playerOne.getColor()=="blue")
        {
           //color blue
            section5[1]={"     *\033[3;104;30m /\\       \033[0m*"};
            section5[2]={"    *\033[3;104;30m   |   5 /\\   \033[0m*"};
            section5[3]={"     **\033[3;104;30m   /\\      |  /\\ \033[0m*"};
            section5[4]={"    **\033[3;104;30m    |           | /\\\033[0m*"};
            section5[5]={"   **\033[3;104;30m  /\\   /\\  \033[0m*\033[3;104;30m   /\\   | \033[0m*"};
            section5[6]={"    **\033[3;104;30m |    | \033[0m*  *\033[3;104;30m   |    \033[0m**"};
            section5[7]={"      *\033[3;104;30m  /\\ \033[0m**   **\033[3;104;30m /\\  \033[0m*"};
            section5[8]={"       **\033[3;104;30m| \033[0m*      *\033[3;104;30m | \033[0m**"};
        }
        else if(playerOne.getColor()=="green")
        {
             //color green
            section5[1]={"     *\033[3;42;30m /\\       \033[0m*"};
            section5[2]={"    *\033[3;42;30m   |   5 /\\   \033[0m*"};
            section5[3]={"     **\033[3;42;30m   /\\      |  /\\ \033[0m*"};
            section5[4]={"    **\033[3;42;30m    |           | /\\\033[0m*"};
            section5[5]={"   **\033[3;42;30m  /\\   /\\  \033[0m*\033[3;42;30m   /\\   | \033[0m*"};
            section5[6]={"    **\033[3;42;30m |    | \033[0m*  *\033[3;42;30m   |    \033[0m**"};
            section5[7]={"      *\033[3;42;30m  /\\ \033[0m**   **\033[3;42;30m /\\  \033[0m*"};
            section5[8]={"       **\033[3;42;30m| \033[0m*      *\033[3;42;30m | \033[0m**"};
        }
    }
    else if(terrOwn[4]==playerTwo.getName())
    {
        if(playerTwo.getColor()=="blue")
        {
            //color blue
            section5[1]={"     *\033[3;104;30m /\\       \033[0m*"};
            section5[2]={"    *\033[3;104;30m   |   5 /\\   \033[0m*"};
            section5[3]={"     **\033[3;104;30m   /\\      |  /\\ \033[0m*"};
            section5[4]={"    **\033[3;104;30m    |           | /\\\033[0m*"};
            section5[5]={"   **\033[3;104;30m  /\\   /\\  \033[0m*\033[3;104;30m   /\\   | \033[0m*"};
            section5[6]={"    **\033[3;104;30m |    | \033[0m*  *\033[3;104;30m   |    \033[0m**"};
            section5[7]={"      *\033[3;104;30m  /\\ \033[0m**   **\033[3;104;30m /\\  \033[0m*"};
            section5[8]={"       **\033[3;104;30m| \033[0m*      *\033[3;104;30m | \033[0m**"};
        }
        else if(playerTwo.getColor()=="green")
        {
            //color green
            section5[1]={"     *\033[3;42;30m /\\       \033[0m*"};
            section5[2]={"    *\033[3;42;30m   |   5 /\\   \033[0m*"};
            section5[3]={"     **\033[3;42;30m   /\\      |  /\\ \033[0m*"};
            section5[4]={"    **\033[3;42;30m    |           | /\\\033[0m*"};
            section5[5]={"   **\033[3;42;30m  /\\   /\\  \033[0m*\033[3;42;30m   /\\   | \033[0m*"};
            section5[6]={"    **\033[3;42;30m |    | \033[0m*  *\033[3;42;30m   |    \033[0m**"};
            section5[7]={"      *\033[3;42;30m  /\\ \033[0m**   **\033[3;42;30m /\\  \033[0m*"};
            section5[8]={"       **\033[3;42;30m| \033[0m*      *\033[3;42;30m | \033[0m**"};
        }
    }
    /////////////////////////////////section 6 setting colors
    if(terrOwn[5]==playerOne.getName())
    {
        if(playerOne.getColor()=="blue")
        {
           //color blue
            section6[0]={"* *\033[3;104;30m---------\033[0m**"};
            section6[1]={"*\033[3;104;30m-----------\033[0m*"};
            section6[2]={"*\033[3;104;30m-----6------\033[0m*"};
            section6[3]={"  *\033[3;104;30m----------\033[0m*"};
            section6[4]={"    *\033[3;104;30m---------\033[0m* * "};
        }
        else if(playerOne.getColor()=="green")
        {
             //color green
            section6[0]={"* *\033[3;42;30m---------\033[0m**"};
            section6[1]={"*\033[3;42;30m-----------\033[0m*"};
            section6[2]={"*\033[3;42;30m-----6------\033[0m*"};
            section6[3]={"  *\033[3;42;30m----------\033[0m*"};
            section6[4]={"    *\033[3;42;30m---------\033[0m* * "};
        }
    }
    else if(terrOwn[5]==playerTwo.getName())
    {
        if(playerTwo.getColor()=="blue")
        {
            //color blue
            section6[0]={"* *\033[3;104;30m---------\033[0m**"};
            section6[1]={"*\033[3;104;30m-----------\033[0m*"};
            section6[2]={"*\033[3;104;30m-----6------\033[0m*"};
            section6[3]={"  *\033[3;104;30m----------\033[0m*"};
            section6[4]={"    *\033[3;104;30m---------\033[0m* * "};
        }
        else if(playerTwo.getColor()=="green")
        {
            //color green
            section6[0]={"* *\033[3;42;30m---------\033[0m**"};
            section6[1]={"*\033[3;42;30m-----------\033[0m*"};
            section6[2]={"*\033[3;42;30m-----6------\033[0m*"};
            section6[3]={"  *\033[3;42;30m----------\033[0m*"};
            section6[4]={"    *\033[3;42;30m---------\033[0m* * "};
        }
    }
    //////actual printing of the map
    int num1=0;
    int num3=0;
    int num4=0;
    int num5=0;
    int num6=0;
    for(int b=0;b<2;b++)
    {
        cout<<section3[b]<<endl;
        num3++;
        usleep(100000);
    }
    for (int x=0;x<11;x++)
    {
        if(x>=6&&x<=11){
            cout<<section4[x]<<section6[num6]<<section2[x]<<endl;
            num6++;
            usleep(100000);
        }
        else{
            cout<<section4[x]<<section3[num3]<<section2[x]<<endl;
            num3++;
            usleep(100000);
        }
        num4++;
    }
    
    for(int y=0;y<3;y++)
    {
        cout<<section4[num4]<<section5[y]<<section1[y]<<section2[num4]<<endl;
        num1++;
        num4++;
        num5++;
        usleep(100000);
    }
    for(int z=0;z<6;z++)
    {
        cout<<"          "<<section5[num5]<<section1[num1]<<endl;
        num1++;
        num5++;
        usleep(100000);
    }
    cout<<section1[9];
    cout<<endl;
    usleep(100000);
}
