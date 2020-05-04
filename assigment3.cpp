#include <iostream>

using namespace std;

int main()
{
    string title, surname, firstname, othername, sex, martialStatus, religion,
        state, localgoverment, hallOfCampusAdress, BloodGroup, genotype,
        email;
    string dateofbirth, mobilePhone;
    string matricNo, level, school, department, option;
    cout << "STUDENT PERSONAL INFORMATION " << endl;
    cout << "Enter Title(Mr, Miss)" << endl;
    cin >> title;
    cout << "Enter Sunname" << endl;
    cin >> surname;
    cout << "FirstName " << endl;
    cin >> firstname;
    cout << "Other Name" << endl;
    cin >> othername;
    cout << "Sex" << endl;
    cin >> sex;
    cout << "Martial Status " << endl;
    cin >> martialStatus;
    cout << "Date Of Birth" << endl;
    cin >> dateofbirth;
    cout << "Religion" << endl;
    cin >> religion;
    cout << "state" << endl;
    cin >> state;
    cout << "Local Goverment" << endl;
    cin >> localgoverment;
    cout << "Mobile Phone" << endl;
    cin >> mobilePhone;
    cout << "Email" << endl;
    cin >> email;
    cout << "hall/Of Campus Adress(hall/Off)" << endl;
    cin >> hallOfCampusAdress;
    cout << "Blood Group" << endl;
    cin >> BloodGroup;
    cout << "Genotype" << endl;
    cin >> genotype;
    cout << "=========================================================" << endl;
    cout << "Student Academic Details" << endl;
    cout << "=========================================================" << endl;
    cout << "Matric No" << endl;
    cin >> matricNo;
    cout << "level(HND/ND)" << endl;
    cin >> level;
    cout << "School" << endl;
    cin >> school;
    cout << "Department" << endl;
    cin >> department;
    cout << "Option" << endl;
    cin >> option;

    cout
        << "============================================================================================= " << endl
        << "STUDENT PERSONAL INFORMATION " << endl;
    cout << "============================================================================================ " << endl
         << "title : " << title << endl
         << "Sunname : " << surname << endl
         << "First Name : " << firstname << endl
         << "Other Name : " << othername << endl
         << "Sex: " << sex << endl
         << "marital Status : " << surname << endl
         << "Date Of Birth : " << dateofbirth << endl
         << "Religion : " << religion << endl
         << "State : " << state << endl
         << "Local Goverment : " << localgoverment << endl
         << "Mobil Phone : " << mobilePhone << endl
         << "Email : " << email << endl
         << "hall/Of Campus Adress(hall/Off) : " << hallOfCampusAdress << endl
         << "Blood Group : " << BloodGroup << endl
         << "Genotype : " << genotype << endl
         << "=========================================================" << endl
         << "Student Academic Details" << endl
         << "=========================================================" << endl
         << "Matric No : " << matricNo << endl
         << "level(HND/ND) : " << level << endl
         << "School : " << school << endl
         << "Department : " << department << endl
         << "Option : " << option << endl;

    return 0;
}
