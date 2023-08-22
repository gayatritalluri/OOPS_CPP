#include<iostream>
using namespace std;
class Triangle{
	private:
		int breadth;
	public:
		int height;
		Triangle(int b,int y){
			this->breadth=b;
			this->height=y;
		}
		int Tri(){
		  return (breadth*height)/2;
		} 
};
int main(){
	Triangle t1(6,3);
	cout<<t1.Tri();
	return 0;
}
