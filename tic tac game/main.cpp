#include <iostream>
#include <string>
#include <cstdlib>
#include<conio.h>
#include<stdlib.h>

using namespace std;

char space[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,column;
char token='x';
bool draw=false;
string pname1,pname2;

void display()
{

    cout<<"\t   |  |   \n";
    cout<<"\t "<<space[0][0]<<" |"<<space[0][1]<<" |"<<space[0][2]<<"\n";
    cout<<"\t __|__|__  \n";
    cout<<"\t   |  |     \n";
    cout<<"\t "<<space[1][0]<<" |"<<space[1][1]<<" |"<<space[1][2]<<"\n";
    cout<<"\t __|__|__    \n";
    cout<<"\t   |  |      \n";
    cout<<"\t "<<space[2][0]<<" |"<<space[2][1]<<" |"<<space[2][2]<<"\n";
    cout<<"\t   |  |       \n";
}

void userInput()
{
    int digit;
    if(token=='x')
    {
        cout<<pname1<<"\'s turn\n";
        cin>>digit;
    }
    if(token=='o')
    {
        cout<<pname2<<"\'s turn\n";
        cin>>digit;
    }
    switch(digit)
    {

        case 1: row=column=0;
                break;
        case 2: row=0;
                column=1;
                break;
        case 3: row=0;
                column=2;
                break;
        case 4: row=1;
                column=0;
                break;
        case 5: row=column=1;
                break;
        case 6: row=1;
                column=2;
                break;
        case 7: row=2;
                column=0;
                break;
        case 8: row=2;
                column=1;
                break;
        case 9: row=column=2;
                break;
        default: cout<<"Invalid  input\n";
                 break;
    }
    if(token=='x'&&space[row][column]!='x'&&space[row][column]!='o')
    {
        space[row][column]='x';
        token='o';
    }
    else if(token=='o'&&space[row][column]!='x'&&space[row][column]!='o')
        {
            space[row][column]='o';
            token='x';
        }
    else
    {
        cout<<"===== no space =====\n";
        userInput();
    }
    display();
}
bool gameWinner()
{
    int i,j;
    for(i=0;i<3;i++) //condition to check for winner
    {
        if(((space[i][0]==space[i][1])&&(space[i][0]==space[i][2]))||((space[0][i]==space[1][i])&&(space[0][i]==space[2][i])))
        {
            return true;
        }
        if(((space[0][0]==space[1][1])&&(space[0][0]==space[2][2]))||((space[0][2]==space[1][1])&&(space[0][2]==space[2][0])))
        {
            return true;
        }
    }
    for(i=0;i<3;i++) //condition to check if the game is going on
    {
        for(j=0;j<3;j++)
        {
            if(space[i][j]!='x'&&space[i][j]!='o')
            {
                return false;
            }
        }
    }
    draw=true;
    return false;
}
int main()
{
    cout<<"Enter name of first player :\n";
    cin>>pname1;
    cout<<"enter name of second player :\n";
    cin>>pname2;
    cout<<pname1<<" will play first\n";
 while(!gameWinner())
 {
    display();
    userInput();
    gameWinner();
    system("cls");
 }
 if(token=='x'&&draw==false)
 {
     cout<<pname2<<" wins!!\n";
 }
 else if(token=='o'&&draw==false)
 {
     cout<<pname1<<" wins!!\n";
 }
 else
 {
     cout<<" It is a draw\n";
 }
    return 0;
}
