#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <sstream>
#include <unistd.h>
#include <cwchar>
#include <conio.h>
using namespace std;
//ofstream outf;

class aura
{
public: 
time_t now;
//datatypes
 int load;
 long double d,i;
 int j;
 int m; 
 int b;
 int ch,auth1=9604,pin;
 char call;
 char passwd[15],auth[15]="adios";
 char gnotes[10000],snotes[10000];
 char misc[50],ystring[50]="yes";
 char readconfname[15];
 int namecon=0;
 int timeconv=0;
 char name[15];
 
 //intro module
 //{
 char greet1[10]="hi";
 char greet2[10]="hey";
 char greet3[10]="heya";
 char greet4[10]="yo";
 char greet5[10]="hello";
 char greet6[10]="hi there";
 char greet7[20]="hey there";
 char greet8[10]="hey aura";
 //}
 

  //exit module
 //{
 char exit1[10]="bye";
 char exit2[10]="exit";
 char exit3[10]="logout";
 char exit4[10]="logoff";
 char exit5[10]="shutdown";
 char exit6[10]="sionara";
 //}
 
 
 
 
 	void Boot_animation()
 	{
 		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    Long_delay();
    cout<<"\t\t\t\t        ##             ##         ##     ##########             ##"<<endl;
   Ultrashort_delay();
   Ultrashort_delay();
   Ultrashort_delay();
    Ultrashort_delay();
    cout<<"\t\t\t\t       ####            ##         ##     ##       ##           ####"<<endl;
    Ultrashort_delay();
    Ultrashort_delay();
     Ultrashort_delay();
    Ultrashort_delay();
    cout<<"\t\t\t\t      ##  ##           ##         ##     ##       ##          ##  ##"<<endl;
    Ultrashort_delay();
    Ultrashort_delay();
    Ultrashort_delay();
     Ultrashort_delay();
    cout<<"\t\t\t\t     ##    ##          ##         ##     ##       ##         ##    ##"<<endl;
    Ultrashort_delay();
    Ultrashort_delay();
    Ultrashort_delay();
     Ultrashort_delay();
    cout<<"\t\t\t\t    ##########         ##         ##     ##########         ##########"<<endl;
    Ultrashort_delay();
    Ultrashort_delay();
     Ultrashort_delay();
    Ultrashort_delay();
    cout<<"\t\t\t\t   ##        ##        ##         ##     #####             ##        ##"<<endl;
    Ultrashort_delay();
    Ultrashort_delay();
     Ultrashort_delay();
    Ultrashort_delay();
    cout<<"\t\t\t\t  ##          ##        ##       ##      ##  ###          ##          ##"<<endl;
    Ultrashort_delay();
    Ultrashort_delay();
     Ultrashort_delay();
    Ultrashort_delay();
    cout<<"\t\t\t\t ##            ##   ##   #########   ##  ##     ###  ##  ##            ##"<<endl;
    Long_delay();
 	}
 	 
 	void Numeric_loading()
 	{
 		 for(load=0;load<=100;load++)
    {
    	Ultrashort_delay();
    	Ultrashort_delay();
    	cout<<"\b\b\b";
    	cout<<load<<"%";
    	Ultrashort_delay();
    	
	}
}
	
	void Dots_loading()
	    {
        Long_delay();
        std::cout << "." << std::flush;
        Long_delay();
        std::cout << "." << std::flush;
		Long_delay();
        std::cout << "." << std::flush;
		Long_delay();
        std::cout << "\b\b\b   \b\b\b" << std::flush;
   		 }
    
    
	void Loading_bar()
	{
    cout<<"\n\n\n\n\n";
    cout<<"\t\t\t\t[";
    int o=0;
	for(o=1;o<=72;o++)
	{
		
		cout<<"=";
		for(j=0;j<21;j++)
		{
   		 Ultrashort_delay();
		}
	}
	cout<<"]";
	}
	
	
	
	
 	void Wish_time()
 	{
 	stringstream ss;
 	time_t t = time(0);
    char buffer[9] = {0};
    strftime(buffer, 9, "%H", localtime(&t));
	for (int t=0;t< sizeof buffer/sizeof buffer [0];t++)
	ss<<buffer[t];
	ss>>timeconv; 
	}
	
