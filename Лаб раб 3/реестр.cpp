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

cout<<"Удаление записей в реестре"<<endl;
system("reg delete \"HKCU\\Software\\Tolstova\" /v \"click\" /f");
system("reg delete \"HKCU\\Software\\Tolstova\" /v \"time\" /f");

system("reg add \"HKCU\\Software\\Tolstova\" /t REG_SZ /v \"click\" /d \" 100\"");
system("reg add \"HKCU\\Software\\Tolstova\" /t REG_SZ /v \"time\" /d \" 100\"");


}


