#include<bits/stdc++.h>
using namespace std;

void exitfun(){
	system("cls");
	system("color F");
	cout<<"\n\n\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb  Thanks for Using SRM GYM MANAGEMENT SYSTEM  \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb"<<endl
        <<"\n\n\n\n\t\t    \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Team Members \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 "
        <<"\n\n\n\t\t\t\x4  Sai Kartheek"
        <<"\n\n\t\t\t\x4  Sai Sravani"
        <<"\n\n\t\t\t\x4  Manoj Kumar"
        <<"\n\n\t\t\t\x4  PGVL kundanaa\n\n\n\n\n\n\n\n\n\n";
}
class alogin
{
	string admin;
public:
	int adlogin()
	{
		cout << "Enter Admin Code:" << endl;
		cin >> admin;
		if (admin == "admin")
		{
			int p = getadpassword();
			if (p == 1)
			{
				cout << "Welcome !!!" << endl;
				return 1;
			}
		}
		else
		{
			cout << "Incorrect Admin Code !!! " << endl;
			cout << "Login Failed" << endl;
			return 0;
		}
		return 0;
	}
	int getadpassword();
};
int alogin::getadpassword()
{
	string pw;
	cout << "\nEnter Password:" << endl;
	cin >> pw;
	if (pw == "SSMK")
	{
		cout << "Login Successful" << endl;
		return 1;
	}
	else
	{
		cout << "Entered Password is Incorrect" << endl;
		return 0;
	}
}
/*void allotment_gold(int gc, int sc)
{
	if (gc != 0)
	{
		cout << "Trainer" << gc << " Alloted\n";
	}
	else
	{
		cout << "\nNo Trainer Available\n";
	}
}
void allotment_silver(int gc, int sc)
{
	if (sc != 0)
	{
		cout << "Trainer" << sc << " Alloted\n";
	}
	else
	{
		cout << "\nNo Trainer Available\n";
		if (gc != 0)
		{
			cout << "Enter  Another Class\n";
			allotment_gold(gc, sc);
		}
	}
}
int trainee_allotment(char *c)
{
	char class_type[10];
	int i, gold_class = 2, silver_class = 3;
	strcpy(class_type, c);
	if ((gold_class != 0) || (silver_class) != 0)
	{

		if (strcmp(class_type, "gold") == 0)
		{
			gold_class--;
			allotment_gold(gold_class, silver_class);
		}
		else if (strcmp(class_type, "silver") == 0)
		{
			silver_class--;
			allotment_silver(gold_class, silver_class);
		}
	}
	else
	{
		cout << "No Trainer Availbale\n";
		return 1;
	}
	return 0;
}*/
class member
{
	int member_number, j;
	char mem_name[50], classs[50], timings[50], mem_phonenum[11];
	float fee;
	long long int contact;
public:
	int time_slots()
	{
		int k;
		cout << "\nplease select your preferred timings\npress 1 for: morining 6-7\npress 2 for: morning 7-8\npress 3 for:morning 8-9\npress 4 for: evening 4-5\npress 5 for:evening 5-6\npress 6 for:evening 6-7\n";
		cin >> k;
		switch (k)
		{
		case 1:
			strcpy(timings, "6AM-7AM");
			break;
		case 2:
			strcpy(timings, "7AM-8AM");
			break;
		case 3:
			strcpy(timings, "8AM-9AM");
			break;
		case 4:
			strcpy(timings, "4PM-5PM");
			break;
		case 5:
			strcpy(timings, "5PM-6PM");
			break;
		case 6:
			strcpy(timings, "6PM-7PM");
			break;
        default:
            cout<<"\n\x4 Wrong Choice !!!\n\n";
            cout << "\nplease select your preferred timings\npress 1 for: morining 6-7\npress 2 for: morning 7-8\npress 3 for:morning 8-9\npress 4 for: evening 4-5\npress 5 for:evening 5-6\npress 6 for:evening 6-7\n";
            cin>>k;
		}
		return 0;
	}
	void create_mem()
	{
		int k, l, j;
		cout << endl
			 << "Please Enter The member Number: ";
		cin >> member_number;
		cout << endl
			 << "Please Enter The Name of The member: ";
		getchar();
		cin.getline(mem_name, 50);
		cout << endl
			 << "Please Enter The contact number: ";
		cin >> contact;
		cout << "\n 1.Gold class\n\tGold Class Benefits\n\t1.Access to all equiments\n\t2.Personal Training\n\n 2.Silver class\n\tSilver Class Benefits\n\t1.Access to limited equiments\n\t2.No Personal Training\n\n";
		cout << "Enter your Choice:";
		cin >> k;
		if(k==1)
		{
			printf("Trainer 1 alloted\n");
		}
		if(k==2)
		{
			printf("Trainer 2 alloted\n");
		}
		ofstream t1;
		if(k==1)
		{
		t1.open("d://trainer1.txt",ios::app);
		t1<<mem_name<<endl;
		}
		ofstream t2;
		if (k==2){
			t2.open("d://trainer2.txt",ios::app);
			t2<<mem_name<<endl;
		}
		switch (k)
		{
		case 1:
		{
			strcpy(classs, "gold");
			fee = 3000;
			cout << "\nyour monthly fee would be: " << fee << endl;
			l = trainee_allotment(classs);
		}
		break;
		case 2:
		{
			strcpy(classs, "silver");
			fee = 2000;
			cout << "\nyour monthly fee would be: " << fee << endl;
			l = trainee_allotment(classs);
		}
		break;
		default:
		    cout<<"\n\x4 Wrong Choice !!!\n";
		    cout << "\n 1.Gold class\n\tGold Class Benefits\n\t1.Access to all equiments\n\t2.Personal Training\n\n 2.Silver class\n\tSilver Class Benefits\n\t1.Access to limited equiments\n\t2.No Personal Training\n\n";
            cout << "Enter your Choice:";
            cin >> k;

		}
		time_slots();
	}
	void show_mem()
	{
		cout << endl
			 << "member code: " << member_number;
		cout << endl
			 << "Name: " << mem_name;
		cout << endl
			 << "category: " << classs;
		cout << endl
			 << "fee: " << fee;
		cout << endl
			 << "contact: " << contact;
		cout << endl
			 << "timings: " << timings << endl;
	}
	int getmem()
	{
		return member_number;
	}
	float getfee()
	{
		return fee;
	}
	char *getName()
	{
		return mem_name;
	}
	long long int getcontact()
	{
		return contact;
	}
};
fstream fp;
member m1;
void save_member()
{
	fp.open("d://list_of_members.txt", ios::app);
	m1.create_mem();
	fp.write((char *)&m1, sizeof(m1));
	fp.close();
	cout << endl
		 << endl
		 << "The member has been successfully added\n\n ";
	getchar();
}
void show_all()
{
	system("cls");
	cout << endl
		 << "\t\t...RECORDS...\n";
	fp.open("d://list_of_members.txt", ios::in);
	while (fp.read((char *)&m1, sizeof(m1)))
	{
		m1.show_mem();
		getchar();
	}
	fp.close();
}
void display_record(int num)
{
	bool found = false;
	fp.open("d://list_of_members.txt", ios::in);
	while (fp.read((char *)&m1, sizeof(m1)))
	{
		if (m1.getmem() == num)
		{
			system("cls");
			m1.show_mem();
			found = true;
		}
	}
	fp.close();
	if (found == false)
		cout << "\n\nNo record found\n\n";
	getchar();
}
void edit_member()
{
	int num;
	bool found = false;
	cout << endl
		 << endl
		 << "\tPlease Enter The member number: ";
	cin >> num;

	fp.open("d://list_of_members.txt", ios::in | ios::out);
	while (fp.read((char *)&m1, sizeof(m1)) && found == false)
	{
		if (m1.getmem() == num)
		{
			m1.show_mem();
			cout << "\nPlease Enter The New details of the member: " << endl;
			m1.create_mem();
			int pos = 0;
			fp.seekp(pos, ios::cur);
			fp.write((char *)&m1, sizeof(m1));
			cout << endl
				 << endl
				 << "\t Record Successfully Updated...\n\n";
			found = true;
		}
	}
	fp.close();
	if (found == false)
		cout << endl
			 << endl
			 << "Record Not Found...\n\n";
	getchar();
}
void delete_member()
{
	int num;
	system("cls");
	cout << endl
		 << endl
		 << "Please Enter The member number: ";
	cin >> num;
	fp.open("d://list_of_members.txt", ios::in | ios::out);
	fstream fp2;
	fp2.open("d://Temp.txt", ios::out);
	fp.seekg(0, ios::beg);
	while (fp.read((char *)&m1, sizeof(m1)))
	{
		if (m1.getmem() != num)
		{
			fp2.write((char *)&m1, sizeof(m1));
		}
	}
	fp2.close();
	fp.close();
	remove("d://list_of_members.txt");
	rename("d://Temp.txt", "d://list_of_members.txt");
	cout << endl
		 << endl
		 << "\tRecord Deleted...\n\n";
	getchar();
}
void fnmanage()
{
	for (;;)
	{
		int option;
		cout << "\t***********************************************";
		cout << "\n\tPress 1 to CREATE MEMBER";
		cout << "\n\tPress 2 to DISPLAY ALL RECORDS";
		cout << "\n\tPress 3 to SEARCH FOR A PARTICULAR RECORD ";
		cout << "\n\tPress 4 to EDIT MEMBER DETAILS";
		cout << "\n\tPress 5 to DELETE MEMBER";
		cout << "\n\tPress 6 to Exit";
		cout << "\n\t**********************************************";
		cout << "\n\n\tOption: ";
		cin >> option;
		switch (option)
		{
		case 1:
			system("cls");
			save_member();
			break;
		case 2:
		    system("cls");
			show_all();
			break;
		case 3:
			int num;
			system("cls");
			cout << "\n\n\tPlease Enter The member Number: ";
			cin >> num;
			display_record(num);
			break;
		case 4:
		    system("cls");
			edit_member();
			break;
		case 5:
		    system("cls");
			delete_member();
			break;
        case 6:
            system("cls");
            exitfun();
            exit(1);
		default:
		    cout<<"\n\x4 Wrong Choice !!!\n\n";
			fnmanage();
		}
	}
}
void fnuser()
{
	for (;;)
	{
		int m;
		cout << "\n1.join gym\n2.quit gym\n3.edit your profile\n4.Exit";
		cout << endl
			 << "enter your choice" << endl;
		cin >> m;
		switch (m)
		{
		case 1:
			system("cls");
			save_member();
			break;
		case 2:
			delete_member();
			break;

		case 3:
			edit_member();
			break;

        case 4:
            exitfun();
            exit(1);

        default:
            cout<<"\n\x4 Wrong Choice !!!\n\n";
            fnuser();
		}
	}
}
void fntrainer()
{
	ifstream t1;
	ifstream t2;
	for (;;)
	{
		int tom;

		cout << endl<<"1.trainer1\n2.trainer2\n3.Exit\n";
		cout << endl
			 << "enter your trainer number" << endl;
		cin >> tom;
		switch(tom)
		{
		case 1: cout<<"You are alloted to the ones who chosen gold membership"<<endl;
				   t1.open("d://trainer1.txt",ios::in);
				   if(t1.is_open()){
				string tr;
				while(getline(t1,tr)){
					cout<<tr<<"\n";
				}
			}
				   break;
		case 2: cout<<"You are alloted to the ones who chosen silver membership"<<endl;
			t2.open("d://trainer2.txt",ios::in);
			if(t2.is_open()){
				string tr2;
				while(getline(t2,tr2)){
					cout<<tr2<<"\n";
				}
			}
			break;
			t1.close();
			t2.close();
       case 3:
           exitfun();
           exit(1);
       default:
        cout<<"\n\x4 Wrong Choice !!!\n\n";
        fntrainer();
		}
	}
}

int main()
{
    system("color F");
	int i, k;
	string name, code;
	cout << "\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Welcome To SRM Gym Management System \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2" << endl;
	cout << endl
		 << "SELECT MODE\n" << endl
		 << "1.User" << endl
		 << "2.Admin" << endl
		 << "3.Trainer" << endl
		 << "4.Exit\n\n"<<endl
		 << "Enter Your Choice:\n";
	cin >> i;
	if (i == 1)
	{
	    system("cls");
	    system("color F");
		cout << endl
			 << "you're in user mode" << endl;
		fnuser();
	}
	else if (i == 2)
	{
	    system("cls");
	    system("color F");
		cout << endl
			 << "you're in admin mode" << endl;

		alogin ad;
		k = ad.adlogin();
		if (k == 1)
		{
			fnmanage();
		}
		else
		{
			exit(1);
		}
	}
	else if (i == 3)
	{
	    system("cls");
	    system("color F");
		cout << endl
			 << "you're in trainers mode" << endl;
		fntrainer();
	}
	else if (i == 4)
    {
        system("cls");
        system("color F");
        exitfun();
    }
    else
    {
        cout<<"\n\x4 Wrong Choice !!!\n\n";
    }

    return 0;

}
