#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("Color 2");
    system("cls");
    vector<string> s1;
    int t,tc=0,i=0;
    cout<<"--------TO DO LIST----------"<<endl;
    cout<<"ENTER 1 TO ADD NEW TASK"<<endl;
    cout<<"ENTER 2 TO VIEW ALL THE TASKS GIVEN"<<endl;
    cout<<"ENTER 3 TO MARK AS READ"<<endl;
    cout<<"ENTER 4 TO DELETE ANY GIVEN TASK"<<endl;
    cout<<"ENTER 0 TO EXIT LIST"<<endl;
    while(t!=0)
    {  
    cout<<endl<<"ENTER UR COMMAND"<<endl;
    cin>>t;
    if(t<0 || t>4)
    cout<<"INVALID COMMAND PLEASE TRY AGAIN"<<endl;

    else if(t==0)
    {
    cout<<endl<<"THANK YOU FOR USING THE LIST"<<endl;
    cout<<"---------------****---------------"<<endl;
    break;

    }

    else if(t==1)
    {
        
        if (tc>=0 && tc<9)
        {string b;
        cout<<"ENTER NEW TASK"<<endl;
        cin.ignore();
        getline(cin, b);
        s1.insert(s1.begin()+tc,b);
        // cin>>s1[tc];
        tc++;}
        else
        {
        cout<<"APNI AUKAAT KE HISAB SE TARGET RAKHO :|"<<endl;
        cout<<"START FINISHING THESE TASKS"<<endl;
        cout<<"UR TASKS ARE:";
        for(i=0;i<=tc-1;i++)
        {
            cout<<i+1<<":"<<s1[i]<<endl;
        }
        }
        
    }

    else if(t==2)
    {
        cout<<endl<<endl<<"------------------------"<<endl;
        cout<<"UR TASKS ARE"<<endl;
        for(i=0;i<=tc-1;i++)
        {
            cout<<i+1<<":"<<s1[i]<<endl;
        }
        cout<<"------------------------"<<endl;
    }

    else if (t==3)
    {
        int a=0;
        cout<<"ENTER THE TASK NUMBER U WANNA MARK"<<endl;
        cin>>a;

        while(a>0|| a<9)
        {
        if(a<0|| a>9)
        {
        cout<<"INVALID TASK NUMBER"<<endl;
        break;
        }
        else
        {
           string b="[DONE] ";
           s1[a-1]=b+s1[a-1];
           break;
        }
        }

    }

    else if(t==4)
    {
        int a=0;
        cout<<"ENTER THE TASK NUMBER U WANNA DELETE"<<endl;
        cin>>a;

        while(a>0|| a<9)
        {
        if(a<0|| a>9)
        {
        cout<<"INVALID TASK NUMBER"<<endl;
        break;
        }
        else
        {
           s1.erase(s1.begin()+(a-1));
           tc--;
           break;
        }
        }

    }

}
}
