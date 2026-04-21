#include <iostream>
using namespace std;
void showPascal(int totalRows){
     int currentVal = 1;
 for (int i = 0; i < totalRows; i++) {
 	for (int gap =1; gap <= totalRows-i; gap++) {
 		cout << " ";
	 }
	 
	 
 for  (int j = 0; j <=  i; j++) {
 	if (j==0 || i==0){
 		currentVal =1;
	 }else{
	 	currentVal= currentVal * ( i - j + 1) /j;
	 }
	 cout << currentVal<<" ";
 }
 cout <<"\n";
}
}
 int main() {
   int n;
 	cout<<"enter how many rows to display: ";
 	cin>>n;
 	
 	if (n>0) {
 		showPascal(n);
	 }else{
	 	cout<<"please enter a positive integer."<<endl;
	 }
	 return 0;
 }
