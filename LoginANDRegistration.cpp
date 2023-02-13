#include<bits/stdc++.h>
using namespace std;

bool Logged_In(){
	string username, password, Uname, Pword;
	cout<<"Enter Username: ";
	cin>>username;
	cout<<"Enter Password: ";
	cin>>password;

	ifstream read;
	read.open("C:\\Users\\Shubham\\Desktop\\c++\\" + username + ".txt");
	getline(read,Uname);
	getline(read,Pword);

	if(Uname == username && Pword == password){
		return true;
	}else{
		return false;
	}
}
int main(){
	int options;
    cout << "Select your choice by pressing 1 OR 2 : \n";
	cout<<"1: Register"<<endl<<"2:Login"<<endl<<"Your Choice: ";
	cin>>options;
	if(options == 1){
		string username, password;

		cout<<"Enter  Username: ";
		cin>>username;
		cout<<"Enter  Password: ";
		cin>>password;

		ofstream MyFile;
		MyFile.open("C:\\Users\\Shubham\\Desktop\\c++\\" + username + ".txt");
		MyFile<<username<<endl<<password;
		MyFile.close();

		main();
	}else if(options == 2){
		bool status = Logged_In();

		if(!status){
			cout<<"Incorrect Username Or Password!"<<endl;
			system("PAUSE");
			return 0;
		}else{
			cout<<" Logged In Succesfully!!"<<endl;
			system("PAUSE");
			return 1;
		}
	}
}
