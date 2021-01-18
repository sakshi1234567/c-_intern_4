#include <bits/stdc++.h> 
using namespace std;  
  
int minDist(int arr[], int n, int x, int y) 
{ 
    int i, j; 
    int min_dist = INT_MAX; 
    for (i = 0; i < n; i++) 
    { 
        for (j = i+1; j < n; j++) 
        { 
            if( (x == arr[i] && y == arr[j] || 
                y == arr[i] && x == arr[j]) && 
                min_dist > abs(i-j)) 
            { 
                min_dist = abs(i-j); 
            } 
        } 
    } 
    return min_dist; 
} 
int main()  
{ 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x; 
    int y;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
  
    cout << "Minimum distance between " << x <<  
                    " and " << y << " is " <<  
                    minDist(arr, n, x, y) << endl; 
} 