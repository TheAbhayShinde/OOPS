#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream f;

    f.open("oops.txt", ios::out);

    string collegeName = "JSPM RSCOE, Tathawade";
    string studentName;
    string branch;
    string className;
    double admissionFormFee;
    double tuitionFees;
    double universityFees;
    double examFees;
    double totalFees;

    ofstream outputFile("college_fees_receipt.txt");

    f<< " " << collegeName << endl
               << endl;

    cout<< "Enter Student Name: ";

    getline(cin, studentName);

    f<< "Name of Student :" << studentName << endl;

    cout << "Enter Branch:   ";

    getline(cin, branch);

    f<< "Branch          :" << branch << endl;

     cout<< "Enter Class: ";

    getline(cin, className);

    f<< "Class           :" << className << endl
               << endl;

    cout << "Enter Admission Form Fee: ";

    cin >> admissionFormFee;
    cout << "Enter Tuition Fees: ";
    cin >> tuitionFees;

    cout << "Enter University Fees: ";
    cin >> universityFees;

    cout << "Enter Exam Fees: ";
    cin >> examFees;
    // Calculate the total fees
    totalFees = admissionFormFee + tuitionFees + universityFees + examFees ;
    f << "----------------------------------------" << endl;
    f << "Total Fees: " << endl;
    f << "1. Admission Form Fees "  << "= " << admissionFormFee << endl;
    f << "2. Tuition Fees "  << "       = " << tuitionFees << endl;
    f << "3. University Fees   " << "  = " << universityFees << endl;
    f << "4. Exam Fees   " << "        = " << examFees << endl;
    f << "----------------------------------------" << endl;
    f << "Grand Total          "  << "  = " << totalFees << endl;
    f << "----------------------------------------" << endl;

    f.close();

    cout << "Receipt successfully created!" << endl;

    return 0;
}