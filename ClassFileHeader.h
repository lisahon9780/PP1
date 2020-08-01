#ifndef CLASSFILEHEADER_H
#define CLASSFILEHEADER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <numeric>
using namespace std;

class Reports{
  public:
    void GradesLetter1()const;
	void GradesLetter2()const;
    void GradesAvg1()const;
	void GradesAvg2()const;
    void HighestGrade()const;
    void ClassAverage1()const;
	void ClassAverage2()const;
    void ClassOverall1()const;
	void ClassOverall2()const;
    void printClass1()const;
	void printClass2()const;
  private:
  // variables for CIT1325
    string first, last, g1, g2, g3, g4,gF; // variables for getline when reading in file.
    vector <string> nameFirst1; // adds variables from first to vector.
    vector <string> nameLast1; // adds variables from last to vector.
    vector <double> gradeOne1; // adds variables from g1 to vector.
    vector <double> gradeTwo1; // adds variables from g2 to vector.
    vector <double> gradeThree1; // adds variables from g3 to vector.
    vector <double> gradeFour1; // adds variables from g4 to vector.
    vector <double> gradeFinal1; // adds variables from gF to vector.
    vector <double> studentAverage1;
    int classSize1;
    double tempAvg1;
    char letter1;
  // variables for CIT1350
    vector <string> nameFirst2; // adds variables from first to vector.
    vector <string> nameLast2; // adds variables from last to vector.
    vector <double> gradeOne2; // adds variables from g1 to vector.
    vector <double> gradeTwo2; // adds variables from g2 to vector.
    vector <double> gradeThree2; // adds variables from g3 to vector.
    vector <double> gradeFour2;// adds variables from g4 to vector.
    vector <double> gradeFinal2;// adds variables from gF to vector.
    int classSize2;
    double tempAvg2;
    vector <double> studentAverage2;
    char letter2;
};
#endif