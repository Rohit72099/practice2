#include <cmath>
#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d){

  int max;
    if(a>b && a>c && a>d){
      return max=a;
    }
    else if(b>a && b>c && b>d){
      return max=b;
    }
    else if(c>a && c>b && c>d){
      return max=c;
    }
    else if (d>a && d>b && d>c){
      return max=d;
    }
    return max;
}
int main() {   
     int a,b,c,d;
     cin >> a >> b >> c >> d;
     cout << max_of_four(a,b,c,d);
    return 0;
}
