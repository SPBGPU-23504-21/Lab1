#include "zadanie4.h"

void readFromFile(){
    char **res, *filename = {"../arr.txt"};
    int i = 0, lines = 0;

    //open input file stream
	ifstream data(filename);
    if (data == NULL){
       cout << endl << "fail open file: " << filename << endl;
       return;
    }
    else { cout << endl << "file open succeful: " << filename << endl; }

   //reading from file
   res = (char **) malloc(lines * sizeof(char *)); // allocate char array
   while(!data.eof()) {
	   res[i] = (char*) calloc(256, sizeof(char));
	   if(!res[i]) { cout << "Cant allocate memory for res[" << i << "]"; break;}
	   data.getline(res[i], 256);
       i++;
	   lines ++;
   }
   cout << "Array" << endl;
   for (i = 0; i < lines; i++) {cout << res[i] << endl;}

   //create char vector
   vector<char *> v(res, res+lines);
   cout << endl << "Vector: " << endl;
   for (i = 0; i < v.size(); i++) { cout << v[i] << endl; }
}