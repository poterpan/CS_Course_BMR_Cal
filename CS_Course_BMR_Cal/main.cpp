//
//  main.cpp
//  CS_Course_BMR_Cal
//
//  Created by Poter Pan on 2021/12/8.
//
#include <iostream>
#include <iomanip>

using namespace std;

int BMR_Cal(int Gender, float Height, float Weight, float Age, float &BMR){
    if(Gender==1){
        BMR = 66 + (13.7 * Weight + 5 * Height - 6.8 * Age);
    }
    
    else if(Gender==2){
        BMR = 655 + (9.6 * Weight + 1.8 * Height - 4.7 * Age);
    }
    
    cout << fixed << setprecision(1) << "您的BMR為：" << BMR << endl;
    return 0;
    
}


int TEDD_Cal(int Type, float BMR, float &T1, float &T2, float &T3, float &T4, float &T5){
    T1=BMR*1.2;
    T2=BMR*1.375;
    T3=BMR*1.55;
    T4=BMR*1.72;
    T5=BMR*1.9 ;
    if(Type==1)
        cout << T1<<endl;
    
    else if(Type==2)
        cout << T2<<endl;
    
    else if(Type==3)
        cout << T3<<endl;
    
    else if(Type==4)
        cout << T4<<endl;
    
    else if(Type==5)
        cout << T5<<endl;
    
    return 0;
}

int Show_Graph(float T1, float T2, float T3, float T4, float T5){
    float g1=T1/100, g2=T2/100, g3=T3/100, g4=T4/100, g5=T5/100;

    cout << "　　　　 1        1000      2000      3000      4000       5000"<< endl;
    cout << "　　　　 --------------------------------------------------"<< endl;
    cout << "坐著運動:";
    for (int i=1;i<g1;i++){
        cout << "*";
    }
    cout << endl;
    cout << "偶爾運動:";
    for (int i=1;i<g2;i++){
        cout << "*";
    }
    cout << endl;
    cout << "常常運動:";
    for (int i=1;i<g3;i++){
        cout << "*";
    }
    cout << endl;
    cout << "每天運動:";
    for (int i=1;i<g4;i++){
        cout << "*";
    }
    cout << endl;
    cout << "強度運動:";
    for (int i=1;i<g5;i++){
        cout << "*";
    }
    cout << endl;
    return 0;
}

int printTree() {
    int width=2, height=4, i, j, k, n = 1;

    int space = width * height;

    cout << "Printing Christmas Tree Pattern of Stars\n";

    for (int x = 1; x <= height; x++)
    {
        for (i = n; i <= width; i++)
        {
            for (j = space; j >= i; j--)
            {
                cout <<" ";
            }
            for (k = 1; k <= i; k++)
            {
                cout <<"* ";
            }
            cout <<"\n";
        }
        n = n + 2;
        width = width + 2;
    }
    for (i = 1; i <= height - 1; i++)
    {
        for (j = space - 3; j >= 0; j--)
        {
            cout << " ";
        }
        for (k = 1; k <= height - 1; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

int main() {
    
    do{
        
        cout << "=========================================="<<endl<<endl;
        cout << "=      Welcome to Use BMI Calculator     ="<<endl<<endl;
        cout << "=========================================="<<endl<<endl;
        
        printTree();
        
        float Height=0,Weight=0,Age=0,BMR=0;
        int Gender=0,Type=0;
        float T1=0,T2=0,T3=0,T4=0,T5=0;
        
        cout << "請輸入性別(男:1  女:2)"<< endl;
        cin >> Gender;
        
        cout << "請輸入年齡"<< endl;
        cin >> Age;
        
        cout << "請輸入身高"<< endl;
        cin >> Height;
        
        cout << "請輸入體重"<< endl;
        cin >> Weight;
        
        cout << "請輸入運動型態"<< endl;
        cin >> Type;
        
        cout << "以下為輸入數值整理"<< endl;
        cout << Gender << endl << Age << endl << Height << endl << Weight <<endl;
        
        BMR_Cal(Gender, Height, Weight, Age, BMR);
        TEDD_Cal(Type, BMR, T1, T2, T3, T4, T5);
        Show_Graph(T1, T2, T3, T4, T5);
        
        
        
        cout << "按任意鍵繼續，若結束請輸入stop" << endl;
        string continue_stat = " ";
        cin >> continue_stat;
        if (continue_stat == "stop") {
            break;
        }
        
        
    }while(1);
    return 0;
    
}

