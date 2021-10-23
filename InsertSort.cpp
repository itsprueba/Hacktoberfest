#include<iostream.h>
#include<math.h>
#include<stdio.h>
using namespace std;

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void insertionSort(int arr[], int n)
{
	int key, j;
	for (int i = 0; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[] = { 5,1,6,2,4,3 };

	insertionSort(arr, 6);
	printArray(arr, 6);
	return 0;
}


