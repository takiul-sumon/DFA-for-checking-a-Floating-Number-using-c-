#include<bits/stdc++.h>
using namespace std;


int dfa=1;
//state 1
void q0(char c)
{
if(c>=48 && c<=57 || c=='$')
   {
       dfa =0;
   }
   else
    {
    dfa =2;
    }


}
//state 2
void q1(char c)
{
    if(c>=32 && c<=127 )
   {
       dfa =2;
   }

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


   }
   if(dfa==2)
    return 1;
   else return 0;

}
int main()
{ char str[]="a.";
if(accepted(str))
cout<<"No Lexical error";
else
cout<<"error";

    return 0;
}
