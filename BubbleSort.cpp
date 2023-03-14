#include<iostream>
using namespace std;

void BubbleSort(int n,int a[])
{
    int Pass = 1;
    for (int i = 0; i < n-Pass; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int arr[] = {10,5,7,3,4};
    int size = 5;

    BubbleSort(size,arr);

    return 0;
}