#include <iostream>
using namespace std;

int sumofDigits(int n){
	if(n==0){
		return (n%10)+sumofDigits(n/10);
	
}
}
int nestedsum(int n){
	if(n<10) {
		return n;
	}
	
	int sum= sumofDigits(n);
	return nestedsum(n);
}

int main(){
	int n;
	cout<<"Enter the number n: ";
	cin>>n;
	
	 int result=nestedsum(n);
    cout<<"The nested sum of "<<n<<" is: "<<result<<endl;

    return 0;
}
	
		


