#include<iostream>
using namespace std;

//Write the function printO() here

int printO(int n,int m){
    if(n > 0 && m >0){
        for(int x=0;x<n;x++){
            for(int y=0;y<m;y++){
                cout << "O";
            }
        cout << "\n";
        }
    }
    else{
        cout << "Invalid input";
    }
    return 0;
}
