
#include<iostream>
#include<sstream>
#include<string>
#include<cmath>

using namespace std;
unsigned int mod(string num, int a) {
    unsigned int modulo = 0, i;
    
    for(i = 0; i < num.length(); i++) {
        modulo = (modulo*10 + (int)num[i] - '0') % a;
        
    }
    //cout << modulo << " \n";
    return modulo;
}
int cube(string n1, double n) {
    double r0, sum = 0;
    ostringstream sumString;
    sumString.precision(0);
    if(mod(n1,3) == 0){
        r0 = floor(n / 3);
        sum = r0 * (18);
    }
    else if(mod(n1,3) == 1) {
        r0 = floor(n / 3);
        sum = r0*1 + (r0 - 1)*(17);
    }
    else if(mod(n1,3) == 2) {
        r0 =floor(n/3);
        sum = 9*(2*r0+1);
        
    }
    sumString << std::fixed<<sum;
    return mod(sumString.str(), 1000007);
}
int main() {
    string n;
    double x = 0;
    cin>>n;
    
    stringstream convert(n);
    convert >> x;
    
    cout << cube(n, x)<<"\n";
    return 0;
}

