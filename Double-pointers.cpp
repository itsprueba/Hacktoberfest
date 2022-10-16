// LECTURE - 27
// DOUBLE POINTERS

#include<iostream>
using namespace std;

void update(int **p2)
{
    //p2=p2+1;
    // KUCH CHANGE HOGA? - NO 

    //*p2=*p2+1;
    // KUCH CHANGE HOGA? - YES

    **p2=**p2+1;
    // KUCH CHANGE HOGA? - YES
}
int main()
/*{
    int i =5;
    int *p=&i;
    int **p2=&p;

    cout<<"printing i -->  "<<i<<endl;
    cout<<"printing address of i -->  "<<&i<<endl;
    cout<<"printing p -->  "<<p<<endl;
    cout<<"address of p -->  "<<&p<<endl;
    cout<<"value of p -->  "<<*p<<endl;
    cout<<"printing p2 -->  "<<p2<<endl;
    cout<<"address of p2 -->  "<<&p2<<endl;
    cout<<"value of p2 -->  "<<**p2<<endl;

    return 0; 
}  */


{
    int i =5;
    int *p=&i;
    int **p2=&p;


    cout<<"Before --> i -->  "<<i<<endl;
    cout<<"Before --> p -->  "<<p<<endl;
    cout<<"Before --> p2 -->  "<<p2<<endl;
    update(p2);
    cout<<"After --> i -->  "<<i<<endl;
    cout<<"After --> p -->  "<<p<<endl;
    cout<<"After --> p2 -->  "<<p2<<endl;
    
    return 0;
}

