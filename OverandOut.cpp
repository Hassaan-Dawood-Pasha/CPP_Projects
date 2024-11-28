#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;


int main()
{
    system("Color 2");
    system("CLS");
    int overs,toss=1,tossc,choice,choicec,ball=0,wickets=1;
    string name;
    cout<<"WELCOME TO THE GAME OF CRICKET"<<endl;
    cout << "ENTER YOUR NAME: ";
    // cin.ignore();
    getline(cin, name);
    restart:
    cout<<"WELCOME "<<name<<endl<<endl;
    wickets:
    cout<<"ENTER WICKETS(1-10)"<<endl;
    cin>>wickets;
    if(wickets<0 || wickets>10)
    {cout<<"RAAT BHAR KHELNA HAI KYA??"<<endl;
     goto wickets;}
     else if(wickets==0)
     {cout<<"GAME SHURU HOTE HI KHATAM HOJAYEGA"<<endl;
     goto wickets;}

    ov:
    cout<<endl<<"ENTER MAX OVERS"<<endl;
    cin>>overs;
    if (overs<=0)
    {
        cout<<"GAME SHURU HOTE HI KHATAM HOJAYEGA"<<endl;
     goto ov;
    }
    
    cout<<endl<<"LETS TOSS"<<endl; 
    system("pause");
    
    toss:

    cout<<"CHOOSE 1 FOR HEADS OR 2 FOR TAILS"<<endl;
    cin>>toss;
    if (toss<1 || toss>2) 
    {cout<<"INVALID CHOICE"<<endl;
    goto toss;}
    
    srand(time(0));
    tossc = rand() % 2 + 1;
    if(tossc==toss)
    {
        cout<<"YOU WON THE TOSS"<<endl;
        system("pause");
        choic:
        cout<<"SELECT 1 TO BAT AND 2 TO BOWL"<<endl;
        cin>>choice;
        if (choice<1 || choice >2)
        {cout<<"INVALID CHOICE";
            goto choic;}
    }
    else
    {
        cout<<"YOU LOST THE TOSS"<<endl;
        srand(time(0));
        choice=rand()%2 +1;
    }

    //batting
    if(choice==1)
    {
        int  bat=0,bowlc=0,score1=0,w1=wickets,w2=wickets,wc1=0,wc2=0,ovr2=0,ovr1=0,balls1=0,balls2=0;
        cout<<"SO THE TOSS HAS BEEN DECIDED"<<endl;
        cout<<name<<" HAS TO BAT NOW"<<endl;
        system("pause");
        cout<<"ENTER A NUMBER BETWEEN 0 AND 6 TO SCORE RUNS"<<endl;
        for(ball=1;ball<=(overs*6);ball++)
        {
         
        if (w1==0)
        break;
        balls1++;
        if(balls1>=6)
        {
            balls1=balls1%6;
            ovr2++;
        }
        cout<<"ENTER UR NUMBER"<<endl;
        cin>>bat;
        srand(time(0));
        bowlc=rand()%6 +1;
        
        while(bat<0 ||bat >6)
        {
            cout<<"BHAI SEEDHA KHELNA :|"<<endl;
            ball--;
            balls1--;
            break;
        }
        if(bat==bowlc)  
        {
            cout<<"OUT!!!"<<endl;
            w1--;
            wc1++;
        } 
        else if(bat!=bowlc &&(bat>=0 && bat<=6))
        {
            score1=score1+bat;
        }
        cout<<"SCORE:"<<score1<<"/"<<wc1<<"("<<ovr2<<"."<<balls1<<")"<<endl;
        }
        cout<<endl<<"UR SCORE IS:"<<score1<<"/"<<wc1<<"("<<ovr2<<"."<<balls1<<")"<<endl<<endl;
        
        int bowl=0,batc=0,score2=0;
        cout<<"OPPONENTS TURN TO BAT"<<endl;
        cout<<name<<" HAS TO BOWL NOW"<<endl;
        system("pause");
        cout<<"ENTER A NUMBER BETWEEN 0 AND 6 TO PICK WICKETS"<<endl;
        for(ball=1;ball<=(overs*6);ball++)
        {
           
            if (w2==0)
        break;
         balls2++;
        if(balls2>=6)
        {
            balls2=balls2%6;
            ovr1++;
        }
        cout<<"ENTER UR NUMBER"<<endl;
        cin>>bowl;
        srand(time(0));
        batc=rand()%6 +1;
        
        while(bowl<0||bowl>6)
        {
            cout<<"DEAD BALL :|"<<endl;
            ball--;
            balls2--;
            break;
        }
        if(bowl==batc)  
        {
            cout<<"OUT!!!"<<endl;
            w2--;
            wc2++;
        } 
        else if(bowl!=batc &&(bowl>=0 && bowl<=6))
        {
            score2=score2+batc;
        }
        cout<<"SCORE:"<<score2<<"/"<<wc2<<"("<<ovr1<<"."<<balls2<<")"<<endl;
        }
        cout<<endl<<"OPPONENT SCORE IS:"<<score2<<"/"<<wc2<<"("<<ovr1<<"."<<balls2<<")"<<endl<<endl;

        if(score1>score2)
        cout<<"------------U WIN BY "<<score1-score2<<" RUNS-----------"<<endl;
        else if(score1==score2)
        cout<<"------------TRY AGAIN ITS A TIE-----------"<<endl;
        else
        cout<<"------------U LOSE BY "<<score2-score1<<" RUNS-----------"<<endl;
    }
        
    

    // bowling
    if(choice==2)
    {
        int bowl=0,batc=0,score2=0,w1=wickets,w2=wickets,wc1=0,wc2=0,ovr2=0,ovr1=0,balls1=0,balls2=0;
        cout<<"SO THE TOSS HAS BEEN DECIDED"<<endl;
        cout<<name<<" HAS TO BOWL NOW"<<endl;
        system("pause");
        cout<<"ENTER A NUMBER BETWEEN 0 AND 6 TO PICK WICKETS"<<endl;
        for(ball=1;ball<=(overs*6);ball++)
        {
            
            if (w2==0)
        break;
        balls1++;
        if(balls1>=6)
        {
            balls1=balls1%6;
            ovr1++;
        }
        cout<<"ENTER UR NUMBER"<<endl;
        cin>>bowl;
        srand(time(0));
        batc=rand()%6 +1;
        
        while(bowl<0||bowl>6)
        {
            cout<<"DEAD BALL :|"<<endl;
            ball--;
            balls1--;
            break;
        }
        if(bowl==batc)  
        {
            cout<<"OUT!!!"<<endl;
            w2--;
            wc2++;
        } 
        else if(bowl!=batc &&(bowl>=0 && bowl<=6))
        {
            score2=score2+batc;
        }
        cout<<"SCORE:"<<score2<<"/"<<wc2<<"("<<ovr1<<"."<<balls1<<")"<<endl;
        }
        cout<<endl<<"OPPONENT SCORE IS:"<<score2<<"/"<<wc2<<"("<<ovr1<<"."<<balls1<<")"<<endl<<endl;

        int  bat=0,bowlc=0,score1=0;
        cout<<name<<" HAS TO BAT NOW"<<endl;
        system("pause");
        cout<<"ENTER A NUMBER BETWEEN 0 AND 6 TO SCORE RUNS"<<endl;
        for(ball=1;ball<=(overs*6);ball++)
        {
           
            if(w1==0)
        break;
         balls2++;
        if(balls2>=6)
        {
            balls2=balls2%6;
            ovr2++;
        }
        cout<<"ENTER UR NUMBER"<<endl;
        cin>>bat;
        srand(time(0));
        bowlc=rand()%6 +1;
        
        while(bat<0 ||bat >6)
        {
            cout<<"BHAI SEEDHA KHELNA :|"<<endl;
            ball--;
            balls2--;
            break;
        }
        if(bat==bowlc)  
        {
            cout<<"OUT!!!"<<endl;
            w1--;
            wc1++;
        } 
        else if(bat!=bowlc &&(bat>=0 && bat<=6))
        {
            score1=score1+bat;
        }
        cout<<"SCORE:"<<score1<<"/"<<wc1<<"("<<ovr2<<"."<<balls2<<")"<<endl;
        }
        cout<<endl<<"UR SCORE IS:"<<score1<<"/"<<wc1<<"("<<ovr2<<"."<<balls2<<")"<<endl<<endl;

        if(score1>score2)
        cout<<"------------U WIN BY "<<score1-score2<<" RUNS-----------"<<endl;
        else if(score1==score2)
        cout<<"------------TRY AGAIN ITS A TIE-----------"<<endl;
        else
        cout<<"------------U LOSE BY "<<score2-score1<<" RUNS-----------"<<endl;
    }
    int r;
    res:
    cout<<endl<<"PRESS 1 TO RESTART THE GAME AND OTHER KEYS TO QUIT"<<endl;
    cin>>r;
    if (r==1)
    {system("CLS");
    goto restart;}
    // else if(r!=1)
    // {cout<<"PLEASE ENTER VALID COMMAND"<<endl;
    // goto res;}
    else
    cout<<"THANK YOU FOR PLAYING THIS GAME"<<endl;

}
