#include<iostream>
using namespace std;
int main(){
int l,b,c=0;
cin>>l>>b;
while(l<=b){
    l=l*3;
    b=b*2;
    c++;
}
cout<<c;    
 return 0;
}