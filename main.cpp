#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int gta = 0;
  vector <int> vec(6); // Vector declaration.
  vec.size();
 
  cout << " " << endl;
  cout << "What is the first integer value?: ";
  cin >> vec.at(1);

  cout << " " << endl;
  cout << "What is the second integer value?: ";
  cin >> vec.at(2);

  cout << " " << endl;
  cout << "What is the third integer value?: ";
  cin >> vec.at(3);

  cout << " " << endl;
  cout << "What is the fourth integer value?: ";
  cin >> vec.at(4);

  cout << " " << endl;
  cout << "What is the fifth integer value?: ";
  cin >> vec.at(5);

  cout << " " << endl;

  if (vec.at(2) > vec.at(1))
  {
    gta = gta + 1;
  }

  if (vec.at(3) > vec.at(1))
  {
    gta = gta + 1;
  }

  if (vec.at(4) > vec.at(1))
  {
    gta = gta + 1;
  }

  if (vec.at(5) > vec.at(1))
  {
    gta = gta + 1;
  }

  if (gta == 0)
  {
    cout << "The first integer value has the greatest value." << endl;
  }
 
  if (gta == 1)
  {
    cout << "Only 1 integer value is greater than the first integer value." << endl;
  }

  if (gta > 1)
  {
    cout << gta << " Integer values are greater than the first integer value." << endl;
  }

  cout << " " << endl;
 
  return 0;
 
}




/*#include <vector>
#include <iostream>
using namespace std;

int usernum;

int main() {

vector <int> usernum (5);
cout << "what is the first Integer Value" << endl;
cin << usernum [5];

  
//cout << "First element:" << vec.front() << endl;
// If we want to determine the highest and lowest values in a vector
//const int highest = *max_element (values.begin(), values.end());
//const int lowest = *min_element (values.begin(), values.end()); 

  
return 0;
} */