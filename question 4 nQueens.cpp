#include <iostream>
using namespace std;

bool isSafe(char board[][10], int row, int col, int n){
	for(int j=0; j<n; j++){
		if(board[row][j]=='Q'){
			return false;
		}
		
	}
	
	for(int i=0; i<n; i++){
		if(board[i][col]=='Q'){
			return false;
		}
		
	}
	
	for(int i=row, j=col; i>=0 && j>=0; i--, j-- ){
		if(board[i][j]=='Q'){
		return false;
	}
}
	
	
	for(int i=row, j=col; i>=0 && j<n; i--, j++ ){
		if(board[i][j]=='Q'){
		return false;
	}
}

 return true;
 
}

void nQueens(char board[][10], int row, int n){
	
	if(row==n){
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cout<<board[i][j]<<" ";
				
			}
			cout<<endl;
		}
		cout<<"\n --------------------- \n";
		return;
		
	}
	
	for(int j=0; j<n; j++){
		if(isSafe(board, row, j, n)){
			board[row][j]= 'Q';
			 nQueens(board, row+1, n);
			 board[row][j]='.';
		}
	}
}

int main(){
	 int n;
	 cout<<"Enter the number of roew and column of board (square) (n<=10): ";
	 cin>>n;
	 
	 char board[10][10];
	 
	 for(int i=0; i<n ; i++){
	 	for(int j=0; j<n; j++){
	 		board[i][j]='.';
		 }
	 }
	 
	 nQueens(board,0,n);
	 return 0;
	 
	 
}
