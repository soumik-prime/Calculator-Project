
#include<bits/stdc++.h>
using namespace std;

void matadd(long long mr1, long long mc1, long long mr2, long long mc2);
void matsub(long long mr1, long long mc1, long long mr2, long long mc2);
void matmulti(long long mr1, long long mc1, long long mr2, long long mc2);


int main() 
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