#include <iostream.h>
#include <conio.h>
main () {
char nama [30],nim[10],nilaihuruf;
int a,b,c,d,e,totalnt,totalt,nilaim,nilaif,na;
cout<<"nama mahasiswa =";cin>>nama;
cout<<"nim mahasiwa = ";cin>>nim;
cout<<"nilai tugas 1 =";cin>>a;
cout<<"nilai tugas 2 =";cin>>b;
cout<<"nilai tugas 3 =";cin>>c;
cout<<"nilai mid     =";cin>>d;
cout<<"nilai final   =";cin>>e;
totalnt = (a+b+c)/3;
totalt = totalnt * 20/100;
nilaim =d*40/100;
nilaif= e*40/100;
na = totalt+nilaim+nilaif;
if ((na>=80) &&(na<=100))
nilaihuruf ='A';

else if ((na>=70) && ( na<=79))
nilaihuruf ='B';

else if ((na>=60) && ( na<=69))
nilaihuruf = 'C';

else if ((na>=50) && (na<=59))
nilaihuruf = 'D';

else if (na<50)
nilaihuruf = 'E';

cout<<"nNama mahasiswa = "<<nama;
cout<<"\nNim mahasiswa = "<<nim;
cout<<"\nNilai akhir = "<<na;
cout<<"\nNilai huruf ="<<nilaihuruf;
getch(); }


