/* Check a Floating number using DFA to C++ */
#include<bits/stdc++.h>
using namespace std;


int dfa=1;
//state 1
void q0(char c)
{
if(c>=48 && c<=57)
   {
       dfa =2;
   }
   else if(c=='.')
    {
    dfa =3;
    }
    else
    {
        dfa=-1;
    }

}
//state 2
void q1(char c)
{
    if(c=='.')
   {
       dfa =3;
   }
   else if(c>=48 && c<=57)
    {
    dfa =2;
    }
    else
    {
        dfa=-1;
    }

}
//state 3
void q2(char c)
{ if(c>=48 && c<=57)
   {
       dfa =4;
   }
   else if(c=='.')
    {
    dfa =-1;
    }
    else
    {
        dfa=-1;
    }

}
//final state
void qf(char c)
{

    if(c>=48 && c<=57)
   {
       dfa =4;
   }
 /*  else if(c=='b')
    {
    dfa =4;
    */
    else
    {
        dfa=-1;
    }

}
int accepted(char str[])
{  int i,len=strlen(str);
   for( i=0; i<len; i++)
   {
       if(dfa==1)
        q0(str[i]);

       else if(dfa==2)
        q1(str[i]);

        else if(dfa==3)
        q2(str[i]);
        else if(dfa==4)
        qf(str[i]);

   }
   if(dfa==4)
    return 1;
   else return 0;

}
int main()
{ char str[]="111..0";
if(accepted(str))
cout<<"Float Number";
else
cout<<"Not a float Number";

    return 0;
}

