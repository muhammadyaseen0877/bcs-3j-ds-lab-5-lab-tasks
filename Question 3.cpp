#include <iostream>
using namespace std;

bool findpath(int i, int j, int n, int arr[][10]){
	
	bool reached=false;
	
	if(i==j) return true;
	
	if(i<0 || j<0|| i>=n|| j>=n) return false;
	
	if(findpath(i, j+1, n, arr)==true){
		arr[i][j]+=arr[i][j+1];
		return true;
		
		
	}
	
		if(findpath(i+1, j, n, arr)==true){
		arr[i][j]+=arr[i+1][j];
		return true;
		
		
	}
}
int main(){
	int n;
	
	int arr[10][10];
	cout<<"Enter the dimmesnsions of the path: (square)";
	cin>>n;
	
	cout<<"Enter the matrix: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	
	int output[10][10];
	if(findpath(0, 0, n, arr)==true){
		
		cout<<"lion reached sucessfully..."<<endl;
		
	}
	
	
	return 0;
}
