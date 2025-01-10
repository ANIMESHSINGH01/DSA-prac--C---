#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target, int m, int n) {

        int i=0;
        int j=m-n;
        while(j>=0 && i<m){
            if(matrix[i][j]==target){
                return true;  
                // i=rows,j=columns,n=no.of rows,j=no. of columns;
            }
            else{
                if(matrix[i][j]<target){
                    i--;
                }
                else{
                    j++;
                }
            }
        }
        return false;
        
    }
};

int main() {
int arr[6]={5,3,2,7,9,10};
int target=3;

cout<<ans;
return 0;
}