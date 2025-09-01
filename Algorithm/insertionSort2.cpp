#include<iostream>
using namespace std;
int insertion_sort(int a[],int b){
for(int i=1;i<b;i++){\
int temp=a[i];
int j=i-1;
while(j>=0 and a[j]>temp){
    a[j+1]=a[j];
    j--;
}
a[j+1]=temp;
}



}



int main(){
int a[6]={6,4,3,5,7,11};
insertion_sort(a,6);
for(int i=0;i<6;i++){
    cout<<a[i]<<"  ";
}







    
 return 0;
}