	void Fetch_datetime()
	{
		time_t now = time(0);
	    char* dt = ctime(&now);
		Long_delay();
   cout <<"\n"<<dt << endl;

	}
	
	
    void Long_delay()
    {
       for(d=0;d<100405648;d++){}
    }
    
    
    void Short_delay()
    {
    for(d=0;d<115986000;d++){}
    }
     
     
    void Ultrashort_delay()
    {
    for(d=0;d<1009900;d++){}
    }
    
    
    void User_getnotes()
    {
    ofstream outf("Documents/usernotes.txt");
    cout<<"\nEnter your notes here:"<<endl;
    system("/A.U.R.A/Speech/entnotes.vbs");
    cin>>gnotes;
    Long_delay();
    cout<<"\nSaving notes...."<<endl;
    system("/A.U.R.A/Speech/u.vbs");
    Long_delay();
    outf<<gnotes<<"\n";
    Long_delay();
    outf.close();
    Long_delay();
    cout<<"\nNotes saved successfully"<<endl;
    system("/A.U.R.A/Speech/savenotes.vbs");
    }
   
    void User_shownotes()
    {
    ifstream inf("Documents/usernotes.txt");
    inf>>snotes;
    cout<<snotes;
    inf.close();
    }
    
    void User_writeconfig(char confname[15])
    {
    	ofstream outf("Configuration/userconfig.txt");
    	outf<<confname<<"\n";
    	outf<<namecon<<"\n";
    	outf.close();
        outf.open("Speech/gm.vbs");
        outf<<"CreateObject(\"SAPI.SpVoice\").speak\"Good Morning,"<<confname<<"\"";
        outf.close();
         outf.open("Speech/ga.vbs");
        outf<<"CreateObject(\"SAPI.SpVoice\").speak\"Good Afternoon,"<<confname<<"\"";
        outf.close();
         outf.open("Speech/ge.vbs");
        outf<<"CreateObject(\"SAPI.SpVoice\").speak\"Good Evening,"<<confname<<"\"";
        outf.close();
         outf.open("Speech/gn.vbs");
        outf<<"CreateObject(\"SAPI.SpVoice\").speak\"Good Night,"<<confname<<"\"";
        outf.close();
	}
    
