#include <iostream>
#include <string>
#include <fstream>

using namespace std;
void Stafflogin();
void AboutUs();
void Adminlogin();
void main_2();
void Adminmenu();
void staffmenu();
void ViewCources();
void Managecources();
void staffreg();
void studentreg();
void viewstaff();
void viewstudent();

struct staff {
	string employee_name;
	string employee_id;
	string job_role;
	float sallary{ };
};
struct student {
	string student_id;
	string student_name;
	string course_type;
	float payment{ };


};

string description_1 = "Red Hat Certified System Administrator (RHCSA) is one of the most sought-after and highly valued technology credentials in the world today. A Red Hat Certified System Administrator (RHCSA) is capable of performing the core system administration skills required in Red Hat Enterprise Linux environments. The faculty for this course is Information Technology, and it is available in Colombo, Galle, and Kandy. The course is available both online and in-person, with a duration of 3 months. The course fee is 15000/=";
string description_2 = "Java is a concurrent, class-based, object-oriented programming language that was specifically designed to have as few implementation dependencies as possible. With over 9 million developers, Java is one of the most popular programming languages in use today, particularly for client-server web applications. The course is available in Colombo, Galle, and Kandy, with both full-time and weekend options available. The course duration is 3 months, and the course fee is Rs. 30,000/-, payable in 2 installments of Rs. 15,500/- each.";
string description_3 = "This course provides a comprehensive web development curriculum from beginner to advanced, covering front-end and back-end development, database fundamentals, SQL and NoSQL databases, and version control tools. The course is available on campus in Colombo on weekends, with a duration of 6 months. The course fee is Rs. 45,000/-.";
string description_4 = "One of the most significant needs in today's industry is for dynamic, innovative, and enthusiastic team members who can contribute the most to the organization and achieve business goals. To achieve this, employees must develop applicable skills such as critical thinking, perception, team building, and leadership attributes. This program aims to motivate participants to learn and use these skills effectively in order to execute their jobs. The course is available on campus in Colombo on weekends, with a duration of 1 year. The course fee is Rs. 50,000/-.";

