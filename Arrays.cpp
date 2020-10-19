
#include <iostream>
using namespace std;

int main() {

    int a;
    cin>>a;
    int array[a];
    for(int i=0;i<a;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<a;i++)
    {
        cout<<array[a-i-1]<<" ";
    }
    return 0;
}
