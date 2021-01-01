#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,h,p;
    string s;

    cout << "Enter your age: ";
    cin >> a;

    if(a<=20){
        cout << "Enter your height: ";
        cin >> h;
        if(h<160){
            s="UNFRIEND";
        }else if(h<175){
            s="FRIEND";
        }else{
            cout << "Enter your property: ";
            cin >> p;
            if(p>69000000){
                s="MARRIED";
            }else{
                s="ONE-NIGHT-STAND"; 
            }
        }
    }else if(a<30){
        cout << "Enter your property: ";
            cin >> p;
            if(p>10000000){
                s="BEST FRIEND";
            }else{
                s="UNFRIEND"; 
            }
    }else{
        s="UNFRIEND";
    }
    cout << "Your status = " << s;
    
  
return 0;
}
