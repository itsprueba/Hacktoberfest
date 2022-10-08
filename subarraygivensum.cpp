/* Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Output: Sum found between indexes 2 and 4
Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33

Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
Output: Sum found between indexes 1 and 4
Sum of elements between indices 1 and 4 is 4 + 0 + 0 + 3 = 7

Input: arr[] = {1, 4}, sum = 0
Output: No subarray found
There is no subarray with 0 sum
*/

#include<bits/stdc++.h>
using namespace std;

int subarraysum(int arr[],int n,int sum){
    int curr_sum,i,j;
//picking a starting point
    for(i=0;i<n;i++){
        curr_sum=arr[i];

        //all subarray starting with 'i'
        for(j=i+1 ; j <=n ; j++){
            if(curr_sum == sum){
                cout<<"SUM FOUND BETWEEN INDEXES : "<< i << " and "<< j - 1;
                return 1;
            }
            if(curr_sum > sum || j == n)
            break;
            curr_sum = curr_sum +arr[j];
        }
    }
    cout<<"NO SUBARRAY FOUND";
    return 0;
}

int main()
{
    int arr[]={15,2,4,8,9,5,10,23};
    int n= sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subarraysum(arr,n,sum);
    return 0;
}