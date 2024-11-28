#include <bits/stdc++.h>
#include<windows.h>
using namespace std;


bool match(string& name,int& stage,string& history)
    {
        
        int toss=1,tossc,choice=1,choicec,pp=1,pc,g1=0,g2=0,s1=0,s2=0,b=0;
    srand(time(0));

    string stages;

    if (stage==0)
    stages="round of 16";
    if (stage==1)
    stages="QUARTER FINALS";
    if (stage==2)
    stages="SEMI FINALS";
    if (stage==3)
    stages="FINALS";
    
    
    
    cout<< "-------------------"<<endl;
    cout<<"     "<<stages<<endl;
    cout<< "-------------------"<<endl;

    tossc=rand()%2 +1;
    tss:
    cout<<"LETS TOSS"<<endl;
    cout<<"ENTER 1 FOR HEADS AND 2 FOR TAILS"<<endl;
    cin>>toss;
    if (toss<1 || toss>2)
    {
        cout<<"INVALID OUTPUT"<<endl;
        goto tss;
    }

    //CHOICE YOU
    if(toss==tossc)
    {
        cout<<"YOU WON THE TOSS"<<endl;
        chh1:
        cout<<"PRESS 1 FOR KICKOFF AND 2 IF U WANT THE OPPONENT TO KICKOFF"<<endl;
        cin>>choice;
        if (choice<1 || choice>2)
    {
        cout<<"INVALID OUTPUT"<<endl;
        goto chh1;
    }
    }
    //CHOICE COMP
    else
    {
        cout<<"YOU LOSE THE TOSS"<<endl;
        ch1:
        choicec=rand()%2+1;
    }
    

    //YOU HAVE THE BALL
    if(choice==1)
    {b=1;
    cout<<"U HAVE THE  KICK OFF"<<endl;
    }
    if(choice==2)
    {b=2;
    cout<<"OPPONENT HAS THE  KICK OFF"<<endl;
    }
    cout<< "-----------------------------------------------------------------"<<endl;
    cout<<endl<<"INSTRUCTIONS"<<endl;
    cout<<"LETS GO THROUGH THE BASICS"<<endl;
    cout<<"ENTER || 1:DRIBBLE LEFT || 2:DRIBBLE RIGHT || 3 :PASS"<<endl<<endl;
    cout<<"OPPONENT HAS THE  BALL"<<endl;
    cout<<"LETS GO THROUGH THE BASICS"<<endl;
    cout<<"ENTER || 1:TACKLE LEFT || 2:TACKLE RIGHT || 3 :COVER PASSING LANE"<<endl<<endl;
    cout<< "-----------------------------------------------------------------"<<endl;
    cout<<"U HAVE THE  BALL"<<endl;
    
    
    int a=0;
    

    //enter commentary
    
    while(true)
    {
    pc= rand() % 3+1;
        OP:
        NT:
    cout<<"ENTER YOUR CHOICE"<<endl;
    cin>>pp;

    if(pp <1 || pp > 3)
    {
        cout<<"INVALID OUTPUT"<<endl;
        goto OP;
    }

    if(pp!=pc)
    {
        cout<<"POSESSION RETAINED"<<endl<<endl;
        a++;
    }

    if(pp==pc)
    {
        cout<<"POSESSION LOST"<<endl;
        a=0;
        b++;
        if(b%2==0)
        cout<<"BALL WITH OPPONENT"<<endl<<endl;
        else
        cout<<"BALL WITH YOU"<<endl<<endl;
    }

    //GOAL TIME

    if(a==3)
    {
        if(b%2==0)
        {
            
            cout<<"A GOAL CHANCE FOR COMPUTER"<<endl;
            cout<<"LETS GO THROUGH THE BASICS"<<endl;
            cout<<"ENTER || 1:DIVE LEFT || 2:DIVE RIGHT || 3 :STAND STILL"<<endl<<endl;
            SSS1:
            cout<<"ENTER UR CHOICE"<<endl;
            cin>>s1;
            s2=rand()%3 +1;
            if(s1<1 || s1>3)
            {
                cout<<"INVALID OUTPUT"<<endl;
                goto SSS1;
            }

            if(s1==s2)
            {
                cout<<"GOAL HAS BEEN SAVED!!!!!!"<<endl;
                b=1;
                cout<<"BALL WITH YOU"<<endl<<endl;
                a=0;
                
            }
            if(s1!=s2)
            {
                cout<<"GOAL!!!!!!"<<endl<<endl;
                g2++;
                b=1;
                cout<<"BALL WITH YOU"<<endl<<endl;
                a=0;
            }
            cout<<name<<":"<<g1<<"  "<<"opponent:"<<g2<<endl<<endl;
            if(g2==3)
            {
                cout<<"U LOSE"<<endl;
                break;
            }
            else
            goto NT;

        }

        if(b%2!=0)
        {
            a=0;
            cout<<"A GOAL CHANCE FOR PLAYER"<<endl;
            cout<<"LETS GO THROUGH THE BASICS"<<endl;
            cout<<"ENTER || 1:SHOOT LEFT || 2:SHOOT RIGHT || 3 :PANENKA"<<endl<<endl;
            SSS2:
            cout<<"ENTER UR CHOICE"<<endl;
            cin>>s1;
            s2=rand()%3 +1;
            if(s1<1 || s1>3)
            {
                cout<<"INVALID OUTPUT"<<endl;
                goto SSS2;
            }

            if(s1==s2)
            {
                cout<<"GOAL!!!!!!"<<endl;
                g1++;
                b=2;
                a=0;
                cout<<"BALL WITH OPPONENT"<<endl<<endl;
            }
            if(s1!=s2)
            {
                cout<<"GOAL HAS BEEN SAVED!!!!!!"<<endl;
                b=2;
                a=0;
                cout<<"BALL WITH OPPONENT"<<endl<<endl;
            }
            cout<<name<<":"<<g1<<"  "<<"opponent:"<<g2<<endl<<endl;


        }
    }

    if(g1==3)
    {
        cout<<"U WIN THIS MATCH"<<endl;
        history += stages + ":WON\n";
        return true;
    }

    else if(g2==3)
    {
        cout<<"U LOSE THIS MATCH"<<endl;
        history += stages + ":LOSE\n";
        return false;
            }
    }

}

int main()
{
    system("Color 2");
    system("CLS");
    string name,history;
    int stage=0;
    cout<<"WELCOME TO THE GAME OF FOOTBALL"<<endl;
    cout << "ENTER YOUR NAME: ";
    // cin.ignore();
    getline(cin, name);
    
    for(stage=0;stage<=4;stage++)
    {
        if(match(name,stage,history)==0)
        {cout<<"U LOST"<<endl;
        cout<<"U HAVE BEEN ELIMINATED FROM THE TOURNAMENT"<<endl;
        cout<<"TOURNAMENT HISTORY:"<<history<<endl;
        return 0;}
        else{
            cout<<"U HAVE PROGRESSED TO THE NEXT STAGE"<<endl;
        }
    }
    cout<<"U HAVE WON THE TOURNAMENT \n CONGRATULATIONS CHAMPION!!!"<<endl;
    cout<<"TOURNAMENT HISTORY:"<<history<<endl;
    return 0;
}
