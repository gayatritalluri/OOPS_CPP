#include<iostream>            //22A91A05G6 --> AEC--> CSE
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
		void modify(){
			breadth=5;
			height=2;
		}
		int Tri(){
		  return (breadth*height)/2;
		} 
};
int main(){
	Triangle t1(6,3);
	t1.modify();
	cout<<t1.Tri();
	return 0;
}
