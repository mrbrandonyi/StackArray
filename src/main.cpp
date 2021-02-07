/**
 * @file main.cpp
 * @brief Stack data type implementation.
 * @details This is a implementation of an integer Stack data type using an integer array.
 * @author Brandon Yi
 * @date 2/7/2021
 * 
 */

#include <iostream>

using namespace std;
const int Max=5;
void Push(int S[],int &T)
{
    if (T<Max-1) //Checking for Stack not Full
    {
        cout<<"Integer:";
        cin>>S[++T];
    }
    else
        cout<<"Stack is Full!"<<endl;
}   
void Pop(int S[],int &T)
{
    if (T!=-1) //Checking for Stack not Empty
    {
        cout<<S[T--]<<" Deleted!"<<endl;
    }
    else
        cout<<"Stack is Empty!"<<endl;
}
void StackDisplay(int S[],int T)
{
    for (int I=T;I>=0;I--)
        cout<<S[I]<<endl;
}
int main()
{

int Stack[Max],Top=-1;
char Ch;
do
{
    cout<<"a[add] d[delete] s[show] q[quit] :";
    cin>>Ch;
    switch(Ch)
    {
        case 'a':Push(Stack,Top);
                break;
        case 'd':Pop(Stack,Top);
                break;
        case 's':StackDisplay(Stack,Top);
                break;
    }
}
while (Ch!='q');
cout<<"Thank you for using our program!"<<endl;
return 0;
}