#include<bits/stdc++.h>
using namespace std;

#define cont  (M_PI/180) // radian = cont * degree

//Arithmetic Prototype
void add(double a, double b);                 //addition
void substr(double a, double b);              //substraction
void multip(double a, double b);              //multiplication
void div(double a, double b);                 //division
void power(double a, double b);               //power
void root(double a, double b);                //root
long long factor(long long a);                      //factorial using recurssion
void fact(long long a);                             //factorial
void pes(double a, double b);                 //persentage
void arithmetic();                             //Arithmetic Main

// Trigonometric Prototype
void sinf(double a);
void cosf(double a);
void tanf(double a);
void cosecf(double a);
void secf(double a);
void cotf(double a);
void arcsinf(double a);
void arccosf(double a);
void arctanf(double a);
void trigonometric();                          //Trigonometric Main function

// Matrix Prototype
void matadd(long long mr1, long long mc1, long long mr2, long long mc2);
void matsub(long long mr1, long long mc1, long long mr2, long long mc2);
void matmulti(long long mr1, long long mc1, long long mr2, long long mc2);
void matrixf();                                 //Matrix Main Function

//Number Conversion Prototype
void toBinary(long long n);
void toOctal(long long n);
void toHexa(long long n);
long long fromBinary(string str);
long long fromOctal(string str);
long long fromHexa(string str);
long long fromDesi(string str);
void outp(long long inp, int a);








//Arithmetic functions
void add(double a, double b){
    if(b < 0) cout << a << " - " << b*-1 << " = " << a+b << endl << endl;
    else cout << a << " + " << b << " = " << a+b << endl << endl;
    
}
void substr(double a, double b){
    if(b < 0) cout << a << " + " << b*-1 << " = " << a-b << endl << endl;
    else cout << a << " - " << b << " = " << a-b << endl << endl;
}
void multip(double a, double b){
    cout << a << " x " << b << " = " << a*b << endl << endl;
}
void div(double a, double b){
    cout << a << " ÷ " << b << " = " << a/b << endl << endl;
}
void power(double a, double b){
    cout << a << "^" << b << " = " << pow(a, b) << endl << endl;
}
void root(double a, double b){
    cout << a << "v" << b << " = " << pow(b, 1/a) << endl << endl;
}
long long factor(long long a){
    if(a == 1 || a == 0) return 1;
    return a * factor(a - 1);
}
void fact(long long a){
    cout << a << '!' << " = " << factor(a) << endl << endl;
}
void pes(double a, double b){
    cout << a << "%" << " " << b << " = " << (a/100) * b << endl << endl;
} 


// Trigonometric functions
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


