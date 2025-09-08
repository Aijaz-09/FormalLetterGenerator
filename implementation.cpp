#include <iostream>
#include<fstream>
#include <string>
#include "my_header.h"
using namespace std;


// LEAVE LETTERS
string leaveLetter1(string name, string rollNo, string subject, string institution, string insAdrs,  string course, string date) {
string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

string l2 = "\n\nSubject: Request for " + subject + " on " + date;

string l3 = "\nRespected Sir/Madam";

string l4 = "\n\nI hope this message finds you in good health and spirits.";
string l5 =  " I am " + name + ", a student of " + course + " in your esteemed college. ";
string l6 =  "I am writing to kindly request your permission to grant me leave for one day ";
string l7 = "on " + date + " due to a personal commitment. ";

string l8 = "I assure you that I will make every effort to cover any missed lessons or ";
string l9 = "assignments and will stay up-to-date with all academic requirements during my absence.";

string l10 = "\n\nI kindly request your approval for this leave and would be extremely grateful ";
string l11 = "for your understanding. ";

string l12 = "Thank you for considering my request. Please let me know if any additional "; 
string l13 = "details or formalities are required.";

string l14 = "\n\nYours sincerely\n" + name + "\nRoll No: " + rollNo + "\n" + course;

string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10 + l11 + l12 + l13 + l14;

return full;
}

