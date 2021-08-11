// C++ program for implementation of falling matrix.
#include<iostream>
#include<string>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<chrono>

// Width of the matrix line
const int width = 1000;

// Defines the number of flips in Boolean Array 'switches'
const int flipsPerLine =1;

// Delay between two successive line print
const int sleepTime = 50;

using namespace std;

int main()
{
	int i=0, x=0;
	bool mat[width] = {5,10};
	cout<< mat[1];
   	const string ch = "Abhinav Agarwal";
	const int l = ch.size();
	system("Color 0A");
	while (true)
	{
		for (i=0;i<width;i+=2){
			if (mat[i])
				cout << ch[rand() % l] << " ";
			else
				cout<<" ";
		}
		for (i=0; i!=flipsPerLine; ++i)
		{
			x = rand() % width;
			mat[x] = !mat[x];
		}
		cout << endl;
	}
	return 0;
}
