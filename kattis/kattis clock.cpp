#include <iostream>

using namespace std;

int main(void)
{ 
	int H, M; 
	//cout << "Enter hours and minutes separated by a space: ";
	cin >> H >> M;
	
	int totalMinutes = H * 60 + M;
	totalMinutes = (totalMinutes - 45 + 24 * 60) % (24 * 60); 
	
	int outputH = totalMinutes / 60;
	int outputM = totalMinutes % 60;
	
	cout << outputH << " " << outputM << endl;
	
	return 0;
}