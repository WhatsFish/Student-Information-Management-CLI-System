#include <iostream>
#include <fstream>
#include <string>

#include "globalValue.h"

using namespace std;

void login(string, int);

int main(){
    
    while(true){
        cout << "\t\t" << "Welcome to lhy's stu score system" << "\t\t" << endl << endl;
        cout << "\t\t" << "1. student login" << endl;
        cout << "\t\t" << "2. teacher login" << endl;
        cout << "\t\t" << "3. admin login" << endl;
        cout << "\t\t" << "4. exit system" << endl;
        int choice;
        cin >> choice;
        if(choice == 1){
            login(STUDENTS_PATH, 1);
        }else if(choice == 2){
            login(TEACHERS_PATH, 2);
        }else if(choice == 3){
            login(ADMINS_PATH, 3);
        }else if(choice == 4){
            break;
        }else{
            cout << "wrong iunput, plz input again" << endl;
            system("pause");
        }
        system("cls");
    }
    system("pause");
    return 0;
}

void login(string fpath, int choice){
    string inputName, inputPwd;
    cout << "plz input user name" << endl;
    cin >> inputName;
    cout << "plz input user password" << endl;
    cin >> inputPwd;

    ifstream fin;
    fin.open(fpath);
    string userName, userPwd;
    while(fin >> userName >> userPwd){
        if(userName == inputName && userPwd == inputPwd){
            cout << "login successfully !!!" << endl;
            // 登陆成功

            // 创建对应的对象

            //进入子界面
        } 
    }
    cout << "login ERROR !!!" << endl;
    system("pause");
}