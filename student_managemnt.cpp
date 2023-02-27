#include<iostream>
#include<string>
#include<fstream>
#include<string>
using namespace std;
string array1[30],array2[30],array3[30],array4[30],array5[30];
int total=0;
void enter(){
	int choice;
	cout<<"HOW MANY STUDENTS DO YOU WANT TO ENTER: "<<endl;
	cin>>choice;
	total=total+choice;
	for(int i=0;i<choice;i++){
		cout<<"\nENTER DATA OF STUDENT: "<<i+1<<endl;
		cout<<"ENTER YOUR NAME: "<<endl;
		cin>>array1[i];
		cout<<"ENTER REGISTRATION NO: "<<endl;
		cin>>array2[i];
		cout<<"ENTER YOUR COURSE: "<<endl;
        cin>>array3[i];		
		cout<<"ENTER SEMESTER: "<<endl;
		cin>>array4[i];
		cout<<"ENTER YOUR CONTACT: "<<endl;
		cin>>array5[i];
		
	}
	
}
void show(){
	for(int i=0;i<total;i++){
		cout<<"DATA OF STUDENT "<<i+1<<" " <<"IS: "<<endl<<endl;
		cout<<"NAME: "<<array1[i]<<endl;
		cout<<"REGISTRATION NO: "<<array2[i]<<endl;
		cout<<"COURSE: "<<array3[i]<<endl;
		cout<<"SEMESTER: "<<array4[i]<<endl;
		cout<<"CONTACT: "<<array5[i]<<endl;
	}
	 
	
	
}
void search(){
	
}
void update(){
	
}
void delet(){
	
}
void exit(){
	
}

int main(){
	
	int value;
	while(true){
	cout<<"Press 1 to enter data: "<<endl;
	cout<<"Press 2 to show data: "<<endl;
	cout<<"Press 3 to search data: "<<endl;
	cout<<"Press 4 to update data: "<<endl;
	cout<<"Press 5 to delete data: "<<endl;
	cout<<"Press 6 to exit: "<<endl;
	cin>>value;
	switch(value){
		case 1:
			enter();
			break;
		case 2:
			show();
			break;
		case 3:
			search();
			break;
		case 4:
			update();
			break;
		case 5:
			delet();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"INVALID INPUT"<<endl;
	}
}
	
	
	return 0;
}
