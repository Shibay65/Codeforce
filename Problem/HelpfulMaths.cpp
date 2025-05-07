#include<iostream>
using namespace std;
int main(){

string s;
cin>>s;
for(int i=0;i<s.size();i+=2){
    int min=i;
    for(int j=i+2;j<s.size();j+=2){
        if(s[j]<s[min]){
            min=j;
        }
    }
    if(min!=i)
    swap(s[i],s[min]);
}
cout<<s<<endl;
 
 return 0;
}