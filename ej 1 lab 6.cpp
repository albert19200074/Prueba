#include<iostream>
#include<conio.h>
using namespace std;
float ingreso(float deposito){
	do{
	cout<<"ingrese el deposito mayor a 500"<<endl;
	cin>>deposito;
	if(deposito<500){
	cout<<"error,escoja deposito mayor a 500"<<endl;	
	}
	}while(deposito<500);
	return deposito;
}

int main()
{
	float monto,interes,depo,d;
	int op;
	
	do{system("cls");
	depo=ingreso(d);	
	cout<<endl;
	cout<<endl;
	cout<<"Menu de opciones"<<endl;
	cout<<"================"<<endl;
	cout<<"[1]:deposito entre S/500 y menor a S/2500 "<<endl;
	cout<<"[2]:ingreso familiar entre S/2500 y S/5000"<<endl;
	cout<<"[3]:ingreso familiar mayor a S/5000"<<endl;
	cout<<"[4]:salir"<<endl;
	do{
	cout<<"ingrese la opcion de su deposito: ";
	cin>>op;	
	}while(op<1 || op>4);
	
	switch(op){
	case 1:	
	if(depo>=500 && depo<2500){
	cout<<"tasa de interes:1.5%"<<endl;	
	interes=0.015*depo*12;
	monto=depo+depo*0.015*12;
	cout<<"interes por mes : S/"<<0.015*depo<<endl;
	cout<<"interes total: S/"<<interes<<endl;
	cout<<"monto total: S/"<<monto<<endl;
	op=4;
	}
	else{
	cout<<"opcion equivocada,vuelva a escoger opcion presionando enter"<<endl;	
	}
	getch();break;
	case 2:
	if(depo>=2500 && depo<=5000){
	cout<<"tasa de interes:2.5%"<<endl;	
	interes=0.025*depo*12;
	monto=depo+depo*0.025*12;
	cout<<"interes por mes : S/"<<0.025*depo<<endl;
	cout<<"interes total: S/"<<interes<<endl;
	cout<<"monto total: S/"<<monto<<endl;
	op=4;
	}
	else{
	cout<<"opcion equivocada,vuelva a escoger opcion presionando enter"<<endl;	
	}
	getch();break;
	case 3:
	if(depo>5000){
	cout<<"tasa de interes:3.5%"<<endl;	
	interes=0.035*depo*12;
	monto=depo+depo*0.035*12;
	cout<<"interes por mes : S/"<<0.035*depo<<endl;
	cout<<"interes total: S/"<<interes<<endl;
	cout<<"monto total: S/"<<monto<<endl;
	op=4;	
	}
	else{
	cout<<"opcion equivocada,vuelva a escoger opcion presionando enter"<<endl;
	}
	getch();break;
	
	}
	
	}while(op!=4);
	system("cls");
	cout<<"**saliste del programa**"<<endl;
	getch();
	return 0;
}
