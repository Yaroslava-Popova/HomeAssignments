 /* Popova Yaroslava 
   st132757@student.spbu.ru
*/


#include <iostream>
#include <fstream>

int main() {
     std::ifstream infile;
     std::ofstream outfile;
     std::string filename;
     
     std::cout<<"Write file name" << std::endl;
     std::cin>>filename;

     infile.open(filename, std::ios::binary|std::ios::in);
     char buffer;

     infile.seekg (0, infile.end);
     int size = infile.tellg();
     infile.seekg (0, infile.beg);

     char* arr = new char [size];
     outfile.open ("output_"+filename, std::ios::binary|std::ios::out);

     for (int i = 0; i < size; ++i)
     {
       infile.read((char*)&buffer,sizeof(buffer));
       arr[i] = buffer;
     }

     char temporary;
     for( int i = 0; i < (size / 2); ++i)
     {
       temporary = arr[i];
       arr[i] = arr[size - 1 - i];
       arr[size - 1 -i] = temporary; 
     }

     outfile.write(arr, size);
     delete[] arr;

     infile.close();
     outfile.close();

     return 0;  
}
