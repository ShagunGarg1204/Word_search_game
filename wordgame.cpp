#include<iostream>
#include<cstdlib>
#include<cstring>
#include<windows.h>
using namespace std;
int call()
{

    int hint;
    string output;
    string a[10]={"Mongo","Postman","Express",
					"Html","Css","Java","Socket","Cors"
							,"Django","Node"};
    char arr[10][10];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            char c;
            int r;
            r= rand() % 26;   // generate a random number
            c= 'a' + r;            // Convert to a character from a-z
            arr[i][j]=c;
        }
    }
    int index=rand()%10;
    output=a[index];
    if(a[index].length()%2==0)
    {
        // for even string length case
            int row=rand()%10;
            int col=rand()%3;
            for(int i=0;a[index][i]!='\0';i++,col++)
            {
                arr[row][col]=a[index][i];
            }
        
    }
    else
    {
        // for odd string length case
                // for even string length case
            int row=rand()%3;
            int col=rand()%10;
            for(int i=0;a[index][i]!='\0';i++,row++)
            {
                arr[row][col]=a[index][i];
            }
    }
     for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
          cout<<" "<<arr[i][j];
          Sleep(90);
        }
        cout<<endl;
    }
    
    string guess;
	cout<<"Press 1 for Guess number	"<<endl;
	label1:
	cout<<"Enter input		:	";
	cin>>hint;
	cout<<endl;
	if(hint==1)
	{
	}
       else
       {
    	cout<<"Invalid input	";
    	goto label1;
	}
    cout<<"Enter word you guess         :       ";
    cin>>guess;
    cout<<endl;
    if(guess==a[index])
    {
        cout<<"Congratulations ! You have guessed correct word  "<<endl;
        return 1;
    }
    else
    {
        cout<<"Sorry ! Your guessed word is incorrect.Try again "<<endl;
        return 0;
    }
}
void display()
{
	    cout<<"\t***********************************************Word Gussing Game*********************************************************\n\n"<<endl;
    cout<<"You have to guess the word in this puzzle"<<endl;
    cout<<"For example word in this puzzle can be (Html,Postman,Java etc )"<<endl;
    
}
int main()
{
    char a;
    cout<<"\t***********************************************Word Guessing Game*********************************************************\n\n"<<endl;
    
	 char n;
     string Name;
     cout<<"Enter name  :       ";
     getline(cin,Name);
     cout<<endl;
     int score=0;
     do
     {
     	system("cls");
     	display(); 	
        score=score+call();
        cout<<"Do you want to play again y/n   :   ";
        cin>>n;
        cout<<endl;
     }while(n!='n');
     cout<<Name<<"  ";
     cout<<"your score is   :   "<<score<<endl;
     cout<<"\n\n\t***************************************************************************************************************\n\n"<<endl;
}

