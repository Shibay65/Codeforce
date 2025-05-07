#include<iostream>
using namespace std;
int main(){
int a[100],b[100],c[100],n,x=0,y=0,z=0;
cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i]>>b[i]>>c[i];
}
for (int i = 0; i < n; i++)
{
x+=a[i];
y+=b[i];
z+=c[i];
}
if(x==0 && y==0 && z==0){
    cout<<"YES";
}
else
cout<<"NO";
   
 return 0;
}