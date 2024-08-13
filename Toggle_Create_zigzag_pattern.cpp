#include<iostream>
using namespace std;

// Function to rearrange the array elements in zigzag fashion
void zig_zag_array(int nums[], int n)
{
    bool ans = true; // Variable to track the pattern (if the next element should be greater or smaller)

    // Loop through the array and rearrange elements in zigzag pattern
    for (int i = 0; i <= n - 2; i++)
    {
        if (ans) // If the pattern is to have the next element greater
        {
            if (nums[i] > nums[i + 1]) // Swap if the current element is greater than the next element
                swap(nums[i], nums[i + 1]);
        }
        else // If the pattern is to have the next element smaller
        {
            if (nums[i] < nums[i + 1]) // Swap if the current element is smaller than the next element
                swap(nums[i], nums[i + 1]);
        }
        ans = !ans; // Toggle the pattern for the next iteration
    }
}

int main(){
    int size;
    cout<<"Enter the size of array"<<" ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elments of array"<<" ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    zig_zag_array(arr,size);
    cout<<"The zig zag pattern is"<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[j]<<" ";
    }
    
    
    
    
    
    return 0;
}