#include <bits/stdc++.h>
//includes all the nessasary libraries
using namespace std;


//add all function except the solve and main
void input_of_array(int arr[],int n)
{
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int sum_of_array(int arr[], int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        temp+=arr[i];
    }
    return temp;
}



int main()
{
    //paste the solve part
    int arr[100];
    int n;
    cin>>n;
    input_of_array(arr,n);
    int sum=sum_of_array(arr,n);
    cout<<"Sum of the elements is "<<sum<<endl;
    return 0;
}