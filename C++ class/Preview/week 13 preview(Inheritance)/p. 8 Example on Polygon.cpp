#include <iostream>
using namespace std;
class CPolygon 
{
	protected:
		int width, height;
	public:
		void set_values (int a, int b) 
		{ 
			width = a;
			height = b; 
		}
		int area () 
		{ 
			return (width * height); 
		}
};
class CRectangle : public CPolygon 
{
	public:
		int x;
};
class CTriangle : public CPolygon 
{
	public:
		int area () 
		{ 
			return (width * height / 2); 
		}
};
int main ( )
{
	CRectangle rect;
	CTriangle trgl;
	rect.set_values (4, 5);
	trgl.set_values (4, 5);
	cout << rect.area() << endl;
	cout << trgl.area() << endl;
	cout << (rect.area() + trgl.area()) << endl;
}
