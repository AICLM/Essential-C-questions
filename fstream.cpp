//1.7
#include<iostream>
#include<fstream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main()
{
	ifstream in_file("E:\\C++Code\\text.txt");
	if ( ! in_file)
	{
		cerr << "1 oops! unable";
		return -1;
	}
	ofstream out_file("E:\\C++Code\\text.txt",ios_base::app);
	if ( ! out_file)
	{
		cerr << "2 oops unable";
		return -2;
	}
	
	//
	string word;
	vector< string > text;
	while (in_file >> word)
	{
		text.push_back( word ) ;
	}
	
	//
	int  ix;
	cout << "unsorted text:\n";
	
	for ( ix = 0; ix < text.size(); ++ix)
	{
		cout << text[ix] << ' ';
	}
	cout << endl;
	//
	sort ( text.begin(),text.end() );
	out_file << "sorted text:\n";
	for ( ix = 0; ix < text.size(); ++ix)
	{
		out_file << text[ ix ] << ' ';
	}
	out_file << endl;
	return 0;
 } 