string leaveLetter2(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Application for " + subject + " on " + date +
           "\n\nRespected Sir/Madam,\n\nI am " + name + ", a student of " + course +
           " at your esteemed college. I am writing to formally request leave for one day on " +
           date + " due to personal reasons.\n\nI will ensure that I catch up on any missed work promptly.\n\nThank you for your consideration.\n\nYours faithfully,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string leaveLetter3(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Request for " + subject + " Leave on " + date +
           "\n\nDear Sir/Madam,\n\nI hope this letter finds you well. My name is " + name +
           ", a student of " + course + " at your prestigious institution. I am writing to kindly request leave for one day on " +
           date + " due to a personal commitment that requires my attention.\n\nI assure you that I will make every effort to cover any missed lectures and assignments during my absence.\n\nI sincerely hope for your understanding and support.\n\nThank you for considering my request.\n\nWarm regards,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string leaveLetter4(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Request for " + subject + " Leave on " + date +
           "\n\nHello Sir/Madam,\n\nI’m " + name + ", studying " + course + " at your college. I hope you’re doing well.\n\nI just wanted to ask if I could take a day off on " + date +
           " because of a personal matter I need to attend to.\n\nI’ll make sure to catch up on anything I miss during that day. Thanks a lot for understanding!\n\nBest wishes,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string leaveLetter5(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Formal Request for " + subject + " Leave on " + date +
           "\n\nRespected Sir/Madam,\n\nI am " + name + ", currently enrolled in the " + course + 
           " program at your esteemed institution. I am writing to respectfully request leave for one day on " +
           date + " due to personal obligations that require my immediate attention.\n\nI understand the importance of maintaining academic progress and will ensure that I catch up on all missed lectures and assignments.\n\nI sincerely hope for your favorable consideration of my request.\n\nThank you for your time and understanding.\n\nYours respectfully,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string leaveLetter6(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Kindly Granting Leave for " + subject + " on " + date +
           "\n\nDear Sir/Madam,\n\nI hope this message finds you in great health and high spirits. My name is " + name +
           ", a student of " + course + " at your respected institution. I am writing to kindly request your permission to grant me leave for one day on " +
           date + " due to a personal matter.\n\nI am truly grateful for the support and guidance I have received at this institution, and I assure you that I will stay committed to my studies during my absence.\n\nThank you so much for considering my request with kindness and understanding.\n\nWith heartfelt appreciation,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string leaveLetter7(string name, string rollNo, string subject, string institution, string insAdrs, string course, string date) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Leave Request for " + subject + " on " + date +
           "\n\nRespected Sir/Madam,\n\nI am " + name + ", a student of " + course + ". I am requesting leave on " +
           date + " due to personal reasons.\n\nI will make sure to cover all missed work.\n\nThank you for your consideration.\n\nSincerely,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}



// Equipment Request Letters
string RequestEquipmentLetter1(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Provision of " + equipment + " for the Computer Lab";

    string l3 = "\nRespected Sir/Madam";

    string l4 = "\n\nI am " + name + ", a student of " + course + " in your esteemed institution.";
    string l5 = " I am writing to request the provision of " + equipment + " for our Computer Lab.";
    string l6 = " The current resources are insufficient to meet the requirements of the students effectively.";

    string l7 = "\n\nProviding the required equipment will greatly enhance the learning experience for all students.";
    string l8 = " It will also ensure that we stay updated with the latest technology and maintain academic excellence.";

    string l9 = "\n\nI kindly request you to consider this request at the earliest.";
    string l10 = " Please let me know if any additional details or documentation are required.";

    string l11 = "\n\nThank you for your kind attention to this matter.";

    string l12 = "\n\nYours sincerely,";
    string l13 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10 + l11 + l12 + l13;
    return full;
}

string RequestEquipmentLetter2(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Formal Request for Provision of " + equipment + " in the Computer Lab" +
           "\n\nRespected Sir/Madam,\n\nI am " + name + ", a student of " + course + " at your esteemed institution. I am writing to formally request the provision of " +
           equipment + " for our Computer Lab. The current resources are not sufficient to meet the academic needs of the students effectively.\n\n" +
           "The addition of this equipment will significantly enhance our learning experience and ensure we are equipped with up-to-date technology, fostering academic excellence.\n\n" +
           "I kindly request your prompt consideration of this matter. Please let me know if any further information is needed.\n\nThank you for your attention to this request.\n\nYours faithfully,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string RequestEquipmentLetter3(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Request for " + equipment + " for the Computer Lab" +
           "\n\nDear Sir/Madam,\n\nI hope this letter finds you well. My name is " + name + ", a student of " + course + " at your esteemed institution. I am writing to kindly request the provision of " +
           equipment + " for our Computer Lab. Currently, the available resources are inadequate to meet the growing academic demands of the students.\n\n" +
           "Having this equipment will not only enhance our technical skills but also ensure that we remain competitive with the latest technological advancements.\n\n" +
           "I sincerely appreciate your consideration of this request and would be grateful if you could expedite the process. Please let me know if additional documentation is required.\n\nThank you for your support.\n\nWarm regards,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string RequestEquipmentLetter4(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Request for " + equipment + " for the Computer Lab" +
           "\n\nRespected Sir/Madam,\n\nI am " + name + ", a student of " + course + ". I am requesting the provision of " + equipment + " for our Computer Lab, as the current resources are insufficient.\n\n" +
           "This equipment will greatly support our studies and help us stay updated with modern technology.\n\nKindly consider this request. Thank you.\n\nSincerely,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string RequestEquipmentLetter5(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Request for " + equipment + " to Enhance Our Learning Experience" +
           "\n\nRespected Sir/Madam,\n\nI am " + name + ", a passionate student of " + course + " at your esteemed institution. I am writing to enthusiastically request the provision of " +
           equipment + " for our Computer Lab, as it would greatly boost our learning environment.\n\n" +
           "Having access to this equipment will inspire us to explore new technologies, develop innovative projects, and stay ahead in the ever-evolving tech world.\n\n" +
           "We are excited about the potential this will unlock for us and kindly seek your support in making it possible. Thank you for considering our request.\n\nWith great anticipation,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string RequestEquipmentLetter6(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Consideration for Provision of " + equipment + " in the Computer Lab" +
           "\n\nDear Sir/Madam,\n\nI am " + name + ", a dedicated student of " + course + " at your respected institution. I hope this letter finds you in good health and high spirits.\n\n" +
           "I am writing to respectfully request the provision of " + equipment + " for our Computer Lab. The current resources, while valuable, are not fully aligned with the demands of modern educational practices.\n\n" +
           "We believe that incorporating this equipment will significantly enhance both learning outcomes and technical proficiency among students.\n\nI sincerely appreciate your time and consideration of this request. Please let me know if further information is required.\n\nYours respectfully,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}

string RequestEquipmentLetter7(string name, string rollNo, string institution, string insAdrs, string course, string date, string equipment) {
    return date + "\nThe Principal,\n" + institution + "\n" + insAdrs +
           "\n\nSubject: Urgent Request for " + equipment + " for the Computer Lab" +
           "\n\nRespected Sir/Madam,\n\nI am " + name + ", a student of " + course + " at your esteemed institution. I am writing to urgently request the provision of " +
           equipment + " for our Computer Lab, as the current lack of this equipment is significantly impacting our ability to meet academic goals.\n\n" +
           "The absence of this essential resource is limiting our learning opportunities, and timely provision would greatly enhance our academic progress.\n\nI kindly request your immediate attention to this matter. Your support will make a tremendous difference in our educational journey.\n\nThank you for your understanding and prompt consideration.\n\nYours sincerely,\n" +
           name + "\nRoll No: " + rollNo + "\n" + course;
}



// LIBRARY BOOKS REQUEST LETTERS
string LibraryBooks1(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Adding More Books to the College Library";

    string l3 = "\nRespected Sir/Madam";

    string l4 = "\n\nI am " + name + ", a student of " + course + " in your esteemed institution.";
    string l5 = " I am writing to request the inclusion of more books related to the subject \"" + bookSubject + "\" in the college library.";
    string l6 = " Specifically, the following books would greatly benefit the students in enhancing their knowledge and understanding: " + bookNames + ".";

    string l7 = "\n\nHaving access to these additional resources will significantly contribute to the academic growth of students and support our studies.";
    string l8 = " I kindly request you to consider this matter and make the necessary arrangements at the earliest.";

    string l9 = "\n\nThank you for your attention and support.";
    string l10 = " Please let me know if any additional details are needed.";

    string l11 = "\n\nYours sincerely,";
    string l12 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10 + l11 + l12;
    return full;
}

string LibraryBooks2(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;
    string l2 = "\n\nSubject: Request for Addition of Books to Library";

    string l3 = "\nDear Sir/Madam,";
    string l4 = "\n\nI hope this letter finds you well. I am " + name + ", a student of " + course + " at this institution.";
    string l5 = " I would like to bring to your attention the need for additional resources in the subject of \"" + bookSubject + "\" in our library.";
    string l6 = " The following books would be incredibly useful for students in this field: " + bookNames + ".";
    
    string l7 = "\n\nThe inclusion of these books would greatly enhance the learning experience for many students. I kindly request that you take appropriate steps to add them to the library collection.";

    string l8 = "\n\nThank you for your time and consideration. I look forward to your positive response.";

    string l9 = "\n\nSincerely,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}

string LibraryBooks3(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Additional Books in the Library";

    string l3 = "\nRespected Sir/Madam,";
    string l4 = "\n\nI am " + name + ", a student currently enrolled in " + course + " at our esteemed institution.";
    string l5 = " I am writing to humbly request the addition of books related to the subject \"" + bookSubject + "\" to the library’s collection.";
    string l6 = " A few titles that would greatly aid our studies are as follows: " + bookNames + ".";

    string l7 = "\n\nI strongly believe that these books will be a valuable resource for all students pursuing similar courses, and will contribute positively to our academic success.";

    string l8 = "\n\nI would sincerely appreciate it if you could consider this request at your earliest convenience. Thank you for your continued support and commitment to student development.";

    string l9 = "\n\nYours faithfully,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}

string LibraryBooks4(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames) {
    string l1 = date + "\nTo,\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Adding More Books to the Library";

    string l3 = "\nDear Sir/Madam,";
    string l4 = "\n\nI hope this message finds you well. I am " + name + ", currently studying " + course + " at this prestigious institution.";
    string l5 = " I am writing to kindly request the addition of books focused on the subject of \"" + bookSubject + "\" to our library.";
    string l6 = " Some of the books that would be immensely helpful for our academic progress include: " + bookNames + ".";
    
    string l7 = "\n\nThe inclusion of these books will undoubtedly assist many students, myself included, in gaining deeper insights into the subject.";

    string l8 = "\n\nI would be truly grateful if you could consider this request. Your support is much appreciated, and I look forward to hearing from you soon.";

    string l9 = "\n\nBest regards,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}

string LibraryBooks5(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;
    string l2 = "\n\nSubject: Request for Books on \"" + bookSubject + "\"";

    string l3 = "\nDear Sir/Madam,";
    string l4 = "\n\nI am " + name + ", a student of " + course + " at your institution. I am writing to request that books related to the subject \"" + bookSubject + "\" be added to the library.";
    string l5 = " A list of recommended books is as follows: " + bookNames + ".";
    
    string l6 = "\n\nI hope you will consider this request and provide the necessary resources for the benefit of all students.";

    string l7 = "\n\nThank you for your time and consideration.";

    string l8 = "\n\nSincerely,";
    string l9 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9;
    return full;
}

string LibraryBooks6(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Urgent Request for Adding Books to the Library";

    string l3 = "\nRespected Sir/Madam,";
    string l4 = "\n\nI am " + name + ", a student of " + course + " at your institution. I am writing with an urgent request regarding the addition of books on the subject of \"" + bookSubject + "\" to the library.";
    string l5 = " The following books are urgently needed to support students in their studies: " + bookNames + ".";
    
    string l6 = "\n\nThese books are crucial for our coursework, and their absence is hindering our academic progress. I would greatly appreciate your immediate attention to this matter.";

    string l7 = "\n\nThank you for understanding, and I look forward to a prompt resolution of this issue.";

    string l8 = "\n\nSincerely,";
    string l9 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9;
    return full;
}

string LibraryBooks7(string name, string rollNo, string institution, string insAdrs, string course, string date, string bookSubject, string bookNames) {
    string l1 = date + "\nTo,\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Books on \"" + bookSubject + "\"";

    string l3 = "\nDear Sir/Madam,";
    string l4 = "\n\nI hope you're doing well. My name is " + name + " and I'm a student in the " + course + " course at this institution.";
    string l5 = " I wanted to ask if it would be possible to add more books related to the subject \"" + bookSubject + "\" to the library.";
    string l6 = " Some books that would really help are: " + bookNames + ".";
    
    string l7 = "\n\nHaving these books would definitely make a big difference for us students, and we'd greatly appreciate it if they could be added.";

    string l8 = "\n\nThanks so much for considering my request, and I hope to hear from you soon.";

    string l9 = "\n\nBest regards,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}


string TransferCertificate1(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Issuance of Transfer Certificate";

    string l3 = "\nRespected Sir/Madam";

    string l4 = "\n\nI am " + name + ", a student of " + course + " in your esteemed institution.";
    string l5 = " I am writing to request a Transfer Certificate as I am required to discontinue my studies at this college due to " + reason + ".";
    string l6 = " I would be grateful if you could kindly issue the certificate at the earliest.";

    string l7 = "\n\nPlease let me know if any additional details or formalities are required.";

    string l8 = "\n\nThank you for your understanding and assistance in this matter.";

    string l9 = "\n\nYours sincerely,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}

string TransferCertificate2(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;
    string l2 = "\n\nSubject: Request for Transfer Certificate";

    string l3 = "\nDear Sir/Madam,";
    string l4 = "\n\nI am " + name + ", a student enrolled in the " + course + " program at your esteemed institution.";
    string l5 = " I am writing to request the issuance of a Transfer Certificate as I will no longer be able to continue my studies due to " + reason + ".";
    string l6 = " I would appreciate it if the certificate could be issued at the earliest opportunity.";

    string l7 = "\n\nPlease inform me if there are any additional steps or documentation required to process this request.";

    string l8 = "\n\nThank you for your time and consideration.";

    string l9 = "\n\nSincerely,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}

string TransferCertificate3(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Issuance of Transfer Certificate";

    string l3 = "\nRespected Sir/Madam,";
    string l4 = "\n\nI am " + name + ", a student of " + course + " at your esteemed institution.";
    string l5 = " It is with regret that I am writing to request the issuance of a Transfer Certificate as I am unable to continue my studies due to " + reason + ".";
    string l6 = " I would be most grateful if you could process my request and issue the certificate as soon as possible.";

    string l7 = "\n\nIf any additional documents or formalities are required, please do not hesitate to inform me. I appreciate your assistance in this matter.";

    string l8 = "\n\nThank you for your understanding and support.";

    string l9 = "\n\nYours faithfully,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}

string TransferCertificate4(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;
    string l2 = "\n\nSubject: Transfer Certificate Request";

    string l3 = "\nDear Sir/Madam,";
    string l4 = "\n\nI am " + name + ", a student of " + course + ". Due to " + reason + ", I am compelled to discontinue my studies at this institution.";
    string l5 = " I kindly request the issuance of my Transfer Certificate at your earliest convenience.";

    string l6 = "\n\nPlease let me know if further information is needed.";

    string l7 = "\n\nSincerely,";
    string l8 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8;
    return full;
}

string TransferCertificate5(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason) {
    string l1 = date + "\nTo,\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Transfer Certificate";

    string l3 = "\nDear Sir/Madam,";
    string l4 = "\n\nI am " + name + ", currently studying " + course + " at your institution.";
    string l5 = " Unfortunately, due to " + reason + ", I am unable to continue with my studies here. As such, I request the issuance of a Transfer Certificate.";
    string l6 = " I would be grateful if the certificate could be issued at the earliest opportunity.";

    string l7 = "\n\nPlease let me know if any further action or documents are required from my side.";

    string l8 = "\n\nThank you for your understanding and assistance.";

    string l9 = "\n\nBest regards,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}

string TransferCertificate6(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Urgent Request for Transfer Certificate";

    string l3 = "\nRespected Sir/Madam,";
    string l4 = "\n\nI am " + name + ", a student of " + course + " at your institution. I am writing to urgently request a Transfer Certificate due to " + reason + ".";
    string l5 = " Given the circumstances, I would appreciate it if the certificate could be processed at the earliest.";

    string l6 = "\n\nPlease let me know if any further details are needed, and I would be happy to provide them as soon as possible.";

    string l7 = "\n\nThank you for your understanding and prompt attention to this matter.";

    string l8 = "\n\nSincerely,";
    string l9 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9;
    return full;
}

string TransferCertificate7(string name, string rollNo, string institution, string insAdrs, string course, string date, string reason) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;

    string l2 = "\n\nSubject: Request for Issuance of Transfer Certificate";

    string l3 = "\nRespected Sir/Madam,";
    string l4 = "\n\nI am " + name + ", a student of " + course + " at this institution. I regret to inform you that I am unable to continue my studies due to " + reason + ".";
    string l5 = " I kindly request the issuance of a Transfer Certificate as I will no longer be able to attend classes here.";
    string l6 = " I sincerely apologize for any inconvenience this may cause, and I would greatly appreciate it if the certificate could be issued at your earliest convenience.";

    string l7 = "\n\nPlease inform me if any further formalities are required.";

    string l8 = "\n\nThank you for your understanding and support in this matter.";

    string l9 = "\n\nYours faithfully,";
    string l10 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;

    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10;
    return full;
}



/*

string requestForTechnicalTour(
    string name,
    string rollNo,
    string institution,
    string insAdrs,
    string course,
    string date,
    string tourVenue,
    string tourDate,
    string purpose,
    string contactInfo
) {
    string l1 = date + "\nThe Principal,\n" + institution + "\n" + insAdrs;
    
    string l2 = "\n\nSubject: Request for Technical Tour";
    
    string l3 = "\nRespected Sir/Madam,";
    
    string l4 = "\n\nI am " + name + ", a student of " + course + " (Roll No: " + rollNo + ") at " + institution + ".";
    string l5 = " I am writing to request a technical tour at " + tourVenue + " which is scheduled to be held on " + tourDate + ".";
    string l6 = " The purpose of this tour is to " + purpose + ", and I believe it will greatly enhance our practical understanding and complement our academic studies.";
    
    string l7 = "\n\nI kindly request you to grant permission for this tour and provide any additional instructions regarding this visit.";
    
    string l8 = "\n\nFor further details or clarifications, please feel free to contact me at " + contactInfo + ".";
    
    string l9 = "\n\nThank you for your time and consideration.";
    
    string l10 = "\n\nYours sincerely,";
    string l11 = "\n" + name + "\nRoll No: " + rollNo + "\n" + course;
    
    string full = l1 + l2 + l3 + l4 + l5 + l6 + l7 + l8 + l9 + l10 + l11;
    return full;
}


*/

void createFile(string filepath, string content){
    ifstream existingFile;
        existingFile.open(filepath);
        if(existingFile.is_open()) {
            cout<<"File already exists";
        }
        else {
            ofstream newFile(filepath);
            if(newFile.is_open()) {
                newFile<<content;
                newFile.close();
                cout<<"File created successfully";
            } else {
                cerr<<"Failed to create the file.\n";
            }
        }

}
