// method_lab1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

 #include "bibl.h"
 #include <iostream>



int main(int argc, char* argv[]) {
	if(argc !=3) {
		cout << "incorrect command line! "
 				"Waited: command in_file out_file" 
                 << endl;
		exit(1);
	}
	ifstream ifst(argv[1]); // 
	ofstream ofst(argv[2]);
	cout << "Start"<< endl;
	
	container c;
	Init(c);
	In(c, ifst);
ofst << "Filled container. " << endl;
	Out(c, ofst);

	Clear(c);
ofst << "Empty container. " << endl;
	Out(c, ofst);

cout << "Stop"<< endl;
return 0;
}


