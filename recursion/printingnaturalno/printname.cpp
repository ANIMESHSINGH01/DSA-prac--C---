#include <iostream>
using namespace std;
void printNTimes(int n) {
    // Base case: if n is 0, do nothing
    if (n == 0) { //Base Case
        return;
    }
    cout << "Coding Ninjas ";
    printNTimes(n - 1);
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;// Number of times to print 'a'
    printNTimes(n);
    cout << endl;
    return 0;
}