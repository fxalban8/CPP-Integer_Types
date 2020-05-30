#include <iostream>
#include <limits.h>		//we will include the limits library
using namespace std;


int main(){
	
	cout<<"The maximum value of an integer is "<<INT_MAX<<endl;
	cout<<"The minimum value of an integer is "<<INT_MIN<<"\n"<<endl;

	cout<<"The maximum value of a short int is "<<SHRT_MAX<<endl;
	cout<<"The minimum value of a short int is "<<SHRT_MIN<<"\n"<<endl;

	cout<<"The maximum value of a long value is "<<LONG_MAX<<endl;
	cout<<"The minimum value of a long value is "<<LONG_MIN<<"\n"<<endl;

	cout<<"The maximum value of an unsigned value is "<<UINT_MAX<<"\n"<<endl;	
	
	cout<<"THe number of bytes occupied by an INTEGER is "<<sizeof(int)<<endl;
	cout<<"The number of bytes occupied by a SHORT variable is "<<sizeof(short)<<endl;
	cout<<"The number of bytes occupied by s LONG variable is "<<sizeof(long)<<endl;
	cout<<"The number of bytes occupied by an UNSIGNED variable is "<<sizeof(unsigned int)<<endl;

	return 0;
}
