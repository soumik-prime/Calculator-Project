#include<bits/stdc++.h>
using namespace std;
void toBinary(long long n);
void toOctal(long long n);
void toHexa(long long n);
void outp(long long inp, int a);
long long fromBinary(string str);
long long fromOctal(string str);
long long fromHexa(string str);
long long fromDesi(string str);



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
    return stoll(str);
}

void outp(long long inp, int a){
    if(a != 1) cout << "Desimal: " << inp << endl;
    if(a != 2) toBinary(inp);
    if(a != 3) toOctal(inp);
    if(a != 4) toHexa(inp);
    cout << endl;
    return;
}

int main(){
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
    cout << "|    1. Desimal               3. Octal                |" << endl;
    cout << "|                                                     |" << endl;
    cout << "|    2. Binary                4. Hexa Desimal         |" << endl;
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

}





