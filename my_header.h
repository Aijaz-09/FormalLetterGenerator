#ifndef MY_HEADER_H
#define MY_HEADER_H

#include<string>
using namespace std;

// LEAVE LETTER
string leaveLetter1(string name, string rollNo, string subject, string institution, string insAdrs,  string course, string date);
string leaveLetter2(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date);
string leaveLetter3(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date);
string leaveLetter4(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date);
string leaveLetter5(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date);
string leaveLetter6(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date);
string leaveLetter7(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date);

// EQUIPMENT REQUEST LETTERS
string RequestEquipmentLetter1(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment);
string RequestEquipmentLetter2(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment);
string RequestEquipmentLetter3(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment);
string RequestEquipmentLetter4(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment);
string RequestEquipmentLetter5(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment);
string RequestEquipmentLetter6(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment);
string RequestEquipmentLetter7(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment);

// LIBRARY BOOKS REQUEST LETTERS
string LibraryBooks1(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames);
string LibraryBooks2(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames);
string LibraryBooks3(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames);
string LibraryBooks4(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames);
string LibraryBooks5(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames);
string LibraryBooks6(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames);
string LibraryBooks7(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames);

// TRANSFER CERTIFICATE LETTERS
string TransferCertificate1(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason);
string TransferCertificate2(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason);
string TransferCertificate3(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason);
string TransferCertificate4(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason);
string TransferCertificate5(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason);
string TransferCertificate6(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason);
string TransferCertificate7(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason);


void createFile(string filepath, string content);

#endif