#include<iostream>
using namespace std;
int main(){
    int n, i, val, sum=0;
    float average;

    cout << "Enter the value of n:" << endl;
    cin >> n;
    for (i=0;i<n;i++){
        cin >> val;
        sum+=val;
    }
    average=(float)sum/n; // explicitly type casting 
    cout << "The avergae is : " << average << endl;
        return 0;

}