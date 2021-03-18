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
    cout<<"Введите номер задачи(1-4)"<<endl;
    cin>>n;
    switch(n)
    {
    case 1: cout<<"\tЗадача 1.1"<<endl; f1(); break;
    case 2: cout<<"\tЗадача 2.1"<<endl; f2(); break;
    case 3: cout<<"\tЗадача 3"<<endl; f3(); break;
    case 4: cout<<"\tЗадача 4"<<endl; f4(); break;
    //case 5: cout<<"\tЗадача 5"<<endl; f5(); break;
    }

}

void f1(void){
    int A[10];
    int B[10];
    int C[10];
    
    cout<<" Введите элементы массива A:\n";
    for(int i=0;i<=9;i++)
    {
        cout<<"\nВведите элемент A["<<i<<"] =";
        cin>>A[i];
    }

    cout<<"\tЗадача 1.2"<<endl;
    int k = 0;
    for(int i=0;i<=9;i++)
        if(A[i]<0){
            k++;
        }
    cout<<"\nВсего отрицательных элементов = "<<k;

    cout<<"\nих индексы и значения :\n";
    for(int i=0;i<=9;i++)
        if(A[i]<0){
            cout<<"\t["<<i<<"] = "<<A[i]<<endl;
        }
    cout<<"\tЗадача 1.3"<<endl;
    cout<<"Новый массив В только из отрицательных элементов"<<endl;
    cout<<"их индексы и значения:"<<endl;
    for(int i=0;i<=9;i++)
        if(A[i]<0){
            B[i]=A[i];
            cout<<"\tB["<<i<<"] = "<<B[i]<<endl;
        }
    cout<<"\tЗадача 1.4"<<endl;
    cout<<"Новый массив С из отсортированных отрицательных элементов массива В:"<<endl;
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
            cout<<"Введите M["<<i<<"]["<<j<<"]=";
            cin>>M[i][j];
        }
    }

    cout<<"\t\nЗадача 2.2"<<endl;
    cout<<"Матрица M[3][3]"<<endl;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout.width(3);
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\t\nЗадача 2.3"<<endl;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (i==j) s+=M[i][j];
        }
    }
    cout<<"Сумма элементов главной диагонали = "<<s<<endl<<endl;

    cout<<"Задача 2.4"<<endl;
    cout<<"Новая матрица N[3][3]"<<endl;
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
    cout<<"Введите элементы массива A:\n"<<endl;
    for(int i=0;i<=9;i++)
    {
        cout<<"Введите элемент A["<<i<<"] = ";
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
    cout<<"\nКоличество отрицательных элементов = "<<ko<<endl;
    cout<<"Их сумма = "<<so<<endl;
    cout<<"Их среднее арифмитическое = "<<(float)so/ko<<endl;

    cout<<"\nКоличество положительных элементов = "<<kp<<endl;
    cout<<"Их сумма = "<<sp<<endl;
    cout<<"Их среднее арифмитическое = "<<(float)sp/kp<<endl;

}

void f4(void){
    float A[5][5], B[5], C[5];

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<"Введите A["<<i<<"]["<<j<<"]=";
            cin>>A[i][j];
        }
    }
    cout<<"\nМатрица A"<<endl;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout.width(4);
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"\nВектор-строка №3 B:"<<endl;
    cout<<"B = [  ";
    for (int i=2; i!=3; i++){
        for (int j=0; j<5; j++){
            B[j] = A[i][j];
            cout<<B[j]<<"  ";
        }
        
    }
    cout<<"]"<<endl;
    cout<<"\nВектор-столбеец №4 С:"<<endl;
    for (int i = 0; i<5;i++){
        for (int j = 3; j!=4; j++){
            C[i] = A[i][j];
            cout<<"C["<<i<<"] = "<<C[i]<<endl;
        }
    }
}
