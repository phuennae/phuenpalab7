#include<iostream>

using namespace std;

int adiff(int a,int b){
    a%=360;
    b%=360;
    int diff=a-b;
    if(diff<0){
        diff=-diff;
    }
    if(diff>180){
        diff=360-diff;
    }
    return diff;
}

int main(){
  cout << adiff(180,270);
  cout << adiff(210,45);
  cout << adiff(0,360);
  cout << adiff(10,350);
  cout << adiff(95,260);
  cout << adiff(90,-90);
  cout << adiff(1000,280);
  cout << adiff(60,244);
}
