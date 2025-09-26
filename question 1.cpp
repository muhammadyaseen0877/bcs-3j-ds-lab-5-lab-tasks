//Q1: Assume you are developing a program to simulate a game where players take turns to guess
//a number between 1 and 100. The program generates a random number between 1 and 100 at the
//start of the game, and the player who guesses the correct number wins the game. If a player
//guesses incorrectly, the program tells them whether their guess was too high or too low, and the
//turn passes to the next player. Solve it using Direct Recursion?

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guess(int target, int p){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	
	if(target>n) {
	cout<<"Too low"<<endl;	
	}
	
	else if(target<n) {
	cout<<"Too high"<<endl;	
		
	}
	
	else if(target==n) {
		cout<<"player "<<p<<" "<<"win"<<endl;
	}
	
	int next;
	if(next==1){
		next=2;
	}
	else {
		next=1;
	}
	guess(target, next);
}

int main(){
	srand(time(0));
	int target = rand()%100;
	
	cout<<"game start: "<<endl;
	guess(target, 1);
	return 0;
}
