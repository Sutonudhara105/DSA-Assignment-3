#include <stdio.h>

int main()
{int arr[10], i, n, temp, j;
   printf("Enter the number of elements:\n");
   scanf("%d", &n);
   printf("The array elements are:\n");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   int key;
   for (i = 1; i < n; i++)
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

   printf("The sorted array is:\n");
   for (i = 0; i <= n-1; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}
