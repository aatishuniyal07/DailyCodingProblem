*/ approach 1 is use set which take O(n) time O(n) space and approach 2 using sorting which take O(nlogn) time)
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int n,key;
cin>>t;
while(t--){
cin>>n>>key;
int *arr = new int[n];
for(int i =0 ;i<n;i++){
cin>>arr[i];
}
sort(arr,arr+n);
int begin=0 ;
int end =n-1;
bool flag = true;
while(begin<end){
if(arr[begin]+arr[end]>key)
	end--;
else if(arr[begin]+arr[end]<key)
	begin++;
else{
flag = false;
break;
}
}// begin end loop ended
if(flag==false){
cout<<"Yes"<<endl;}
else 
cout<<"No"<<endl;
delete [] arr;
}//t cases ended
return 0;
}
