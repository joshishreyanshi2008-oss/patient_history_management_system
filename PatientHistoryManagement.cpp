
#include <iostream>
#include <string>
using namespace std;

// to store the data
struct Date {
    int day;
    int month;
    int year;
};

// details of doctor to be stored
struct Doctor {
    string name;
    string speciality;
    string department;
};

// details of patient visit
struct Visit {
    Date visitDate;
    string department;
    string doctor;
    string diagnosis;
    string medicine;
    float fee;
};

// predefined lsits of doctors
Doctor doctors[4] = {
    {"Dr. Yash Sharma", "Cardiologist", "Cardiology"},
    {"Dr. Surendra Verma", "Neurologist", "Neurology"},
    {"Dr. Anu Gupta", "Orthopedist", "Orthopedics"},
    {"Dr. Gurleen Mehta", "Dermatologist", "Dermatology"}
};

// Patient class
class Patient {

private:
    string patientName;
    string patientID;

    // Ek patient ki maximum 100 visits
    Visit visits[100];
    int visitCount;

public:

    // Constructor: to set patient details
    Patient(string name, string id) {
        patientName = name;
        patientID = id;
        visitCount = 0;
    }

    // to show the list of avaliable doctors
    void showDoctors() {
        cout << "\nAvailable Doctors:\n";

        for (int i = 0; i < 4; i++) {
            cout << i + 1 << ". "
                 << doctors[i].name << " ("
                 << doctors[i].speciality << ") - "
                 << doctors[i].department << endl;
        }
    }

    // add new (latest) visit of patient
    void addVisit() {

        if (visitCount >= 100) {
            cout << "Visit limit reached!" << endl;
            return;
        }

        Visit v;

        cout << "\nEnter visit date (DD MM YYYY): ";
        cin >> v.visitDate.day
            >> v.visitDate.month
            >> v.visitDate.year;

        // To select the doctor
        showDoctors();

        int choice;

        cout << "\nSelect doctor number: ";
        cin >> choice;

        if (choice < 1 || choice > 4) {
            cout << "Invalid doctor choice!" << endl;
            return;
        }

        // Selected doctor ki details lena
        v.doctor = doctors[choice - 1].name
                   + " (" + doctors[choice - 1].speciality + ")";

        v.department = doctors[choice - 1].department;

        // remaining details of the visit
        cin.ignore();

        cout << "Enter diagnosis: ";
        getline(cin, v.diagnosis);

        cout << "Enter prescribed medicine: ";
        getline(cin, v.medicine);

        cout << "Enter consultation fee: ";
        cin >> v.fee;

        // store the visiut details to an array
        visits[visitCount] = v;
        visitCount++;

        cout << "\nVisit added successfully!" << endl;
    }
};
    // PART 2 
