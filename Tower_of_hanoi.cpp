//TOWER OF HANOI
/////////////////LIBRARIES///////////////////
#include<bits/stdc++.h>
using namespace std;
/////////////////////CLASSES//////////////////

//////////////U D FUNCTIONS//////////////////////////////
void toi(int disc,int int_pole,int final_pole,int helpp);
////////////////MAIN///////////////////////////////////
int main()
{
   int disc;
   cin>>disc;
   int int_pole,final_pole,helpp;
   cin>>int_pole>>final_pole>>helpp;
   toi(disc,int_pole,final_pole,helpp);
   //3 1 3 2
}

/////////////////////////OUTPUT///////////////////////////////
//3 1 3 2
//1-1 to 3
//2-1 to 2
//1-3 to 2
//3-1 to 3
//1-2 to 1
//2-2 to 3
//1-1 to 3
/////////////////////////FUNCTIONS//////////////////////////////
void toi(int disc,int int_pole,int final_pole,int helpp)
{
    if(disc==1)
    {
        cout<<disc<<"-"<<int_pole<<" to "<<final_pole<<"\n";
        return;
    }
    else
    {
        toi(disc-1,int_pole,helpp,final_pole);
        cout<<disc<<"-"<<int_pole<<" to "<<final_pole<<"\n";
        toi(disc-1,helpp,final_pole,int_pole);
        return;


    }


}
