what is a wave form array?
Given an unsorted array of integers, sort the array into a wave like array.
An array ‘arr[0..n-1]’ is sorted in wave form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..
and so on.
code:-
def sortInWave(arr, n): 
    arr.sort()  
    for i in range(0,n-1,2): 
        arr[i], arr[i+1] = arr[i+1], arr[i] 
  
# Driver program 
arr = [10, 90, 49, 2, 1, 5, 23] 
sortInWave(arr, len(arr)) 
for i in range(0,len(arr)): 
    print arr[i],
