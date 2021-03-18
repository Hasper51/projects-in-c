#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
void f1(void);
void f2(void);
void f3(void);
void f4(void);
void f5(void);
int main(){

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout<<"������� ����� ������(1-4)"<<endl;
    cin>>n;
    switch(n)
    {
    case 1: cout<<"\t������ 1.1"<<endl; f1(); break;
    case 2: cout<<"\t������ 2.1"<<endl; f2(); break;
    case 3: cout<<"\t������ 3"<<endl; f3(); break;
    case 4: cout<<"\t������ 4"<<endl; f4(); break;
    //case 5: cout<<"\t������ 5"<<endl; f5(); break;
    }

}

void f1(void){
    int A[10];
    int B[10];
    int C[10];
    
    cout<<" ������� �������� ������� A:\n";
    for(int i=0;i<=9;i++)
    {
        cout<<"\n������� ������� A["<<i<<"] =";
        cin>>A[i];
    }

    cout<<"\t������ 1.2"<<endl;
    int k = 0;
    for(int i=0;i<=9;i++)
        if(A[i]<0){
            k++;
        }
    cout<<"\n����� ������������� ��������� = "<<k;

    cout<<"\n�� ������� � �������� :\n";
    for(int i=0;i<=9;i++)
        if(A[i]<0){
            cout<<"\t["<<i<<"] = "<<A[i]<<endl;
        }
    cout<<"\t������ 1.3"<<endl;
    cout<<"����� ������ � ������ �� ������������� ���������"<<endl;
    cout<<"�� ������� � ��������:"<<endl;
    for(int i=0;i<=9;i++)
        if(A[i]<0){
            B[i]=A[i];
            cout<<"\tB["<<i<<"] = "<<B[i]<<endl;
        }
    cout<<"\t������ 1.4"<<endl;
    cout<<"����� ������ � �� ��������������� ������������� ��������� ������� �:"<<endl;
    k = 0;
    for(int i=0;i<=9;i++){
        if(A[i]<0){
            C[i]=A[i];
            k++;
        }
    }
    int tmp, j,i;
    for(i=0;i<9;i++)
        for(j=i+1;j<10;j++)
            if (C[j]<C[i])
            {tmp=C[j];
             C[j]=C[i];
             C[i]=tmp;

            }
    for(i=0;i<k;i++)
    cout<<"\tC["<<i<<"] = "<<C[i]<<endl;
}

void f2(void){
    int M[3][3], s=0;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<"������� M["<<i<<"]["<<j<<"]=";
            cin>>M[i][j];
        }
    }

    cout<<"\t\n������ 2.2"<<endl;
    cout<<"������� M[3][3]"<<endl;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout.width(3);
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\t\n������ 2.3"<<endl;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (i==j) s+=M[i][j];
        }
    }
    cout<<"����� ��������� ������� ��������� = "<<s<<endl<<endl;

    cout<<"������ 2.4"<<endl;
    cout<<"����� ������� N[3][3]"<<endl;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (M[i][j] < 0){
                M[i][j] = 0;
            }
            cout.width(3);
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

void f3(void){
    float A[10];
    float so = 0, sp = 0;
    int ko = 0, kp = 0;
    cout<<"������� �������� ������� A:\n"<<endl;
    for(int i=0;i<=9;i++)
    {
        cout<<"������� ������� A["<<i<<"] = ";
        cin>>A[i];
    }

    for (int i=0; i<10; i++)
    {
        if (A[i] < 0) {
        ko++;
        so+=A[i];
        }
        if (A[i] >= 0) {
        kp++;
        sp+=A[i];
        }
    }
    cout<<"\n���������� ������������� ��������� = "<<ko<<endl;
    cout<<"�� ����� = "<<so<<endl;
    cout<<"�� ������� �������������� = "<<(float)so/ko<<endl;

    cout<<"\n���������� ������������� ��������� = "<<kp<<endl;
    cout<<"�� ����� = "<<sp<<endl;
    cout<<"�� ������� �������������� = "<<(float)sp/kp<<endl;

}

void f4(void){
    float A[5][5], B[5], C[5];

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<"������� A["<<i<<"]["<<j<<"]=";
            cin>>A[i][j];
        }
    }
    cout<<"\n������� A"<<endl;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout.width(4);
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"\n������-������ �3 B:"<<endl;
    cout<<"B = [  ";
    for (int i=2; i!=3; i++){
        for (int j=0; j<5; j++){
            B[j] = A[i][j];
            cout<<B[j]<<"  ";
        }
        
    }
    cout<<"]"<<endl;
    cout<<"\n������-�������� �4 �:"<<endl;
    for (int i = 0; i<5;i++){
        for (int j = 3; j!=4; j++){
            C[i] = A[i][j];
            cout<<"C["<<i<<"] = "<<C[i]<<endl;
        }
    }
}
