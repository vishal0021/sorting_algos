#include<iostream>

using namespace std;

/*
find the minimum element in the array
swap it with the first element of the unsorted array
repeat till entire array is sorted.

*/

int main()
{

    int arr[12] = {3,12,4,2,25,8,5,30,1,7};
    int n = 10;

    int min = arr[0];
    for(int i = 0; i< n-1; i++)
    {
        for (int j =i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    //display array

     for(int k =0; k<n; k++)
    {
        cout<<arr[k]<<" ";
    }
    
    return 0;
}