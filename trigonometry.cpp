#include<bits/stdc++.h>
#define endl "\n\n"
using namespace std;

#define cont  (M_PI/180) // radian = cont * degree

void sinf(double a);
void cosf(double a);
void tanf(double a);
void cosecf(double a);
void secf(double a);
void cotf(double a);
void arcsinf(double a);
void arccosf(double a);
void arctanf(double a);

int main(){
    string ratio;
    double a;
    cout << "Enter Trigonometric Operation: ";
    cin >> ratio >> a;
    if(ratio == "sin") sinf(a);                 //radius argument
    else if(ratio == "cos") cosf(a);            //radius argument
    else if(ratio == "tan") tanf(a);            //radius argument
    else if(ratio == "cosec") cosecf(a);        //radius argument
    else if(ratio == "sec") secf(a);            //radius argument
    else if(ratio == "cot") cotf(a);            //radius argument
    else if(ratio == "asin") arcsinf(a);        //ratio argument
    else if(ratio == "acos") arccosf(a);        //retio argument
    else if(ratio == "atan") arctanf(a);        //retion argument
    else cout << "Syntex Error!" << endl;
}

void sinf(double a){
    cout << "sin " << a << " = " << sin(a*cont) << endl;
}

void cosf(double a){
    cout << "cos " << a << " = " << cos(a*cont) << endl;
}

void tanf(double a){
    if((long long)a % 90 == 0  && (long long)a == a && ((long long)a/90) % 2 != 0) cout << "tan " << a << " = " << "Undefined" << endl;
    else if((long long)a % 180 == 0  && (long long)a == a)  cout << "tan " << a << " = " << 0 << endl;
    else cout << "tan " << a << " = " << sin(a*cont)/cos(a*cont) << endl;
}

void cosecf(double a){
    if((long long)a % 180 == 0 || a == 0 && (long long)a == a) cout << "cosec " << a << " = " << "Undefined" << endl;
    else cout << "cosec " << a << " = " << 1/sin(a*cont) << endl;
}

void secf(double a){
    if((long long)a % 90 == 0 && (long long)a == a) cout << "sec " << a << " = " << "Undefined" << endl;
    else cout << "sec " << a << " = " << 1/cos(a*cont) << endl;
}

void cotf(double a){
    if((long long)a % 180 == 0 || a == 0 && (long long)a == a) cout << "cot " << a << " = " << "Undefined" << endl;
    else if((long long)a % 90 == 0  && (long long)a == a)  cout << "cot " << a << " = " << 0 << endl;
    else cout << "cot " << a << " = " << cos(a*cont)/sin(a*cont) << endl;
}

void arcsinf(double a){
    cout << "asin " << a << " = " << asin(a)/cont << endl;
}

void arccosf(double a){
    cout << "acos " << a << " = " << acos(a)/cont << endl;
}

void arctanf(double a){
    cout << "atan " << a << " = " << atan(a)/cont << endl;
}