void Stafflogin() {
	string choice;
	string enteredUsername, enteredpassword;
	string staff_username = "maduranga", staff_password = "2222";
	system("cls");
	cout << "--------------------------------------------------------------------" << endl;
	cout << "----------------       Staff Login       -----------------" << endl;
	cout << "Enter Username: ";
	cin >> enteredUsername;
	cout << "Enter Password: ";
	cin >> enteredpassword;
	if (enteredUsername == staff_username && enteredpassword == staff_password) {
		system("cls");
		cout << "SUCCESSFULL LOGIN WELCOME TO STAFF MENU." << endl << "press any key to continue" << endl;
		cin >> choice;
		staffmenu();
	}
	else {
		system("cls");
		cout << "login failed please try again.press any ke to continue" << endl;
		cin >> choice;
		Stafflogin();
	}
}
void staffmenu() {
	string staffchoice;
	string choice;
	string choice2;
	system("cls");
	cout << "--------------------------------------------------------------------" << endl;
	cout << "-----------------       staff Menu       -------------------" << endl;
	cout << "Press 1 : view available training programs" << endl;
	cout << "Press 2 :student rejistration" << endl;
	cout << "Press 3 :view student list " << endl;
	cout << "Press 4 : Logout " << endl;
	cout << "Please Enter your choice: ";
	cin >> staffchoice;
	if (staffchoice == "1") {
		system("cls");
		ViewCources();
		cout << "PRESS 1: go to staff menu" << endl;
		cin >> choice2;
		if (choice2 == "1") {
			staffmenu();
		}
		else {
			cout << "sorry.your input value is incorrect" << endl;
			ViewCources();
		}
	}
	else if (staffchoice == "2") {
		system("cls");
		studentreg();
	}
	else if (staffchoice == "3") {
		system("cls");
		viewstudent();
	}
	else if (staffchoice == "4") {
		system("cls");
		cout << "LOGOUT SUCCESSFULL.press any key to continue" << endl;
		cin >> choice;
		main_2();
	}
	else {
		system("cls");
		cout << "You Entered a Wrong Value!.press any key to continue" << endl;
		cin >> choice;
		staffmenu();
	}
}
void AboutUs() {
	string choice;
	string choice1;
	system("cls");
	cout << "--------------------------------------------------------------------" << endl;
	cout << "----------------------       About us       ------------------------" << endl;
	cout << "Company Name: Master Mind institute " << endl;
	cout << "Branches: Colombo 4, Kandy" << endl;
	cout << "Software version: v1.0.1\n" << endl;
	cout << "Press 1 : Go To Main Menu" << endl;
	cout << "Please Enter your choice: ";
	cin >> choice;

	if (choice == "1")
	{

		main_2();
	}
	else
	{
		system("cls");
		cout << "NOTIFICATION : You Enterd a Wrong Value!.press any key to continue" << endl;
		cin >> choice1;
		AboutUs();
	}
}
void Adminlogin() {
	string choice;
	string enteredUsername, enteredPassword;
	string admin_username = "lakshan", admin_password = "1111";
	system("cls");
	cout << "--------------------------------------------------------------------" << endl;
	cout << "----------------       Administrator Login       -----------------" << endl;
	cout << "Enter Username: ";
	cin >> enteredUsername;
	cout << "Enter Password: ";
	cin >> enteredPassword;
	if (enteredUsername == admin_username && enteredPassword == admin_password) {
		system("cls");
		cout << "SUCCESSFULL LOGIN WELCOME TO ADMIN MENU." << endl << "press any key to continue" << endl;
		cin >> choice;
		Adminmenu();

	}
	else {
		system("cls");
		cout << "login failed.press any key to continue" << endl;
		cin >> choice;
		Adminlogin();
	}
}
void Adminmenu() {
	string adminchoice;
	string choice;
	string choice2;
	system("cls");
	cout << "--------------------------------------------------------------------" << endl;
	cout << "-----------------       Administrator Menu       -------------------" << endl;
	cout << "Press 1 : view available training programs" << endl;
	cout << "Press 2 :manage course details " << endl;
	cout << "Press 3 :staff rejistration " << endl;
	cout << "Press 4 :view staff details " << endl;
	cout << "Press 5 : Logout " << endl;
	cout << "Please Enter your choice: ";
	cin >> adminchoice;
	if (adminchoice == "1") {
		system("cls");
		ViewCources();
		cout << "PRESS 1: go to admin menu" << endl;
		cin >> choice2;
		if (choice2 == "1") {
			Adminmenu();
		}
		else {
			cout << "sorry.your input value is incorrect" << endl;
			ViewCources();
		}
	}
	else if (adminchoice == "2") {
		system("cls");
		Managecources();
	}
	else if (adminchoice == "3") {
		system("cls");
		staffreg();
	}
	else if (adminchoice == "4") {
		system("cls");

	}
	else if (adminchoice == "5") {

		system("cls");
		cout << "LOGOUT SUCCESSFULL.press any key to continue" << endl;
		cin >> choice;
		main_2();
	}
	else {
		system("cls");
		cout << "You Entered a Wrong Value!press any key to coontinue" << endl;
		cin >> choice;
		Adminmenu();
	}
}
void ViewCources() {
	string choice;
	string choice2;
	system("cls");
	cout << "WHAT TYPE OF COURSE WOULD YOU LIKE TO SEE?" << endl;
	cout << "1.Red Hat certifications" << endl;
	cout << "2.Java Programming" << endl;
	cout << "3.Web Development" << endl;
	cout << "4.soft skills development" << endl;
	cin >> choice;
	if (choice == "1") {
		system("cls");
		cout << "------------------ RED HAT CERTIFICATION COURSE DESCRIPTION ------------------" << endl;
		cout << description_1 << endl;

	}
	else if (choice == "2") {
		system("cls");
		cout << "------------------ JAVA PROGRAMMING COURSE DESCRIPTION ------------------" << endl;
		cout << description_2 << endl;

	}
	else if (choice == "3") {
		system("cls");
		cout << "------------------ WEB DEVELOPMENT COURSE DESCRIPTION ------------------" << endl;
		cout << description_3 << endl;

	}
	else if (choice == "4") {
		system("cls");
		cout << "------------------ SOFT SKILL DEVELOPMENT COURSE DESCRIPTION ------------------" << endl;
		cout << description_4 << endl;

	}
	else {
		cout << "sorry.your input value is incorrect.press any key to continue" << endl;
		cin >> choice2;
		ViewCources();
	}
}
void Redhat(string NewDescription) {
	description_1 = NewDescription;
}
void Java(string NewDescription) {
	description_2 = NewDescription;
}

void Web(string NewDescription) {
	description_3 = NewDescription;
}

