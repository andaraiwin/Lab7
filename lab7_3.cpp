#include<iostream>

using namespace std;

int adiff(int A, int B){
  int C;
    C = (A%360) - (B%360);
        if(-C > 180){
          return C = 180 - (-C%180);
        }
        if(C < 0){
          return -C;
        }
        if(C >= 0){
          return C;
        }
    return 0;
}



int main(){
  cout << adiff(180,270);
  cout << "\n" << adiff(210,45);
  cout << "\n" << adiff(0,360);
  cout << "\n" << adiff(10,350);
  cout << "\n" << adiff(95,260);
  cout << "\n" << adiff(90,-90);
  cout << "\n" << adiff(1000,280);
  cout << "\n" << adiff(60,244);
}
