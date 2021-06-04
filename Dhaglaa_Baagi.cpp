#include<bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    cout<<"\t\t\t\tWelcome To The card Game"<<endl;
    cout<<"\n\n\t\t\t\t\tThe cards are getting distributed...";
    srand(time(0));
    //string arr[52];
    array<string,52> arr;
    int shape,num;
    for(int i=0,shape=1,num=1;i<52;i++,shape++,num++)
    {
        //number


        if(num==1)
        arr[i][0]='A';

        if(num==2)
        arr[i][0]='2';

        if(num==3)
        arr[i][0]='3';

        if(num==4)
        arr[i][0]='4';

        if(num==5)
        arr[i][0]='5';

        if(num==6)
        arr[i][0]='6';

        if(num==7)
        arr[i][0]='7';


        if(num==8)
        arr[i][0]='8';


        if(num==9)
        arr[i][0]='9';


        if(num==10)
        arr[i][0]='10';


        if(num==11)
        arr[i][0]='J';


        if(num==12)
        arr[i][0]='Q';


        if(num==13)
        {arr[i][0]='K';num=0;}



        //shape

        if(shape==1)
        arr[i][1]='B';

        if(shape==2)
        arr[i][1]='R';

        if(shape==3)
        arr[i][1]='A';

        if(shape==4)
        {arr[i][1]='D';shape=0;}

    }

  //unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //random_shuffle(arr.begin(),arr.end());


   /* for(int i=0,shape=1,num=1;i<52;i++,shape++,num++)
    {
        cout<<arr[i]<<" "<<arr[i]<<endl;

    }*/


    queue<string> player1,player2;
    int select;
    string temp="";
    for(int i=0,shape=1,num=1;i<52;i++,shape++,num++)
    {
        select=rand()%2;
        if(select==0)
        {
            temp+=arr[i][0];
            temp+=arr[i][1];
            player1.push(temp);
            temp="";
        }
        else
        {
            temp+=arr[i][0];
            temp+=arr[i][1];
            player2.push(temp);
            temp="";
        }
       // cout<<select<<endl;

    }
//system("cls");

//system("pause");
   /* while(!player1.empty()){cout<<player1.front()<<endl;player1.pop();}
    cout<<"Teri Gand";
    while(!player2.empty()){cout<<player2.front()<<endl;player2.pop();}*/


    stack<string> tre;
    char c1,c2;
   while(!player1.empty() || !player2.empty() )
    {
        temp=player1.front();
        player1.pop();
        c1=temp[0];
        tre.push(temp);
        //cout<<tre.top();
        temp="";

        if(c1==c2)
        {
            cout<<"Player 1's card matched !"<<endl;
            while(!tre.empty())
            {
                player1.push(tre.top());
                tre.pop();
            }
        }

        temp=player2.front();
        player2.pop();
        c2=temp[0];
        tre.push(temp);
        //cout<<tre.top();
        temp="";
        if(c1==c2)
        {
            cout<<"Player 2's card matched !"<<endl;
            while(!tre.empty())
            {
                player2.push(tre.top());
                tre.pop();
            }

        }

    }
    system("cls");
    if(player1.empty())cout<<"Player 2 Won !! Congratulations !!";
    else cout<<"Player 1 Won !! Congratulations !!";

    return 0;
}
