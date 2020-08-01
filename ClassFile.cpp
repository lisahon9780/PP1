#include "ClassFileHeader.h"

void Reports::Class1Input() {
	// Gets data from text file and inputs into individual vectors
  ifstream inFile1("CIT1325.txt");
  if (inFile1.is_open()){
    while(!inFile1.eof()){
      getline(inFile1,first, ',');
      nameFirst1.push_back(first);
      getline(inFile1,last, ',');
      nameLast1.push_back(last);
      getline(inFile1,g1, ',');
      gradeOne1.push_back(stod(g1));
      getline(inFile1,g2, ',');
      gradeTwo1.push_back(stod(g2));
      getline(inFile1,g3, ',');
      gradeThree1.push_back(stod(g3));
      getline(inFile1,g4,',');
      gradeFour1.push_back(stod(g4));
      getline(inFile1,gF, '\n');
      gradeFinal1.push_back(stod(gF));
      }
    inFile1.close();
    }
}
void Reports::Class2Input() {
	// Gets data from text file and inputs into individual vectors
  ifstream inFile2("CIT1350.txt");
    if (inFile2.is_open()){
      while(!inFile2.eof()){
      getline(inFile2,first, ',');
      nameFirst2.push_back(first);
      getline(inFile2,last, ',');
      nameLast2.push_back(last);
      getline(inFile2,g1, ',');
      gradeOne2.push_back(stod(g1));
      getline(inFile2,g2, ',');
      gradeTwo2.push_back(stod(g2));
      getline(inFile2,g3, ',');
      gradeThree2.push_back(stod(g3));
      getline(inFile2,g4,',');
      gradeFour2.push_back(stod(g4));
      getline(inFile2,gF, '\n');
      gradeFinal2.push_back(stod(gF));
      }
    inFile2.close();
    }
}
void Reports::GetAverage() {
	// Gets average of grades from each class
  classSize1 = nameFirst1.size();      // Inputs classSize based on vector size of nameLast1 for loops
  classSize2 = nameFirst1.size();      // Inputs classSize based on vector size of nameLast2 for loops
	for (int i = 0; i <  nameFirst1.size(); i++)){
	double classTotal1;

	classTotal1 = gradeOne1.at(i) + gradeTwo1.at(i) + gradeThree1.at(i) + gradeFour1.at(i) + (gradeFinal1.at(i) *  2);
	studentAverage1.at(i) = classTotal1 / 6;
	ClassOverall1.push_back(studentAverage1);
	}
	for (int i = 0; i <  nameFirst2.size(); i++)){
	double classTotal2;

	classTotal2 = gradeOne2.at(i) + gradeTwo2.at(i) + gradeThree2.at(i) + gradeFour2.at(i) + (gradeFinal2.at(i) *  2);
	studentAverage2.at(i) = classTotal2 / 6;
	ClassOverall2.push_back(studentAverage2);
	}
}
void Reports::GetGradesLetter() {
	// Gets letter grades from each class
  classSize1 = nameFirst1.size();      // Inputs classSize based on vector size of nameLast1 for loops
  classSize2 = nameFirst2.size();      // Inputs classSize based on vector size of nameLast2 for loops
	for (int i = 0; i <  nameFirst1.size(); i++){
		if (studentAverage1.at(i) >= 90.0)
			GradesLetter1.at(i) = 'A'; 
		else if (studentAverage1.at(i) >= 80.0) 
			GradesLetter1.at(i) = 'B';
		else if (studentAverage1.at(i) >= 70.0)
			GradesLetter1.at(i) = 'C';
		else if (studentAverage1.at(i) >= 60.0)
			GradesLetter1.at(i) = 'D';
		else
			GradesLetter1.at(i) = 'F';
	}  
	for (int i = 0; i <  nameFirst2.size(); i++){
		if (studentAverage2.at(i) >= 90.0)
			GradesLetter2.at(i) = 'A'; 
		else if (studentAverage2.at(i) >= 80.0) 
			GradesLetter2.at(i) = 'B';
		else if (studentAverage2.at(i) >= 70.0)
			GradesLetter2.at(i) = 'C';
		else if (studentAverage2.at(i) >= 60.0)
			GradesLetter2.at(i) = 'D';
		else
			GradesLetter2.at(i) = 'F';
	}    	
}    
void Reports::GetOverallGrade(){
	// Gets average of total grades from each class
	classSize1 = nameFirst1.size();      // Inputs classSize based on vector size of nameLast1 for loops
	classSize2 = nameFirst2.size();      // Inputs classSize based on vector size of nameLast2 for loops
	
	for (int i = 0; i <  nameFirst1.size(); i++){
			ClassGrade1 = accumulate(overallAvg1.begin(),overallAvg1.end(),0) / classSize1;
	}
	for (int i = 0; i <  nameFirst2.size(); i++){
			ClassGrade2 = accumulate(overallAvg2.begin(),overallAvg2.end(),0) / classSize2;
	}	
}	
int main(){
  // variables for CIT1325
	string first, last, g1, g2, g3, g4,gF; // variables for getline when reading in file.
	vector <string> nameFirst1; // adds variables from first to vector.
	vector <string> nameLast1; // adds variables from last to vector.
	vector <double> gradeOne1; // adds variables from g1 to vector.
	vector <double> gradeTwo1; // adds variables from g2 to vector.
	vector <double> gradeThree1; // adds variables from g3 to vector.
	vector <double> gradeFour1; // adds variables from g4 to vector.
	vector <double> gradeFinal1; // adds variables from g4 to vector.
	vector <double> overallAvg1;

	ifstream inFile1("CIT1325.txt");
	if (inFile1.is_open()){
    while(!inFile1.eof()){
      getline(inFile1,first, ',');
      nameFirst1.push_back(first);
      getline(inFile1,last, ',');
      nameLast1.push_back(last);
      getline(inFile1,g1, ',');
      gradeOne1.push_back(stod(g1));
      getline(inFile1,g2, ',');
      gradeTwo1.push_back(stod(g2));
      getline(inFile1,g3, ',');
      gradeThree1.push_back(stod(g3));
      getline(inFile1,g4,',');
      gradeFour1.push_back(stod(g4));
      getline(inFile1,gF, '\n');
      gradeFinal1.push_back(stod(gF));
      }
    inFile1.close();
    }

	for (int i = 0; i <  nameFirst1.size(); i++){
		double tempSum;  
		double tempAvg;

		tempSum = gradeOne1.at(i) + gradeTwo1.at(i) + gradeThree1.at(i) + gradeFour1.at(i) + (gradeFinal1.at(i) *  2);
		tempAvg = tempSum / 6;
		overallAvg1.push_back(tempAvg);

	cout << tempSum << endl;
	cout << tempAvg << endl;

	if (tempAvg >= 90.0)
        cout << 'A' << endl;
	else if (tempAvg >= 80.0) 
        cout << 'B' << endl;
	else if (tempAvg >= 70.0)
        cout << 'C' << endl;
	else if (tempAvg >= 60.0)
        cout << 'D' << endl;
	else
        cout << 'F'<< endl;

    cout<< accumulate(overallAvg1.begin(), overallAvg1.end(), 0) / 25 << endl; 
	}
	for(int i=0; i < 25; i++){
	cout << nameFirst1.at(i) << " " << nameLast1.at(i) << " " << gradeOne1.at(i) << " " << gradeTwo1.at(i) << " "<< gradeThree1.at(i) << " " << gradeFour1.at(i) << " " << gradeFinal1.at(i) << endl;
	}
return 0;
}