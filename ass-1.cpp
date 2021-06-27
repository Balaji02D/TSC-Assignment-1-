//1.Given a string S, remove consecutive duplicates from it recursively

#include <bits/stdc++.h>
using namespace std;
 void rDup(char* S)
{
    if (S[0] == '\0')
        return; 
   if (S[0] == S[1])
   {        
        int i = 0;
        while (S[i] != '\0') 
		{
            S[i] = S[i + 1];
            i++;
        }
        rDup(S);
    }
    rDup(S + 1);
}
int main()
{ 
    char S1[] = "abcba";
    rDup(S1);
    cout << S1 << endl; 
    return 0;
}


//2.	Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
#include<iostream>
using namespace std;

int maxSum( int arr[], int n) {
   int tempMax = arr[0];
   int currentMax = tempMax;

   for (int i = 1; i < n; i++ ) 
   { 
      currentMax = max(arr[i], currentMax+arr[i]);
      tempMax = max(tempMax, currentMax);
   }
   return tempMax;
}
int main() {
   int arr[] =  {1,2,3,-2,5};
   int n = 5;
   cout << "Maximum Sum of contiguous Subarray is: "<< maxSum( arr, n );
}









//3.	Given a sorted array A of size N, delete all the duplicates elements from A

#include<iostream>
using namespace std;

int remove_duplicate_elements(int arr[], int n)
{

if (n==0 || n==1)
return n;

int temp[n];
int j = 0;
int i;
for (i=0; i<n-1; i++)
if (arr[i] != arr[i+1])
temp[j++] = arr[i];
temp[j++] = arr[n-1];

for (i=0; i<j; i++)
arr[i] = temp[i];
return j;
}


int main()
{
int n;
cin >> n;
int arr[n];
int i;
for(i = 0; i < n; i++)
{
cin >> arr[i];
}

n = remove_duplicate_elements(arr, n);


for (i=0; i<n; i++)
cout << arr[i] << " ";

return 0;
}

