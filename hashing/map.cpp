#include<iostream>
#include <map>

#include <unordered_map>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}
unordered_map<int,int>mpp;
for(int i =0;i<n;i++){
    mpp[arr[i]]++;
}
//we should use unordermap first if there is error of time limit exceed we should go to map as unordermap gives you least time complexity in worst case in collision only it will give you n square time complexity other wise it will give you big o of n time complextiy 

int q ;
cin>>q;
while(q--){
    int number;
    cin>>number;
    cout<<mpp[number]<<endl;
    
}




return 0;
}

