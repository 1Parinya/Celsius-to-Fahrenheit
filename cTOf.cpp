
/*
#include<iostream>
using namespace std;
int main()
{
	float f;
	cout << "Enter your fahlenheit " ;
	cin >> f;
	cout << "fahlenheit = " << f <<endl;
	cout << ((f>70) ? " Now weather in Thailand is HOT":"Now weather in Thailand is Cool ")<<endl;
	                    
	return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
     int c,f;
	cout << "Enter your celsius " ;
	cin >>c;
	cout << "fahlenheit = ";
		f =  (c*1.8+32) ;
		cout<< f;
		cout << endl;
    cout << ((f>70) ? " Now weather in Thailand is HOT":"Now weather in Thailand is Cool ")<<endl;

	                    
	return 0;
} 