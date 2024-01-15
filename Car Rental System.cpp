#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct Car{
	string company[5] = { "Maruti" , "Hyundai" , "Toyota" , "Mahendra" , "Tata"};
	string Model[5] = { "Swift" , "Eon" , "Innova" , "Thar" , "Figo"};
	string Fuel_Type[5] = { "Petrol" , "Petrol" , "Petrol" , "Diesel" , "Diesel"};
	string Price[5] = { "500000" , "600000" "1500000" , "1000000" , "800000"};
	string Max_Speed[5] = { "180" , "180" , "210" , "200" , "190"};
};
int login(){
	string pass = " ";
	char ch;
	cout<<"Car Rental System login "<<endl;
	cout<<"Enter Password";
	ch = _getch();
	while(ch!= 13){
		pass.push_back(ch);
		cout<<"*";
		ch = _getch();
	}
	if(pass == "pass"){
		cout<<"password Matched"<<endl;
		cout<<"Loading....."<<endl;
		system("PAUSE");
		cout<<"Access Granted ! Welcome to Our System"<<endl;
		system("cls");
	}
	else{
		cout<<"Password Not Matched"<<endl;
		cout<<"Try Again"<<endl;
		system("PAUSE");
		system("cls");
	}
}
void Details(int choice){
	cout<<"Company : " <<car.company[choice - 1]<<endl;
			cout<<"Model : " <<car.Model[choice - 1]<<endl;
			cout<<"Fuel_Type : " <<car.Fuel_Type[choice - 1]<<endl;
			cout<<"Price : " <<car.Price[choice - 1]<<endl;
			cout<<"Max_Speed : " <<car.Max_Speed[choice - 1]<<endl;
}
void menu(){
	int num = 1;
	for(int i = 0; i<13; i++){
		cout<<"num"<<car.company[i]<<endl;
		num++;
	}
}
int main(){
	int login;
	login();
	string decide = "yes";
	cout<<"Welcome to Car Rental System "<<endl;	
	cout<<"Choose your Option "<<endl;	
	while(decide != "exit"){
		menu();
		cout<<"Your Choice "<<endl;
		int choice;
		cin>>choice;
		Details(choice);
		cout<<"Are you sure you want to rent this car(Yes/NO/exit)"<<endl;
		cin>>decide;
		if(decide == "yes" || decide == "Yes"){
			cout<<"Car Rented Successfully";
			cout<<"Company : " <<car.company[choice]<<endl;
			cout<<"Model : " <<car.Model[choice]<<endl;
			cout<<"Fuel_Type : " <<car.Fuel_Type[choice]<<endl;
			cout<<"Price : " <<car.Price[choice]<<endl;
			cout<<"Max_Speed : " <<car.Max_Speed[choice]<<endl;
		}
		else if(decide == "no" || decide == "No"){
			cout<<"Choose Your Option "<<endl;
			
		}
		else if(decide == "exit"){
			cout<<"Thank you for using our system"<<endl;
			system("PAUSE");
			system("cls");
		}
		else{
			cout<<"Invalid Input"<<endl;
			system("PAUSE");
			system("cls");
		}
	}
	
  return 0;
}

