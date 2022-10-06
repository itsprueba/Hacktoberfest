/**
 *  JAVA Code for Find Second largest element in an array
 */

class SecondLargetNumber {

	
	public static void print2largest(int arr[],
									int arr_size)
	{
		int i, first, second;

		if (arr_size < 2) {
			System.out.print(" Invalid Input ");
			return;
		}

		first = second = Integer.MIN_VALUE;
		for (i = 0; i < arr_size; i++) {
			if (arr[i] > first) {
				second = first;
				first = arr[i];
			}
			else if (arr[i] > second && arr[i] != first)
				second = arr[i];
		}

		if (second == Integer.MIN_VALUE)
			System.out.print("There is no second largest"
							+ " element");
		else
			System.out.print("The second largest element"
							+ " is " + second); // 45
	}

	public static void main(String[] args)
	{
		int arr[] = { 22, 35, 45, 10, 54, 1 };
		int n = arr.length;
		print2largest(arr, n);
	}
}


/**
Input: arr[] = {22, 35, 45, 10, 54, 1}
Output: The second largest element is 45.
Explanation: The largest element of the 
array is 54 and the second 
largest element is 34
 */