    void User_readconfig()
	{
		
		ifstream inf("Configuration/userconfig.txt");
		inf>>readconfname;
		inf>>namecon;
		cout<<"\n";
		inf.close();
    }
	
	   
    void User_interact_mainframe(char namerec0[15])
    {
    	cout<<"\n\nThis mainframe is under development.SORRY"<<endl;
    	Long_delay();
    /*cout<<"Initializing interactive mainframe"<<endl;
    Numeric_loading();
    Long_delay();
    Short_delay();
    if(namecon==0)
    {
    cout<<"\n\nHey there, "<<namerec1<<"\nI hope you had a good time surfing the command mainframe?";
    Long_delay();
    }
    else 
    {
    cout<<"\n\nHey there, "<<namerec0<<"\nI hope you had a good time surfing the command mainframe?";
    Long_delay(); 
    }
    cout<<"\ncore1@aura>>(yes/no):";
    cin>>misc;
    i=strcmp(misc,ystring);
    if(i==0)
    {
    Long_delay();
    cout<<"\nI'm glad you like it";
    Long_delay();  
    }
    else
    {
    Long_delay();
    cout<<"\n\nIf you haven't yet explored the command mainframe you can always access it through mainframe selection menu"<<endl;
    Long_delay();
    cout<<"Do you wish to access it now?"<<endl;
    cout<<"core1@aura>>(y/n):";
    cin>>call;
    if(call=='y')
    {
    Long_delay();
    cout<<"\nExiting....";
    Short_delay();
    goto exitp1;
    }
    else if(call=='n')
    {
    Long_delay();
    cout<<"\nGetting back to conversation...."<<endl;
    Long_delay();
    }
    else
    {
    Short_delay();
    cout<<"\nEverytime u type something random,it will be considered no (n).."<<endl;
    Long_delay();
    }
    }  
    Long_delay();
    Short_delay();
    cout<<"\nHey ";
    while(1)
    {
    cout<<"\n\ncore1@aura>>";
    cin>>misc;
    j=234;
    j=strcmp(misc,greet1);
    if(j==0)
    {
    Long_delay();
    cout<<"\nyo dawg";
    }
    else if(j!=0)
    j=23;
    j=strcmp(misc,greet2);
    if(j==0)
    {
    Long_delay();
    cout<<"\nhey yo";
    }
    else if(j!=0)
    j=23;
    j=strcmp(misc,greet3);
    if(j==0)
    {
    Long_delay();
    cout<<namerec1<<"\n! My man!How's life?";
    }
    else if(j!=0)
    j=23;
    j=strcmp(misc,greet4);
    if(j==0)
    {
    Long_delay();
    cout<<"\nHELLLLLOOOO!";
    }
    else if(j!=0)
    j=23;
    j=strcmp(misc,greet5);
    if(j==0)
    {
    Long_delay();
    cout<<"\nHeyy bro!";
    }
    else if(j!=0)
    j=23;
    j=strcmp(misc,greet6);
    if(j==0)
    {
    Long_delay();
    cout<<"\nHeya";
    }
    else if(j!=0)
    j=23;
    j=strcmp(misc,greet7);
    if(j==0)
    {
    Long_delay();
    cout<<"\nHey yo";
    }
    else if(j!=0)
    j=23;
    j=strcmp(misc,greet8);
    if(j==0)
    {
    Long_delay();
    cout<<"\nAye Aye,Captain!";
    }
   
    //exit codeblock   
    else if(j!=0)
    j=23;
    j=strcmp(misc,exit1);
    if(j==0)
    goto exitp1;
    else if(j!=0)
    j=23;
    j=strcmp(misc,exit2);
    if(j==0)
    goto exitp1;
    else if(j!=0)
    j=23;
    j=strcmp(misc,exit3);
    if(j==0)
    goto exitp1;
    else if(j!=0)
    j=23;
    j=strcmp(misc,exit4);
    if(j==0)
    goto exitp1;
    else if(j!=0)
    j=23;
    j=strcmp(misc,exit5);
    if(j==0)
    goto exitp1;
    else if(j!=0)
    j=23;
    j=strcmp(misc,exit6);
    if(j==0)
    goto exitp1;
    j=23;
    }
    exitp1:Long_delay();
    cout<<"\nSee ya"<<endl;
    */
}
 //the options in the following menu are just for trial purposes. Don't judge me
    void User_cmd_mainframe(char namerec3[15])
    {
      	cout<<"\nInitializing command mainframe\n";
      	system("/A.U.R.A/Speech/h.vbs");
      	Dots_loading();
      	if(namecon==0)
      	{
        cout<<"\n\nChoose an option from the following menu..";
        system("/A.U.R.A/Speech/hi.vbs");
		Long_delay();
        }
        else 
        {
		cout<<"\n\nHi "<<namerec3<<",choose an option from the following menu..";
		system("/A.U.R.A/Speech/hi.vbs");      
	    }
        while(1)
        {
        Short_delay();
        cout<<"\n\t1-Take a Note";
        Short_delay();
        cout<<"\n\t2-Contact h4cks1n";
        Short_delay();
        cout<<"\n\t3-Open a previously saved note";
        Short_delay();
        cout<<"\n\t4-Fetch Date && Time";
        Short_delay();
        cout<<"\n\t0-Exit";
		Long_delay();
        cout<<"\ncore@aura>>>";
        cin>>ch;
  switch(ch)
  
    {
    case 0:
            goto exit;
            Long_delay();
            
            
    case 1:
            Long_delay();
            Long_delay();
            cout<<"WARNING:DO NOT USE [SPACE BAR] WHEN TYPING NOTES TO PREVENT INCOMPELETE ACCESS TO DATA:"<<endl; 
            system("/A.U.R.A/Speech/j.vbs");
			Long_delay();
            cout<<"Use underscore(_) instead";
            system("/A.U.R.A/Speech/k.vbs");
            Long_delay();
            Ultrashort_delay();
            //cout<<"\nThis feature is under development. Not sorry for inconvinience";
            cout<<"\nInitializing process.notepad"<<endl;
            system("/A.U.R.A/Speech/l.vbs");
            Long_delay();
            Short_delay();
            cout<<"Opening a new document:"<<endl;
            system("/A.U.R.A/Speech/m.vbs");
			Long_delay();
            Short_delay();
            User_getnotes();
            Long_delay();
            break;
            
    case 2:
           Long_delay();
           cout<<"\nStarting child process:"<<endl;
           system("/A.U.R.A/Speech/n.vbs");
           Long_delay();
           cout<<"Fetching information from main servers"<<endl;
           system("/A.U.R.A/Speech/o.vbs");
           Long_delay();
           cout<<"Phone Number:9923030463"<<endl;
           Short_delay();
           cout<<"Em@il-h4cks1nalias@gmail.com";
           break;
           
           
    case 3:
            Long_delay();
            cout<<"Fetching file information....."<<endl;
            system("/A.U.R.A/Speech/p.vbs");
			Long_delay();
            Long_delay();
            cout<<"Opening file......"<<endl;
            system("/A.U.R.A/Speech/q.vbs");
			Long_delay();
            Short_delay();
            cout<<"Reading from note document.....\n\n"<<endl;
            system("/A.U.R.A/Speech/r.vbs");
			Long_delay();
            Short_delay();
            User_shownotes();
            break;
            
            
    case 4:
    	Long_delay();
    	cout<<"\nFetching Date and Time...";
    	system("/A.U.R.A/Speech/s.vbs");
    	Long_delay();
    	Fetch_datetime();
    } 
    }
exit:cout<<"Bye!"<<endl;
system("/A.U.R.A/Speech/t.vbs");
Long_delay();
    }
}core;


