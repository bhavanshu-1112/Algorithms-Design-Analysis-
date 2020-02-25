#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;
  float w[n];
  float p[n];
  cout<<"Enter weiggths"<<endl;
  for(int i=0;i<n;i++){
    cin>>w[i];
}
cout<<"Enter prices:"<<endl;
  for(int i=0;i<n;i++){
  cin>>p[i];
}

cout<<"Enter maximum weight:"<<endl;
int weight;
cin>>weight;

float x[n];
for(int i=0;i<n;i++){
  x[i] = p[i]/w[i];
}

float temp;
for(int i=0;i<n-1;i++){
for(int j=0;j<n-i-1;j++){

    if(x[j] < x[j+1]){

swap(x[j],x[j+1]);
swap(p[j],p[j+1]);
swap(w[j],w[j+1]);

}

}

}

int i=0;
float cp = 0, cw =0;
float arr[n] = {0}, a[n] = {0}; 
 while(cw<weight){
 if((cw + w[i])<=weight){
  cw += w[i];
  cp += p[i];
  arr[i] = p[i];
  a[i] = w[i];
  
}
else{
  cp += (x[i]*(weight - cw));
  
  arr[i] = (x[i]*(weight - cw));
  a[i] = weight - cw;
  cw = weight;
}
i++;


}

cout<<"Maximum value:"<<cp<<endl;
cout<<"Maximum weight taken :"<<cw<<endl;



}
