/*Tyler Allen
CS111
Lab 11-1
The user will enter 3 points of a triangle and the user will determine what kind of triangle it is */

#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

void showProgramInfo();
int getPoint(int &x, int y);
double getLength(int x, int y, int x1, int y1);
void getTriangle(double a, double b, double c);

int main(){
  int x;
  int y;
  int x1;
  int y1;
  int x2;
  int y2;
  double a;
  double b;
  double c;

  showProgramInfo();
  y  = getPoint(x, y);
  y1 = getPoint(x1, y1);
  y2 = getPoint(x2, y2);

  a  = getLength(x, y, x1, y1);
  b  = getLength(x, y, x2, y2);
  c  = getLength(x1, y1, x2, y2);
  getTriangle(a, b, c);
}
void showProgramInfo()
{
  cout<<"***************************************************************"<<endl;
  cout<<"This program will ask you to enter 3 points of a triangle and  "<<endl;
  cout<<"tell what kind of triangle it is. Please hit ENTER to continue."<<endl;
  cout<<"***************************************************************"<<endl;
  char h;
  cin.get(h);
}

int getPoint(int &x, int y)
{
  cout<<"Enter x coordinate: ";
  cin>>x;

  cout<<"Enter y coordinate: ";
  cin>>y;

  return y;
}

 double getLength(int x, int y, int x1, int y1)
{
  double xdiff=x1-x;
  double ydiff=y1-y;
  double a = sqrt((pow(xdiff, 2.0) + (pow(ydiff, 2.0))));
  return a;
}

void getTriangle(double a, double b, double c)
{
  string triangle;

  if(fabs(a-b)<.000000000001)
    {
      triangle="isosceles";
      if(fabs(c-b)<.0000000000001)
	triangle = "equilateral";
    }
  else if(fabs(a-c)<.000000000001)
{
  triangle="isosceles";
  if(fabs(c-b)<.0000000000001)
    triangle = "equilateral";
}

  else if(fabs(b-c)<.000000000001)
{
      triangle="isosceles";
  if(fabs(a-b)<.000000000001)
    triangle = "equilateral";
}
  else 
    triangle = "scalene";

  cout<<"The triangle is "<<triangle;
}
