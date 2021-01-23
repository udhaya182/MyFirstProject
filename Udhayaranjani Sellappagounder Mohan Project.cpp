#include<iostream>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

/* 
File name: S11183077.cpp
Description: This  program calculates the grades for three different courses: GEF01,
BIF02 and CSF12.
Author: Sellappagounder Mohan Udhayaranjani,
Student ID: S11183077,
Campus: Laucala,
Semester 2, 2020,
CSF12_Project,
Date:24/10/2020.
*/
//Function to display the print statements
void fnDisplay()
{
	system("CLS");
	cout << "--------------------------------------\n";
	cout << "WELCOME TO THE COURSE GRADE CALCULATOR\n";
	cout << "--------------------------------------\n";
	cout << "Course\t\tInput Code\n";
	cout << "--------------------------------------\n";
	cout << "GEF01\t\t 1\n";
	cout << "BIF02\t\t 2\n";
	cout << "CSF12\t\t 3\n";
	cout << "=======================================\n";
}
void fnValidateCourseChoice(int &iCourseChoice)
{
	cout << "Enter the course for which you want to calculate the grade <1 - 3> :";
	cin  >> iCourseChoice;
	while(iCourseChoice<1 || iCourseChoice>3)
	{
	
	cout << "Error!Value should be between <1-3> .Re-enter:";
	cin  >> iCourseChoice;
	}
}
// Function to validate the assessment marks
void fnReadValidateMark(float &fMark, float fMax)
{
	cin  >> fMark;
	while(fMark > fMax)
	{
	cout << "Error!Value should be between 0 - "<< fMax << ".Re-enter:";
	cin  >> fMark;			
	}
}
//Function to calculate the grade for the given marks
/*
Mark Range Grade
85 – 100 A+
78 – 84 A
71 - 77 B+
64 – 70 B
57 – 63 C+
50 – 56 C
40 – 49 D
*/
string fnMarktoGrade(float fTotal)
{
	string sGrade;
	if(fTotal >= 85 && fTotal <= 100)
	sGrade="A+";
	else if (fTotal >=78 && fTotal <=84 )
	sGrade="A";
	else if (fTotal >=71 && fTotal <=77)
	sGrade="B+";
	else if (fTotal >=64 && fTotal <=70)
	sGrade="B";
	else if(fTotal >=57 && fTotal <=63)
	sGrade="C+";
	else if(fTotal >=50 && fTotal <=56)
	sGrade="C";
	else if(fTotal >=40 && fTotal <=49)
	sGrade="D";
	else
	sGrade="E";
return sGrade;	
}
int main ()
{
	// Counter Variables to store number of grades processed for each course
	int iCountGEF=0, iCountBIF=0, iCountCSF=0;
	// Variable to store the course choice
	int iCourseChoice;
	//Variables to store assessment marks for every course
	float fTest1,fTest2,fProject,fLab,fFinal;
	//Varibles to course work , total marks 
	float fCourseWork , fTotal;
	//Variable to store the repeat choice
	char cOption='y';
	//String Variable to store the grade
	string sGrade;
	// Function called to display the initial print messages
	fnDisplay();
	fnValidateCourseChoice(iCourseChoice);	
	// while loop is created with what has to be done for all three cases
	while(cOption=='y'|| cOption=='Y')
	{
		switch(iCourseChoice)
		{
		case 1:
			do
			{
			iCountGEF++;
			cout << "\nEnter Marks for GEF01.....";
			cout << "\nEnter mark for Test 1 <15>:";
			fnReadValidateMark(fTest1, 15);
			cout << "\nEnter mark for Test 2 <15>:";
			fnReadValidateMark(fTest2,15);
			cout << "\nEnter mark for Project <20>:";
			fnReadValidateMark(fProject,20);
			cout << "\nEnter the Final Exam mark <100>:";
			fnReadValidateMark(fFinal,100);
			cout << "\n-------------------------------------------";
			fCourseWork = (fTest1+fTest2+fProject);
			fFinal = (fFinal/2);
			fTotal=fFinal+fCourseWork;
			cout << "\nCoursework mark\t        :" << fCourseWork;
			cout << "\nFinal Exam mark\t        :" << fFinal;
			cout << "\nFinal Course percentage\t:" << fTotal <<"%";
			sGrade = fnMarktoGrade(fTotal);
			cout << "\nGrade\t:" << sGrade;
			cout << "\n-------------------------------------------";
			cout << "\nCW\tFE\tTM\tGrade";
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout << "\n" << fCourseWork <<"\t"<<fFinal <<"\t"<<fTotal <<"\t"<<sGrade;
			cout << "\n___________________________________________";
			cout << "\nDo you need to calculate GEF01 grade for another student?<y/n>:";
			cin  >> cOption;
			}while(cOption=='y'|| cOption =='Y');
			break;
		case 2:
		do
			{
			iCountBIF++;
			cout << "\nEnter Marks for BIF02.....";
			cout << "\nEnter mark for Test 1 <10>:";
			fnReadValidateMark(fTest1, 10);
			cout << "\nEnter mark for Test 2 <10>:";
			fnReadValidateMark(fTest2,10);
			cout << "\nEnter mark for Laboratory <20>:";
			fnReadValidateMark(fLab,20);
			cout << "\nEnter the Final Exam mark <100>:";
			fnReadValidateMark(fFinal,100);
			cout << "\n-------------------------------------------";
			fCourseWork = (fTest1+fTest2+fLab);
			fFinal = (fFinal/100)*60;
			fTotal=fFinal+fCourseWork;
			cout << "\nCoursework mark\t        :" << fCourseWork;
			cout << "\nFinal Exam mark\t        :" << fFinal;
			cout << "\nFinal Course percentage\t:" << fTotal <<"%";
			sGrade = fnMarktoGrade(fTotal);
			cout << "\nGrade\t                  :" << sGrade;
			cout << "\n-------------------------------------------";
			cout << "\nCW\tFE\tTM\tGrade";
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout << "\n" << fCourseWork <<"\t"<<fFinal <<"\t"<<fTotal <<"\t"<<sGrade;
			cout << "\n___________________________________________";
			cout << "\nDo you need to calculate BIF02 grade for another student?<y/n>:";
			cin  >> cOption;
			}while(cOption=='y'|| cOption =='Y');
			break;	
			
		case 3:
		do
			{
			iCountCSF++;
			cout << "\nEnter Marks for CSF12.....";
			cout << "\nEnter mark for Project <15>:";
			fnReadValidateMark(fProject, 15);
			cout << "\nEnter mark for Quiz <10>:";
			fnReadValidateMark(fTest1,10);
			cout << "\nEnter mark for Test <15>:";
			fnReadValidateMark(fTest2,15);
			cout << "\nEnter mark for Lab/Workshop <10>:";
			fnReadValidateMark(fLab,10);
			cout << "\nEnter the Final Exam mark <100>:";
			fnReadValidateMark(fFinal,100);
			cout << "\n-------------------------------------------";
			fCourseWork = (fTest1+fTest2+fProject+fLab);
			fFinal = fFinal/2;
			fTotal=fFinal+fCourseWork;
			cout << "\nCoursework mark\t        :" << fCourseWork;
			cout << "\nFinal Exam mark\t        :" << fFinal;
			cout << "\nFinal Course percentage\t:" << fTotal <<"%";
			sGrade = fnMarktoGrade(fTotal);
			cout << "\nGrade\t                  :" << sGrade;
			cout << "\n-------------------------------------------";
			cout << "\nCW\tFE\tTM\tGrade";
			cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
			cout << "\n" << fCourseWork <<"\t"<<fFinal <<"\t"<<fTotal <<"\t"<<sGrade;
			cout << "\n___________________________________________";
			cout << "\nDo you need to calculate CSF12 grade for another student?<y/n>:";
			cin  >> cOption;
			}while(cOption=='y'|| cOption =='Y');
			break;		
		}
		cout<< "\n Do you wish to continue?<y/n>";
		cin  >> cOption;
		cout <<	"\n*****************************************";
		cout << "\nTotal number of GEF01 Grades processed:" << iCountGEF;
		cout << "\nTotal number of BIF02 Grades processed:" << iCountBIF;
		cout << "\nTotal number of CSF12 Grades processed:" << iCountCSF << endl;
		system("PAUSE");
		if(cOption=='n'|| cOption=='N')
		break;
		else
		{
			fnDisplay();
			fnValidateCourseChoice(iCourseChoice);
		}
		
	}
	
	// the program pauses and enables the user to exit the program.
	system("PAUSE");
	
	// returns zero to operating system  indicating successful completion of the process
	return 0;
	
}
// end of S11183077.cpp
