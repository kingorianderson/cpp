/* Write a program using C++ to enter marks .Calculate the mean score and display the grades as follows
80-100			A
70-80			B+
60-70			B
50-60			C+
40-49			C
30-39			D
0-29			E
*/

#include<iostream>
using namespace std;
int main()
{
        int marks[5], i;
        float sum=0,avg;

        cout<<"\n Enter Marks of Student \n";
        cout<<"------------------------------------";
        cout<<"\n Kiswahili : ";
        cin>>marks[0];
        cout<<"\n English : ";
        cin>>marks[1];
        cout<<"\n Maths : ";
        cin>>marks[2];
        cout<<"\n Science : ";
        cin>>marks[3];
        cout<<"\n Social Studies : ";
        cin>>marks[4];

        for(i=0;i<5;i++)
        {
                sum=sum+marks[i];
        }
        cout<<"------------------------------------";
        cout<<"\n Total Marks of Student = "<<sum;
        avg=sum/5;
        cout<<"\n Average = "<<avg;
        cout<<"\n Grade   = ";

        if(avg>80 && avg<=100)
        {
                cout<<"A";
        }
        else if(avg>70 && avg<=80)
        {
                cout<<"B+";
        }
        else if(avg>60 && avg<=70)
        {
                cout<<"B";
        }
        else if(avg>=50 && avg<=60)
        {
                cout<<"C+";
        }
        else if(avg>=40 && avg<=49)
        {
                cout<<"C";
        }
        else if(avg>=30 && avg<=39)
        {
                cout<<"D";
        }
        else
        {
                cout<<"E";
        }
        return 0;
}
