#include<bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin>>n;

    int row = 0;

    while(row<n){
        int col=0;
        while (col<n)
        {
            // A
            // cout<<col+1<<" ";

            // B
            // cout<<n-col<<" ";

            col++;
        }
        row++;
        cout<<endl;
    }


    return 0;
}