#include<iostream>
using namespace std;
class rational
{
	
public:
	int p, q;
	rational(int m = 0, int n = 0)
	{
		p = m;
		q = n;
	}
	rational operator+(rational r2)
	{
		rational t;
		t.p = this->p * r2.q + r2.p * this->q;
		t.q = this->q * r2.q;
		return t;
	}
	friend ostream& operator<<(ostream& out, rational r);
};
ostream& operator<<(ostream& out, rational r)
{
	out << r.p << "/" << r.q << endl;
	return out;
}
int main()
{
	rational r1;
	rational r2;
	cout << "enter the rational number"<<endl;
	cin >> r1.p >> r1.q;
	cin >> r2.p >> r2.q;
	rational r3 = r1+r2;
	cout << " sum of " << r1.p << "/" << r1.q << endl;
	cout<<" and "<<r2.p<<"/"<<r2.q<<endl;
	cout << r3<<endl;
}