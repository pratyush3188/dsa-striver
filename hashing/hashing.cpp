//main concept of hashing is to prestoring and fetching 
//eill do some precalculation and will create an hash array 
//alternative of using loops and solving the question through loop loop are in efficient as the time complexity of the loops is more as compare to time complexity of hashing 

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i =0;i<n;i++){
    cin>>arr[i];
}    
int hash[13]={0};
for(int i=0;i<n;i++){
    hash[arr[i]]+=1;
}


int q;
cin>>q;
while(q--){
    int number;
    cin>>number;
    cout<<hash[number]<<endl;


}

return 0;
}

//maximum size array you can declare is of 10 to the power 6 for the integer insinde main more thsn it will cause sefmenation error 
// but you declare gloabblythe array can go to 10 to the pwer 7 
//inside int main it will always cause error if you went 10 to the power 7 