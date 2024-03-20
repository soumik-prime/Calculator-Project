#include<bits/stdc++.h>
#define endl "\n\n"
using namespace std;
void add(double a, double b);                 //addition
void substr(double a, double b);              //substraction
void multip(double a, double b);              //multiplication
void div(double a, double b);                 //division
void power(double a, double b);               //power
void root(double a, double b);                //root
long long factor(long long a);                      //factorial using recurssion
void fact(long long a);                             //factorial
void pes(double a, double b);                 //persentage



int main(){
    while(true){
        double a, b;
        char sym;
        cout << "Enter Arithmetic Operation: ";
        cin >> a >> sym;
        if(sym != '!') cin >> b;

        if(sym == '+' ) add(a,b);
        else if(sym == '-') substr(a, b);
        else if(sym == 'x' || sym == '*') multip(a, b);
        else if(sym == '/') div(a, b);
        else if(sym == '^') power(a, b);
        else if(sym == 'v') root(a, b);
        else if(sym == '!') fact(a);
        else if(sym == '%') pes(a, b);
        else cout << "Syntex Error!" << endl;
        cout << "\n\nDo You want to Continue(Y/N): ";
        char tr;
        cin >> tr;
        if(tr == 'N' || tr == 'n') break;
    }
}

void add(double a, double b){
    if(b < 0) cout << "=> " << a << " - " << b*-1 << " = " << a+b << endl;
    else cout << a << " + " << b << " = " << a+b << endl;
    
}

void substr(double a, double b){
    if(b < 0) cout << a << " + " << b*-1 << " = " << a-b << endl;
    else cout << a << " - " << b << " = " << a-b << endl;
}

void multip(double a, double b){
    cout << a << " x " << b << " = " << a*b << endl;
}

void div(double a, double b){
    cout << a << " ÷ " << b << " = " << a/b << endl;
}

void power(double a, double b){
    cout << a << "^" << b << " = " << pow(a, b) << endl;
}

void root(double a, double b){
    cout << a << "v" << b << " = " << pow(b, 1/a) << endl;
}

long long factor(long long a){
    if(a == 1 || a == 0) return 1;
    return a * factor(a - 1);
}

void fact(long long a){
    cout << a << '!' << " = " << factor(a) << endl;
}

void pes(double a, double b){
    cout << a << "%" << " " << b << " = " << (a/100) * b << endl;
} 