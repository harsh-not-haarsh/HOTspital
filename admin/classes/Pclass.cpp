#include <bits/stdc++.h>
#include "../../receptionist.cpp"
//#include "../../doctor.cpp"
//#include "updateQueue.cpp"
using namespace std;

// DO NOT TAMPER WITH

class patient{
protected:
	long ph;
	long emergency;
	char record[100];
	int temp;
	int weight;
	char rRemarks[20];
	char dRemarks[50];
	int medicine[20][2];
public:
	int LDAP;
	char fname[10];
	char lname[10];
	patient(){};
	patient(int x){
		LDAP=x;
	}
	patient(string fx,string lx,int x){
		LDAP=x; strcpy(fname,fx.c_str()); strcpy(lname,lx.c_str());
	}


	virtual int chooseDoctor(){};

	void takeAppointment(int num){
		cout<<endl<<"Doctors Available"<<endl;
		chooseDoctor();
		int ind;
		cout<<endl;
		cout<<"Enter Id to choose doctor"<<endl;
		cin>>ind;
		//doctor d;
		addToQueue(num,ind);
		//d.patientQ.back();
		return;
	}
	void onlineDiscussion(int p){
		cout<<"OnlineDiscussion"<<endl;
		return;
	}
	void setPh(long x){
		ph=x;
	}
	void setEm(long x){
		emergency=x;
	}
	//~patient();
	
};