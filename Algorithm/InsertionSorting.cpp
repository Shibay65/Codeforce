#include <iostream>
using namespace std;
void print(int a[], int n)
{
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void Insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 and a[prev]>curr){
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=curr;
    }
}

int main()
{
    int n = 5;
    int a[] = {4, 1, 5, 2, 3};
    Insertionsort(a, n);
    print(a, n);
    return 0;
}