// Matrix functions
void matadd(long long mr1, long long mc1, long long mr2, long long mc2){
        
    double mat1[mr1][mc1], mat2[mr2][mc2];
    cout << "Enter The First Matrix: " << endl;
    for(long long i = 0; i < mr1; i++){
        for(long long j = 0; j < mc1; j++){
            cin >> mat1[i][j];
        }
    }


    cout << "Enter The Second Matrix: " << endl;
    for(long long i = 0; i < mr2; i++){
        for(long long j = 0; j < mc2; j++){
            cin >> mat2[i][j];
        }
    }

    cout << "Matrix 01 + Matrix 02 = " << endl << endl;
    for(long long i = 0; i < mr2; i++){
        cout << "\t";
        for(long long j = 0; j < mc2; j++){
            cout << mat2[i][j] + mat1[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

}
void matsub(long long mr1, long long mc1, long long mr2, long long mc2){
        
    double mat1[mr1][mc1], mat2[mr2][mc2];
    cout << "\n\nEnter The First Matrix: " << endl;
    for(long long i = 0; i < mr1; i++){
        for(long long j = 0; j < mc1; j++){
            cin >> mat1[i][j];
        }
    }


    cout << "\n\nEnter The Second Matrix: " << endl;
    for(long long i = 0; i < mr2; i++){
        for(long long j = 0; j < mc2; j++){
            cin >> mat2[i][j];
        }
    }

    cout << "\n\nMatrix 01 - Matrix 02 = " << endl << endl;
    for(long long i = 0; i < mr2; i++){
        cout << "\t";
        for(long long j = 0; j < mc2; j++){
            cout << mat1[i][j] - mat2[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

}
void matmulti(long long mr1, long long mc1, long long mr2, long long mc2){
    double mat1[mr1][mc1], mat2[mr2][mc2];
    cout << "\n\nEnter The First Matrix: " << endl;


    for(long long i = 0; i < mr1; i++){
        for(long long j = 0; j < mc1; j++){
            cin >> mat1[i][j];
        }
    }


    cout << "\n\nEnter The Second Matrix: " << endl;
    for(long long i = 0; i < mr2; i++){
        for(long long j = 0; j < mc2; j++){
            cin >> mat2[i][j];
        }
    }


    double multiAns[mr1][mc2];

    
    for(long long i = 0; i < mr1; i++){
        for(long long j = 0; j < mc2; j++){
            multiAns[i][j] = 0;
            for(long long k = 0; k < mc1; k++){
                multiAns[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "\n\nMatrix 01 x Matrix = " << endl << endl;
    for(long long i = 0; i < mr1; i++){
        cout << "\t";
        for(long long j = 0; j < mc2; j++){
            cout << multiAns[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}  


//Number Conversion Functions
void toBinary(long long n){
    if(n == 0){ 
        cout << 0 << endl;
        return;
    }
    stack<int> a;
    while(n != 0){
        a.push(n%2);
        n /= 2;
    }
    cout << "Binary:\t\t ";
    while(!a.empty()){
        cout << a.top();
        a.pop();
    }
    cout << endl;

}
void toOctal(long long n){
        if(n < 8){ 
        cout << n << endl;
        return;
    }
    stack<int> a;
    while(n != 0){
        a.push(n%8);
        n /= 8;
    }
    cout << "Octal:\t\t ";
    while(!a.empty()){
        cout << a.top();
        a.pop();
    }
    cout << endl;
}
void toHexa(long long n){
        if(n < 16){ 
        cout << n << endl;
        return;
    }
    stack<int> a;
    map<int, char> flag;
    flag[0] = '0';
    flag[1] = '1';
    flag[2] = '2';
    flag[3] = '3';
    flag[4] = '4';
    flag[5] = '5';
    flag[6] = '6';
    flag[7] = '7';
    flag[8] = '8';
    flag[9] = '9';
    flag[10] = 'A';
    flag[11] = 'B';
    flag[12] = 'C';
    flag[13] = 'D';
    flag[14] = 'E';
    flag[15] = 'F';
    while(n != 0){
        a.push(n%16);
        n /= 16;
    }
    cout << "Hexa Desimal:\t ";
    while(!a.empty()){
        cout << flag[a.top()];
        a.pop();
    }
    cout << endl;
} 
long long fromBinary(string str){
    long long ans = 0, count = 0;
    for(int i = str.size()-1; i >= 0; i--){
        (str[i] == '0')? ans += 0 : ans += pow(2, count);
        count++;
    }
    // cout << ans << endl;
    return ans;
}
long long fromOctal(string str){
    long long ans = 0, count = 0;

    for(int i = str.size()-1; i >= 0; i--){
        ans += (str[i] - '0') * pow(8, count);
        count++;
    }
    // cout << ans << endl;
    return ans;    
}
long long fromHexa(string str){
    long long ans = 0, count = 0;
    map<char, int> flag;
    flag['0'] = 0;
    flag['1'] = 1;
    flag['2'] = 2;
    flag['3'] = 3;
    flag['4'] = 4;
    flag['5'] = 5;
    flag['6'] = 6;
    flag['7'] = 7;
    flag['8'] = 8;
    flag['9'] = 9;
    flag['A'] = 10;
    flag['B'] = 11;
    flag['C'] = 12;
    flag['D'] = 13;
    flag['E'] = 14;
    flag['F'] = 15;
    flag['a'] = 10;
    flag['b'] = 11;
    flag['c'] = 12;
    flag['d'] = 13;
    flag['e'] = 14;
    flag['f'] = 15;
    for(int i = str.size()-1; i >= 0; i--){
        ans += flag[str[i]] * pow(16, count);
        count++;
    }
    // cout << ans << endl;
    return ans;
}
long long fromDesi(string str){
    return stoll(str)
}
void outp(long long inp, int a){
    if(a != 1) cout << "Desimal:\t " << inp << endl;
    if(a != 2) toBinary(inp);
    if(a != 3) toOctal(inp);
    if(a != 4) toHexa(inp);
    cout << endl;
    return;
}





//main function for arithmetic operation
void arithmetic(){
    while(true){
        double a, b;
        char sym;
        cout << "---------------------------------------> Arithmetic Operation <---------------------------------------" << endl << endl;
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
        else cout << "Syntex Error!" << endl << endl;
        cout << "\nDo You want to Continue(Y/N): ";
        char tr;
        cin >> tr;
        cout << endl;
        if(tr == 'N' || tr == 'n') break;
    }
}

// Trigonometric Main Function
void trigonometric(){
    while(true){
        cout << "---------------------------------------> Trigonometric Operation <---------------------------------------" << endl << endl;

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
        cout << "\n\nDo You want to Continue(Y/N): ";
        char tr;
        cin >> tr;
        cout << endl;
        if(tr == 'N' || tr == 'n') break;
    }
}

// Matrix Main Function
void matrixf() 
{
    while(true){
        cout << "---------------------------------------> Matrix Operation <---------------------------------------" << endl << endl;
        long long mr1, mc1, mr2, mc2;
        string ch;
        cout << "Enter the order of Matrix 01: ";
        cin >> mr1 >> mc1;
        cout << "Enter the order of Matrix 02: ";
        cin >> mr2 >> mc2;
        cout << endl;


        if(mr1 == mr2 && mc1 == mc2){
            cout << " ________________________" << endl;
            cout << "| Choose Your Operation: |" << endl;
            cout << "| 1. Addition            |" << endl;
            cout << "| 2. Substruct           |" << endl;
            cout << "| 3. Multiplication      |" << endl;
            cout << "!________________________!" << endl;
            cout << "Input: ";
            cin >> ch;

            if(ch == "1") matadd(mr1, mc1, mr2, mc2);
            else if(ch == "2") matsub(mr1, mc1, mr2, mc2);
            else if(ch == "3") matmulti(mr1, mc1, mr2, mc2);
            else cout << "Invalid Operation!" << endl;
        }   
            else if(mc1 == mr2){
                cout << " ________________________" << endl;
                cout << "|Choose Your Operation:  |" << endl;
                cout << "|1. Multiplication       |" << endl;
                cout << "!________________________!" << endl;
                cout << "Input: ";
                cin >> ch;

        
            if(ch == "1")  matmulti(mr1, mc1, mr2, mc2);
            else cout << "Invalid Operation!" << endl;
            }else{
            cout << "Invalid Order!" << endl << endl;
        }
        cout << "\n\nDo You want to Continue(Y/N): ";
        string tr;
        cin >> tr;
        cout << endl;
        if(tr == "N" || tr == "n") break;
    }

}

//Number Conversion Main Function
void NumberConversion(){
    while(true){
        int a, b;
        map<int, string> flag;
        flag[1] = "Desimal";
        flag[2] = "Binary";
        flag[3] = "Octal";
        flag[4] = "Hexa Desimal";

        cout << "---------------------------------------> Number Conversion <---------------------------------------" << endl << endl;
        cout << " _____________________________________________________" << endl;
        cout << "|                                                     |" << endl;
        cout << "|  Select the Number System You want to Convert from: |" << endl;
        cout << "|                                                     |" << endl;
        cout << "|    1. Desimal              2. Binary                |" << endl;
        cout << "|                                                     |" << endl;
        cout << "|    3. Octal                4. Hexa Desimal          |" << endl;
        cout << "!_____________________________________________________!" << endl << endl;
        cout << "Input: ";
        cin >> a;
    
        while(true){
            if(a == 1 || a == 2 || a == 3 || a == 4) break;
            cout << "\nTry again.\n";
            cout << "Input: ";
            cin >> a;
        
        }
        cout << endl << "Enter a " << flag[a] << " Number: ";
        string input;
        cin >> input;
            cout << endl;
        long long inp;

        if(a == 1) inp = fromDesi(input);
        else if(a == 2) inp = fromBinary(input);
        else if(a == 3) inp = fromOctal(input);
        else if(a == 4) inp = fromHexa(input);

        outp(inp, a);

        cout << "\n\nDo You want to Continue(Y/N): ";
        char tr;
        cin >> tr;
        cout << endl;
        if(tr == 'N' || tr == 'n') break;
    }
}







int main(){
    while(true){
        cout << " __________________________________________" << endl;
        cout << "|                                          |" << endl;
        cout << "|  Enter the Operation You Want to Use:    |" << endl;
        cout << "|                                          |" << endl;
        cout << "|  1. Arithmetic      2. Trigonometric     |" << endl;
        cout << "|                                          |" << endl;
        cout << "|  3. Matrix          4. Number Conversion |" << endl;
        cout << "|                                          |" << endl;
        cout << "|  0. Exit                                 |" << endl;
        cout << "!__________________________________________!" << endl << endl;


        string op;

        cout << "Input: ";
        cin >> op;
        cout << endl << endl;

        if(op == "0") break;
        else if(op == "1") arithmetic();
        else if(op == "2") trigonometric();
        else if(op == "3") matrixf();
        else if(op == "4") NumberConversion();
        else cout << "Invalid Operation.\n\n\n";

    }

}