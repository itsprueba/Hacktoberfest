// c++ program for cp
#include <bits/stdc++.h>

using namespace std;


    int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++)
    {
      for(int arr_j = 0;arr_j < 6;arr_j++)
       {
        cin >> arr[arr_i][arr_j];
       }
    } //numbers input

    int temp; //temporary sum storing variable
    int sum=INT_MIN; //largest sum storing variable
    for(int i=0;i+2<6;i++) //check if at least3 exist at bottom
     {
       int c=0; //starting point of traversing column wise for row

       while(c+2<6) //three columns exist ahead from index
        {
          int f=0; //test case variable
          while(f!=1)
          { //if array does not meet requirements,no need of more execution

            for(int j=c;j<=j+2;j++)
             { //1st and 3rd row middle element is 0 and 2nd row is non 0.
               //condition for hourglass stucture
             if(((j-c)%2==0 && arr[i+1][j]==0)||(((j-c)%2==1 && arr[i+1][j]!=0))
             //storing 3 dimensional subarray sum column wise
             temp+=arr[i][j]+arr[i+1][j]+arr[i+2][j]; //sum storage
             else
             f=1; //end traversing further on failure


              if(sum<temp)
              sum=temp;

              f=1;//exit condition
              }//whiel loop of test variable

             temp=0; //reset for next subarray execution
             c++; /*begin traversal from one index greater column wise till
                    condition*/
              }// while loop of c
        }
      }

          cout<<sum;

         return 0;
    }
