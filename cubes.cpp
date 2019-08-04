/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
        r0 = (double)n / 3;
        sum = r0 * (18);
    }
    else if(mod(n1,3) == 1) {
        r0 = n / 3;
        sum = r0*1 + (r0 - 1)*(17);
    }
    else if(mod(n1,3) == 2) {
        r0 =floor(n/3);
       // cout <<fixed<< (int)r0<<"\n";
        sum = 9*(2*r0+1);
        //cout<<fixed<< (int)sum << "\n";
        
    }
    sumString << std::fixed<<sum;
    //cout<<fixed<<sumString.str();
    return mod(sumString.str(), 1000007);
}
int main() {
    string n;
    double x = 0;
    cin>>n;
    
    stringstream convert(n);
    convert >> x;
    
    cout << cube(n, x)<<"\n";
    //cout << mod("29999999997", 1000007);
    return 0;
}

