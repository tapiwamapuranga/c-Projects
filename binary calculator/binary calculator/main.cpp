#include <iostream>

using namespace std;

bool checkIfBinary(int num1,int num2)
{
    int temp,rem;
    bool check;
    check=true;
    temp=num1;
    while(temp>0)
    {
        rem=temp%10;
        if((rem>1)||(rem<0))
        {
            cout<<"The first number is not binary\n";
            check=false;
            break;
        }
        temp/=10;
    }
        temp=num2;
    while(temp>0)
    {
        rem=temp%10;
        if((rem>1)||(rem<0))
        {
            cout<<"The second number is not binary break";
            check=false;
            break;
        }
        temp/=10;
    }
    return check;
}
int selectMenu()
{
    int choice;
    cout<<"\n\t\tChoose from the MENU bellow\n";
    cout<<"\t\t 1. convert to binary\n";
    cout<<"\t\t 2. add binary numbers\n";
    cin>>choice;
    return choice;
}
int addBinary()
{
    int num1,num2,result,temp,rem1,rem2,carry=0;
    cout<<"Enter first number you want to add ";
    cin>>num1;
    cout<<"enter second number you want to add ";
    cin>>num2;
    if(checkIfBinary(num1,num2)==true)
    {
        cout<<"am adding binary ";
        temp=num1;
        rem1=num1;
        rem2=num2;
        while(temp>=0)
        {
            int rem1;
            result=rem1+rem2;
            result+=carry;
            if((result>1)||(result<0))
            {
                cout<<result%2;
                carry=result/2;
            }
            else if((result<2)&&(result>=0))
            {
                cout<<result;
            }
            temp/=10;
        }

    }
return result;
}
int convertToBinary()
{
    int number,rem,result;
    cout<<"Enter the number to convert to Binary ";
    cin>>number;
    while(number>0)
    {
        rem=number%2;
        number/=2;
        cout<<rem;
        result+= rem*10;
    }
    return result;
}
void calculator(int choice)
{
    int answer;
    switch (choice)
    {
        case 1: answer=convertToBinary();
                cout<<"The number in binary is"<<answer;
                break;
        case 2: answer=addBinary();
                cout<<"The answer is "<<answer;
                break;
    }
}

int main()
{
   calculator(selectMenu());
    return 0;
}
