// #include "stdio.h"
#include "iostream"
#include <fstream>
#include<bits/stdc++.h> 
using namespace std;

struct candidate { 
    int student_id; 
    int grades[3];
    float average_grade ;
}; 

int total_students,i;
int max_average_student;
float max_average=0,avg;
struct candidate all_candidates[500];

int main(){
	ifstream inFile; 
   inFile.open("students.txt");
   ofstream outFile;
   outFile.open("result.txt");

inFile>>total_students;

for (i=0; i<total_students; i=i+1){
	inFile>>all_candidates[i].student_id;
	inFile>>all_candidates[i].grades[0];
	inFile>>all_candidates[i].grades[1];
	inFile>>all_candidates[i].grades[2];
	avg=(all_candidates[i].grades[0]+all_candidates[i].grades[1]+all_candidates[i].grades[2])/3.0;
	all_candidates[i].average_grade=avg;
}
	
for (i=0; i<total_students; i=i+1){
	if(all_candidates[i].average_grade>max_average){
		max_average=all_candidates[i].average_grade;
		max_average_student=all_candidates[i].student_id;
	}

}
for (i=0; i<total_students; i=i+1){
	outFile<<all_candidates[i].student_id<<" ";
	outFile<<all_candidates[i].grades[0]<<" ";
	outFile<<all_candidates[i].grades[1]<<" ";
	outFile<<all_candidates[i].grades[2]<<" ";
	outFile<<setprecision(2)<<fixed << all_candidates[i].average_grade<<endl;
}

outFile<<"Maximum Average is "<<setprecision(2)<<fixed<<max_average<<" and the student is "<<max_average_student;
return 0;
}
