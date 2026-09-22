#include<iostream>
using namespace std;
class circle
{
	private:
		double radius();
		public:
			double compute_area()
			{
				return 3.14*radius*radius;
			}
};
int main()
{
	circle obj;
	obj.radius=1.5;
	cout<<"area is:"<<obj.compute_area();
	return 0;
}
