// program to search an element in the array using linear search.

 #include <stdio.h>
 int main()
 {
   int array[100], search, c, n;

   printf("Enter number of elements: ");
   scanf("%d", &n);

   printf("Enter the number: ", n);

   for (c = 0; c < n; c++)
     scanf("%d", &array[c]);

   printf("Enter a no. to be searched: ");
   scanf("%d", &search);

   for (c = 0; c < n; c++)
   {
     if (array[c] == search)    //* If required element is found *
     {
       printf("%d is present at location %d.\n", search, c+1);
       break;
     }
   }
   if (c == n)
     printf("%d isn't present in the array.\n", search);

   return 0;
 }
