#include<iostream>
#include<fstream>
#include <string>
#include<ctime>
#include"my_header.h"
using namespace std;
int main() {
    string fileName, name, rollNo, subject, institution, insAdrs, course, date;
    string equipment;
    string bookSubject, bookNames;
    string reason;
    int options;

    cout<<"Enter Name for your File: ";
    getline(cin, fileName);

    // Getting the Subject first for Decision Making
    cout<<"What is the subject of the Letter:\n";
    cout<<" 1. leave\n 2. Equipment for CS Lab\n 3. Library Books Request\n 4. Transfer Certificate\n";
    cout<<"Your Choice: ";
    cin>>options;
    switch(options) {
        case 1: 
            subject = "leave";
            getline(cin, equipment);    // For clearing input buffer
            break;
        case 2:
            cout<<"What equipment:\n";
            getline(cin, equipment);    // For clearing input buffer
            getline(cin, equipment); 
            break;
        case 3:
            cout<<"Enter Book Subject:\n";
            getline(cin, bookSubject);
            getline(cin, bookSubject);
            cout<<"Enter Title(s) of book(s):\n";
            getline(cin, bookNames);
            break;
        case 4:
            cout<<"What's your reason:\n";
            getline(cin, reason);
            getline(cin, reason);
            break;
        default:
            cerr<<"Invalid input. Please Restart the Program.\n";
            return 0;
    }

    cout<<"Your Name: ";
    getline(cin, name);

    cout<<"Your Roll No: ";
    getline(cin, rollNo);

    cout<<"Institution: ";
    getline(cin,institution);

    cout<<"Institution Address: ";
    getline(cin,insAdrs);

    cout<<"Course: ";
    getline(cin,course);

    cout<<"Date: ";
    getline(cin,date);

    fileName = "./Letters/" + fileName + ".txt";


    // I just need to add cond. to check subject and assign different values to FullContent based on that.
    // I can add more letter/options as I write Functions for letters on more Subjects.

    string FullContent;
    srand(time(0));
    int variations = rand() % 7 + 1;
    switch(options) {
        case 1:
            switch(variations) {
                case 1:
                    FullContent = leaveLetter1(name, rollNo, subject, institution, insAdrs, course, date);
                    break;
                case 2:
                    FullContent = leaveLetter2(name, rollNo, subject, institution, insAdrs, course, date);
                    break;
                case 3:
                    FullContent = leaveLetter3(name, rollNo, subject, institution, insAdrs, course, date);
                    break;
                case 4:
                    FullContent = leaveLetter4(name, rollNo, subject, institution, insAdrs, course, date);
                    break;
                case 5:
                    FullContent = leaveLetter5( name, rollNo, subject, institution, insAdrs, course, date);

                case 6:
                    FullContent = leaveLetter6( name, rollNo, subject, institution, insAdrs, course, date);
                    break;
                case 7:
                    FullContent = leaveLetter7(name, rollNo, subject, institution, insAdrs, course, date);
                    break;
                    

            }
            break;

        case 2:
            switch(variations) {
                case 1:
                    FullContent = RequestEquipmentLetter1(name, rollNo, institution, insAdrs, course, date, equipment);
                    break;
                case 2:
                    FullContent = RequestEquipmentLetter2(name, rollNo, institution, insAdrs, course, date, equipment);
                    break;
                case 3:
                    FullContent = RequestEquipmentLetter3(name, rollNo, institution, insAdrs, course, date, equipment);                    
                    break;
                case 4:
                    FullContent = RequestEquipmentLetter4(name, rollNo, institution, insAdrs, course, date, equipment);                    
                    break;
                case 5:
                    FullContent = RequestEquipmentLetter5(name, rollNo, institution, insAdrs, course, date, equipment);
                    break;
                case 6:
                    FullContent = RequestEquipmentLetter6(name, rollNo, institution, insAdrs, course, date, equipment);                    
                    break;
                case 7:
                    FullContent = RequestEquipmentLetter7(name, rollNo, institution, insAdrs, course, date, equipment);
                    break;
        }
        break;
        case 3:
            switch(variations) {
                case 1:
                    FullContent = LibraryBooks1(name, rollNo, institution, insAdrs, course, date, bookSubject, bookNames);
                    break;
                case 2:
                    FullContent = LibraryBooks2(name, rollNo, institution, insAdrs, course, date, bookSubject, bookNames);
                    break;
                case 3:
                    FullContent = LibraryBooks3(name, rollNo, institution, insAdrs, course, date, bookSubject, bookNames);
                    break;
                case 4:
                    FullContent = LibraryBooks4(name, rollNo, institution, insAdrs, course, date, bookSubject, bookNames);
                    break;
                case 5:
                    FullContent = LibraryBooks5(name, rollNo, institution, insAdrs, course, date, bookSubject, bookNames);
                    break;
                case 6:
                    FullContent = LibraryBooks6(name, rollNo, institution, insAdrs, course, date, bookSubject, bookNames);
                    break;
                case 7:
                    FullContent = LibraryBooks7(name, rollNo, institution, insAdrs, course, date, bookSubject, bookNames);
                    break;
        }
        break;
        case 4:
            switch(variations) {
                case 1:
                    FullContent = TransferCertificate1(name, rollNo, institution, insAdrs, course, date, reason);
                    break;
                case 2:
                    FullContent = TransferCertificate2(name, rollNo, institution, insAdrs, course, date, reason);
                    break;
                case 3:
                    FullContent = TransferCertificate3(name, rollNo, institution, insAdrs, course, date, reason);
                    break;
                case 4:
                    FullContent = TransferCertificate4(name, rollNo, institution, insAdrs, course, date, reason);
                    break;
                case 5:
                    FullContent = TransferCertificate5(name, rollNo, institution, insAdrs, course, date, reason);
                    break;
                case 6:
                    FullContent = TransferCertificate6(name, rollNo, institution, insAdrs, course, date, reason);
                    break;
                case 7:
                    FullContent = TransferCertificate7(name, rollNo, institution, insAdrs, course, date, reason);
                    break;
        }
        break;
    }
    

    createFile(fileName, FullContent);

    getchar();
    return 0;

}
