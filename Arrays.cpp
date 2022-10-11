#include<iostream>
using namespace std;

int main()
{

    int a,requirement;

    cout<<"How large you want to create your array"<<endl;
    cin>>a;

    cout<<"Enter 1 if you want to print the reverse array"<<endl;
    cout<<"Enter any number if you want to print the array normally"<<endl;
    cin>>requirement;

    if (requirement==1)
    {
    cout<<"You have selected to print the reverse array"<<endl;
    }
    else{cout<<"You have selected to print the array normally"<<endl;}
    

    int array[a];

    for (int i = 0; i < a; i++)
    {
        cout<<"Enter the "<<i+1<<" value of the array"<<endl;
        cin >> array[i];
    }

    if (requirement==1)
    {
        for (int i = 0; i < a; i++)
        {
            cout << array[a - i - 1] << " ";
        }
    }
    else{
        for (int i = 0; i < a; i++)
        {
            cout << array[i] << " ";
        }
        
    }
    
    return 0;
}
