/*

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string source,destination;
    cin >> source >> destination;
    float fair = 0;
    int ini_value = 0;
    
    int path[] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    string bus_stop[] = {"TH", "GA", "IC", "HA", "TE", "LU", "NI","CA"};
    
    for(int i=0; i<=8; i++){
        if(bus_stop[i] == source){
            ini_value=i;
        }
    }
    
    for(int j=ini_value+1; j<=8; j++){
        if(bus_stop[j] == source){
            cout << "Invalid Input" << endl;
            return 0;
        }
        
        else{
            j=j%8;
            fair+=(path[j]*0.005);
            
            if(bus_stop[j]==destination){
                cout << ceil(fair) << ".0 INR";
                break;
            }
        }
    }
    return 0;
}