int main()
{	cout<<"\nThe folder (A.U.R.A) should not be saved in any other folder. It should exist as an independant folder";
    cout<<" as the program requires superuser privileges to operate \nproperly"<<endl;
    cout<<"\n(For Example the file path should be: F:\\A.U.R.A)"<<endl;
    cout<<"\nIf you have done this already.."<<endl;
    system("ent.bat");

    system("mode 1000");
        ofstream outf;
		core.Fetch_datetime();
      	core.Long_delay();
        cout<<"\n\nEnter the 4 digit security pin to proceed:";
        cin>>core.pin; 
        core.Long_delay(); 
        if(core.pin==core.auth1)
        {
        core.Long_delay();
        cout<<"\nAuthentication successful."<<endl; 
        }
        else
        {
        while(core.pin<=core.auth1 || core.pin>=core.auth1)
        {
        core.Short_delay();
        cout<<"\nWrong pin. Try again:";
        cin>>core.pin;
        if(core.pin==core.auth1)
        {
        core.Long_delay();
        cout<<"\nAuthentication successful";
        break;
        }
        }
        }
    int x,z; 
    
    core.Long_delay();
    core.Long_delay();
    cout<<"\n\nInitializing A.U.R.A database";
    core.Dots_loading();
    core.Dots_loading();
    core.Long_delay();
    core.Ultrashort_delay();
    core.Short_delay();
	cout<<"\n\n\nBootstrapping core"<<endl;
    core.Numeric_loading();
    core.User_readconfig();
    core.Wish_time();
    core.Long_delay();
    core.Short_delay();
    core.Long_delay();
    system("cls");
    core.Long_delay();
    cout<<"\n\n\n\n";
    core.Long_delay();
    core.Short_delay();
    core.Boot_animation();
    core.Loading_bar();
    core.Long_delay();
    core.Long_delay();
    system("cls");
    core.Short_delay();
    core.Long_delay();
     cout<<"\nInitializing Text-to-Speech Engine.."<<endl;
    core.Long_delay();
    core.Long_delay();
    if(core.namecon==0)
    {
		core.Long_delay();
		core.Long_delay();
		core.Short_delay();
    	cout<<"\nHi. I'm A.U.R.A. What's your name?"<<endl;
       	system("/A.U.R.A/Speech/a.vbs");
 		cout<<"YOUR NAME HERE:";
    	cin>>core.name;
    	core.namecon=1;
    	core.Long_delay();
     	core.User_writeconfig(core.name);
		if(core.timeconv>=00 && core.timeconv<12)
		{
			core.Long_delay();
			cout<<"\nGood Morning,"<<core.name;
			system("/A.U.R.A/Speech/gm.vbs");		
		}
		else if(core.timeconv>=12 && core.timeconv<17)
		{
			core.Long_delay();
			cout<<"\nGood Afternoon,"<<core.name;
			system("/A.U.R.A/Speech/ga.vbs");
		}
		else if(core.timeconv>=17 && core.timeconv<21)
		{
			core.Long_delay();
			cout<<"\nGood Evening,"<<core.name;
			system("/A.U.R.A/Speech/ge.vbs");
		}
		else if(core.timeconv>=21 && core.timeconv<00)
		{
			core.Long_delay();
			cout<<"\nGood Night,"<<core.name;
			system("/A.U.R.A/Speech/gn.vbs");
		}
    	core.Short_delay();
	}
	else
	{
		if(core.timeconv>=00 && core.timeconv<12)
		{
			core.Long_delay();
			cout<<"\nGood Morning,"<<core.readconfname;
			system("/A.U.R.A/Speech/gm.vbs");		
		}
		else if(core.timeconv>=12 && core.timeconv<17)
		{
			core.Long_delay();
			cout<<"\nGood Afternoon,"<<core.readconfname;
			system("/A.U.R.A/Speech/ga.vbs");
		}
		else if(core.timeconv>=17 && core.timeconv<21)
		{
			core.Long_delay();
			cout<<"\nGood Evening,"<<core.readconfname;
			system("/A.U.R.A/Speech/ge.vbs");
		}
		else if(core.timeconv>=21 && core.timeconv<00)
		{
			core.Long_delay();
			cout<<"\nGood Night,"<<core.readconfname;
			system("/A.U.R.A/Speech/gn.vbs");
		}
		core.Long_delay();
	}
    core.Long_delay();
    core.Long_delay();
    cout<<"\nEntering mainframe selection menu"<<endl;
    system("/A.U.R.A/Speech/f.vbs");
    core.Long_delay();
    for(z=0;z<100;z--)
    {
here:cout<<"\n\nMainframe List-\n"<<endl;
	core.Short_delay();
	cout<<"\n1-Command Mainframe"<<endl;
	core.Short_delay();
	cout<<"2-Interaction Mainframe"<<endl;
	core.Short_delay();
	cout<<"0-Exit"<<endl;
	core.Long_delay();
    cout<<"\nroot@aura>>>";
    cin>>x;
    if(x==1)
    {
    core.Long_delay();
    core.User_cmd_mainframe(core.readconfname);
    }
    else if(x==2)
    {
    core.Long_delay();
    core.User_interact_mainframe(core.readconfname);
    }
    else if(x==0)
    {
    cout<<"See you later!"<<endl;
    system("/A.U.R.A/Speech/g.vbs");
    core.Long_delay();
    break;
    }
    }
    return 0;     
}





























