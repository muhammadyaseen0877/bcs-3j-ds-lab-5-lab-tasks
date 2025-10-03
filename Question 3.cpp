#include <iostream>
using namespace std;

bool findpath(int i, int j, int n,  int arr[][10], int result[][10]){
	
	if(i>=n || j>=n|| arr[i][j]==0|| i<0||j<0|| result[i][j]==1){
		return false;
	}
	
	result[i][j]=1;
	
	if((i==n-1 && j==n-1)){
		cout<<"("<<i<<" "<<j<<")\n";
		return true;
	}
	
	if(findpath(i+1,j, n,  arr, result)){
		cout<<"("<<i<<" "<<j<<")\n";
		return true;
		
	}
	
	if(findpath(i,j+1, n,  arr, result)){
		cout<<"("<<i<<" "<<j<<")\n";
		return true;
		
	}
	
	if(findpath(i-1,j, n,  arr, result)){
		cout<<"("<<i<<" "<<j<<")\n";
		return true;
		
	}
	
	if(findpath(i,j-1, n,  arr, result)){
		cout<<"("<<i<<" "<<j<<")\n";
		return true;
		
	}
	
	result[i][j]=0;
	return false;
	
}

int main(){
	
	int n=7;
	
	int arr[10][10]={
    {1,0,1,1,1,0,1},
    {1,1,1,0,1,1,1},
    {0,1,0,1,0,1,0},
    {1,1,1,1,1,0,1},
    {0,0,0,0,1,1,1},
    {1,1,1,0,1,0,1},
    {0,0,1,1,1,1,1}
};
	
	int result[10][10]={0};
	
	cout<<"Backtracing path: "<<endl;
	
	if(findpath(0,0, n,  arr, result)){
		cout<<"Path found for ice cream shop: "<<endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<result[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else{
		cout<<"No path found..."<<endl;
	}
	
	return 0;
}