void Softskill(string NewDescription) {
	description_4 = NewDescription;
}
void Managecources() {
	string choice;
	string choice1;
	system("cls");
	cout << "WHAT TYPE OF COURSE WOULD YOU LIKE TO EDIT" << endl;
	cout << "1.Red Hat certifications" << endl;
	cout << "2.Java Programming" << endl;
	cout << "3.Web Development" << endl;
	cout << "4.soft skills development" << endl;
	cin >> choice;
	if (choice == "1") {
		string NewDescription;
		string num;
		string choice1;
		cout << "please enter new description(After add new description press  enter to save):-";
		cin >> NewDescription;
		Redhat(NewDescription);
		cout << "NEW DESCRIPTION UPDATED..!" << endl;
		cout << "please press 1 go to Admin Menu" << endl;
		cin >> num;
		if (num == "1") {
			Adminmenu();
		}
		else {
			cout << "sorry.your input value is incorrect.press any key to continue" << endl;
			cin >> choice1;
			Managecources();
		}
	}
	else if (choice == "2") {
		string NewDescription;
		string num;
		string choice1;
		cout << "please enter new description(After add new description press  enter to save):-";
		cin >> NewDescription;

		cout << "NEW DESCRIPTION UPDATED..!" << endl;
		cout << "please press 1 go to Admin Menu" << endl;
		cin >> num;
		if (num == "1") {
			Adminmenu();
		}
		else {
			cout << "sorry.your input value is incorrect.press any key to continue" << endl;
			cin >> choice1;
			Managecources();
		}

	}
	else if (choice == "3") {
		string NewDescription;
		string num;
		string choice1;
		cout << "please enter new description(After add new description press  enter to save):-";
		cin >> NewDescription;

		cout << "NEW DESCRIPTION UPDATED..!" << endl;
		cout << "please press 1 go to Admin Menu" << endl;
		cin >> num;
		if (num == "1") {
			Adminmenu();
		}
		else {
			cout << "sorry.your input value is incorrect.press any key to continue" << endl;
			cin >> choice1;
			Managecources();
		}
	}
	else if (choice == "4") {
		string NewDescription;
		string num;
		string choice;
		cout << "please enter new description(After add new description press  enter to save):-";
		cin >> NewDescription;

		cout << "NEW DESCRIPTION UPDATED..!" << endl;
		cout << "please press 1 go to Admin Menu" << endl;
		cin >> num;
		if (num == "1") {
			Adminmenu();
		}
		else {
			cout << "your input value is invalide.please try again..press any key to continue" << endl;
			cin >> choice;
			Managecources();
		}
	}
	else {
		cout << "your input value is invalide.please try again..press any key to continue" << endl;
		cin >> choice1;
		Managecources();
	}

}
void staffreg() {
	staff items;
	cout << "--------------------------------------------------------------------" << endl << "-------------------       staff Registration       ------------------" << endl;
	cout << "enter employee id:-" << endl;
	cin >> items.employee_id;
	cout << "enter employee name:-" << endl;
	cin >> items.employee_name;
	cout << "enter employee job role(part time?fulltime):-" << endl;
	cin >> items.job_role;
	cout << "enter employee sallary amount:-" << endl;
	cin >> items.sallary;


	fstream staff;
	string choice;
	staff.open("staff.txt", ios::out);
	if (!staff) {
		system("cls");
		cout << "Error while creating the file";
	}
	else {
		system("cls");
		cout << "A new staff member joined your company. best wishes...!" << endl;
		staff << items.employee_id << ' ' << items.employee_name << ' ' << items.job_role << ' ' << items.sallary;
		staff.close();
		cout << "NOTIFICATION: data successfuly added.press any key to continue" << endl;
		cin >> choice;
	}

	Adminmenu();
}
void studentreg() {
	student items;
	cout << "--------------------------------------------------------------------" << endl << "-------------------       student Registration       ------------------" << endl;
	cout << "enter student id:-" << endl;
	cin >> items.student_id;
	cout << "enter student name:-" << endl;
	cin >> items.student_name;
	cout << "enter student course type:-" << endl;
	cin >> items.course_type;

	cout << "enter student payment:-" << endl;
	cin >> items.payment;


	fstream student;
	string choice;
	student.open("student.txt", ios::out);
	if (!student) {
		system("cls");
		cout << "Error while creating the file";
	}
	else {
		system("cls");
		cout << "A new student joined your company. best wishes...!" << endl;
		student << items.student_id << ' ' << items.student_name << ' ' << items.course_type << ' ' << items.payment;
		student.close();
		cout << "NOTIFICATION: data successfuly added.press any key to continue" << endl;
		cin >> choice;
	}
	staffmenu();
}


void viewstaff() {
	cout << "-------------------staff detail list-------------------" << endl;
	ifstream staff("staff.txt");
	if (!staff) {
		cout << "Error while opening the file" << endl;
	}
	else {
		cout << "File opened successfully" << endl;
		system("cls");
		string line;
		while (getline(staff, line)) {
			cout << line << endl;
		}
		staff.close();
	}
}
void viewstudent() {
	cout << "-------------------student detail list-------------------" << endl;
	ifstream student("student.txt");
	if (!student) {
		cout << "Error while opening the file" << endl;
	}
	else {
		cout << "File opened successfully" << endl;
		system("cls");
		string line;
		while (getline(student, line)) {
			cout << line << endl;
		}
		student.close();
	}


}
void main_2() {
	system("cls");
	string mainChoice;
	string choice;
	cout << "--------------------------------------------------------------------" << endl;

	cout << "------------------------      WELCOME TO MASTER MIND INSTITUTE      ---------------------------" << endl;
	cout << "Press 1 : Admin Login" << endl;
	cout << "Press 2 : Staff Login " << endl;
	cout << "Press 3 : About Master Mind institute" << endl;
	cout << "Press 4 : Exit" << endl;
	cout << "Please Enter your choice: ";
	cin >> mainChoice;
	if (mainChoice == "1")
	{
		system("cls");
		Adminlogin();
	}
	else if (mainChoice == "2")
	{
		system("cls");
		Stafflogin();
	}
	else if (mainChoice == "3")

	{
		system("cls");
		AboutUs();
	}
	else if (mainChoice == "4")
	{
		system("cls");
		cout << "NOTIFICATION : Thank you Come again!." << endl;
		exit(0);
	}
	else
	{

		cout << "NOTIFICATION: You entered a wrong value!press any key to continue" << endl;
		cin >> choice;
		main_2();

	}
}


int  main() {
	main_2();

}