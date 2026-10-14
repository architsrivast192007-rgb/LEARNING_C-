#include<iostream>
using namespace std;
int main() {
    int i,j,n;
    cout << "Please enter the order of the matrix(n):";
    cin >> n;
    int arr[n][n], sol[n][n];

    cout << "Please enter all the elements of the nxn matrix:" << endl; 
   
    for (i=0;i<n;i++) {
      for (j=0;j<n;j++){
         cin >> arr[i][j];


      }
   }
    cout << "Calculating the Transpose...:" << endl;
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
         sol[i][j]=arr[j][i];
      }
    }
    cout << "The matrix is as follows:" << endl;
    for (i=0;i<n;i++){
      for (j=0;j>n;j++){
         cout << sol[i][j];


      }
    }
   
    
     


    
    return 0;
    
}