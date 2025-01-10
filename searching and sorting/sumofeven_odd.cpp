#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,evenSum=0,oddSum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			evenSum=evenSum+i;

			}
			else{
				oddSum=oddSum+i;
		}
		cout<<evenSum;
		cout<<oddSum;
	}
	
}