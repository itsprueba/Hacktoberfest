def getMedian( ar1, ar2 , n):
    i = 0     
    j = 0 
    m1 = -1
    m2 = -1

    count = 0
    while count < n + 1:
        count += 1
        if i == n:
            m1 = m2
            m2 = ar2[0]
            break
        elif j == n:
            m1 = m2
            m2 = ar1[0]
            break
        if ar1[i] <= ar2[j]:
            m1 = m2 # Store the prev median
            m2 = ar1[i]
            i += 1
        else:
            m1 = m2 # Store the prev median
            m2 = ar2[j]
            j += 1
    return (m1 + m2)/2
 
# Driver code to test above function
ar1 = [1, 12, 15, 26, 38]
ar2 = [2, 13, 17, 30, 45]
n1 = len(ar1)
n2 = len(ar2)
if n1 == n2:
    print("Median is ", getMedian(ar1, ar2, n1))
else:
    print("Doesn't work for arrays of unequal size")
