#include <bits/stdc++.h>

#include<windows.h>
using namespace std;

// int rows,column;

// int maxsoldiers=10;
const int rows=10;
const int column =10;
char matrix[rows][column];
int matrix2[rows][column];

void story()
{
   cout<<"WELCOME COMMANDER"<<endl;
   system("pause");
   cout<<"I KNOW ITS THE MIDDLE OF THE NIGHT BUT WE ARE UNDER ATTACK !!!"<<endl;
   cout<<"PLEASE HELP US.\nTHE ENEMY HAS USED THE NIGHT TO ATTACK US"<<endl;
   system("pause");
   cout<<"WE HAVE BEEN INFORMED THAT THE ENEMY HAS SENT 10 BRIGADES TO ATTACK US"<<endl;
   cout<<"IF MORE THAN 7 ATTACK US WE ARE DONE FOR"<<endl;
   system("pause");
   cout<<"PLEASE USE THE TREBUCHET TO ATTACK STRATEGIC PLACES AND KILL ENEMIES"<<endl;
   cout<<"WE ONLY HAVE 20 ATTACKS"<<endl;
   system("pause");
   cout<<"ONLY U CAN SAVE US NOW!!!!!!"<<endl;
   cout<<"THE ATTACKS SPOTS WILL BE DENOTED BY --X--"<<endl;
   cout<<"THIS IS OUR FIELD"<<endl;
   
}

void setup()
{
   for(int i=0; i < rows; i++)
   {
    for(int j=0; j<column;j++)
    {
        
        matrix[i][j]='O';
    }
   }
}

void setup2()
{
    for(int i=0; i < rows; i++)
   {
    for(int j=0; j<column;j++)
    {
        
        matrix2[i][j]=0;
    }
   }
}

void output()
{
   for(int i=0; i < rows; i++)
   {
    for(int j=0; j<column;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
   }
}

void output2()
{
   for(int i=0; i < rows; i++)
   {
    for(int j=0; j<column;j++)
    {
        cout<<matrix2[i][j]<<" ";
    }
    cout<<endl;
   }
}

void soldiers()
{
    int s=1;
   while(s <= 10)
   {
        
        int x=rand()%10;
        int y=rand()%10;
       if (matrix2[x][y]!=1)
      { matrix2[x][y]=1;
       s++;}
   }
}

void attack (int x,int y)
{
    if(matrix2[x][y]==1)
    {
        matrix2[x][y]=2;
    }
}

void attack1 (int x,int y)
{
    matrix[x][y]='X';
    
}

int remaining()  
{
    int r1=0;
    for(int i=0; i < rows; i++)
   {
    for(int j=0; j<column;j++)
    {
        if(matrix2[i][j]==1)
            r1++;
    }
   }
   return r1;
}


int main()
{
    int a,b;
    srand(time(0));
    system("color 04");
    system("cls");

    story();
    setup();
    output();
    soldiers();

    // cout<<"-------------------------"<<endl;
    
    // output2();
    // cout<<"-------------------------"<<endl;

    int i=0;
    for(int i=0;i<20;i++)
    {
        
        if (remaining()==0)
        {cout<<"-------------------------"<<endl;
         output();
          cout<<"-------------------------"<<endl;
         break;}

        reenter :
        cout<<"ENTER THE X AND Y COORDINATES(0-9)"<<endl;
        cin>>a>>b;

        if(a<0 || b<0 ||a>9 || b>9)
        {
        cout<<"INVALID COMMAND"<<endl;
        goto reenter;
        }
        if((a>=0  && a<=9) || (b>=0 && b<=9))
        {attack1(a,b);
        attack(a,b);}

        cout<<"SOLDIERS REMAINING:"<<remaining()<<endl;
        cout<<"-------------------------"<<endl;
        output();
        cout<<"-------------------------"<<endl;
    
    }

    if(remaining()>7)
    {
        cout<<"YOU LOSE THE KINGDOM HAS BEEN DESTROYED"<<endl;
        return 0;
    }
    else
    {
        cout<<"YOU WIN THE KINGDOM IS SAFE"<<endl;
        return 0;
    } 
          
}
