#include<conio.h>
#include <stdio.h>
void search();
int arr[100], n, number, loc, beg, mid, end, i;
int main(){
    printf("\nEnter the size of array: ");
    scanf("%d", &n); 
    printf("\nEnter ordered elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
	}
    printf("\nEnter number to be searchedin the console: ");
    scanf("%d", &number); 
    search();
    getchar();
    return 0;
}

void search(){
    beg = 0;
    mid = (beg + end) / 2;
    end = n-1;
    while ((beg<=end) && (arr[mid]!=number)){
        if (number < arr[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (arr[mid] == number)
        printf("\n\nNumber found at location %d", mid+1);
    else
        printf("\n\nNumber not found in array");
}
