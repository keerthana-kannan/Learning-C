#include<stdio.h>

int minSum(int arr[], int n) 
{ 
    int sum = arr[0]; 
  
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) {             
  
            // While current element is same as  
            // previous or has become smaller 
            // than previous. 
            int j = i; 
            while (j < n && arr[j] <= arr[j - 1]) {           
                arr[j] = arr[j] + 1; 
                j++; 
            } 
        } 
         sum = sum + arr[i]; 
     } 
  
    return sum; 
} 
/*other method
int minSum(int arr[], int n) 
{ 
    int sum = arr[0], prev = arr[0]; 
  
    for (int i = 1; i < n; i++) { 
  
        // If violation happens, make current 
        // value as 1 plus previous value and 
        // add to sum. 
        if (arr[i] <= prev) { 
            prev = prev + 1; 
            sum = sum + prev; 
        } 
  
        // No violation. 
        else { 
            sum = sum + arr[i]; 
            prev = arr[i]; 
        } 
    } 
  
    return sum; 
} 
*/

int main()                        //default function for call
{
	int a[100],n,i,j,ans;
	printf("Array size: ");
        scanf("%d",&n);
        printf("Elements: ");
        
      for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for (int i = 0; i < n; i++)                     //Loop for ascending ordering
	{
		for (int j = 0; j < n; j++)             //Loop for comparing other values
		{
			if (a[j] > a[i])                //Comparing other array elements
			{
				int tmp = a[i];         //Using temporary variable for storing last value
				a[i] = a[j];            //replacing value
				a[j] = tmp;             //storing last value
			}  
		}
	}
				//now array a has the sorted data
	ans = minSum(a, n);
	
	printf("%d",ans);
	
	return 0;

		
}