#include <iostream>	
#include <conio.h>	
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include <fstream>
#include <time.h>
using namespace std;
int main()
{
setlocale(LC_ALL,"Rus");
int  i1,i,timeint, clickint; 
string inputname,timestr, clickstr, s1; 
fstream file;
cout<<"������ ���������. �������� �������� �� ���������� ���-�� �������� � ����� ����������"<<endl;


system("reg query \"HKCU\\Software\\Tolstova\" /v \"time\" > time.txt"); //���������� ������� � �������
file.open("time.txt");
file>>timestr; file>>timestr; file>>timestr; file>>timestr; file>>timestr; file>>timestr;
file.close();
system("del time.txt");
timeint=atoi(timestr.c_str());
	
time_t result = time(NULL);//��������� �����
	
system("reg query \"HKCU\\Software\\Tolstova\" /v \"click\" > click.txt");//���������� ���-�� �������� � �������
file.open("click.txt");
file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr; file>>clickstr;
file.close();
system("del click.txt");
clickint=atoi(clickstr.c_str());
	
	if ((clickint<=0) or (result > (timeint+120)))
	{
		cout<<"����� ���� ����-������. ������� ��������� ��� ����������� ������ ������";//�������� ������� ������� � ��������
		goto del;
		getch();
	}
    file.open("List.txt", ios_base::in); //���� ������� ������������
    cout<<"������� �������: "; //�������� ������� ������� � ��
    cin>>inputname;
    while ((s1!=inputname) && (getline(file, s1)))
    {
	if (s1==inputname)
	{
	  cout<<"�������:"<<endl; i1=1; 
    }
    }
    file.close(); 
    if (i1!=1)
	{   
    cout<<"������� ������� � ��:"<<endl; //������ ����� �������
    file.open("List.txt", ios_base::app);
    file<<inputname<<endl;
    file.close();
    }
   
    cout<<"�������� �������: "<<timeint+120-result<<"c����� " << endl;//���������� �� ���������� �������� � �������
    cout<<"O������� �������: "<<clickint<<endl;
    clickint--;

    char str[100]; 
    sprintf(str, "%d", clickint);
    system("reg delete \"HKCU\\Software\\Tolstova\" /v \"click\" /f");
    system(("reg add \"HKCU\\Software\\Tolstova\" /t REG_SZ /v \"click\" /d "+string(str)).c_str());//���������� ���������� � ������� 

    

del:
	getch(); //����� �� ���������
}



