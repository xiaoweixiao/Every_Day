#include<iostream>
using namespace std;
template<class T> 
class Foo{
	T tVar;
public:
	Foo(T t) : tVar(t) { }
};
template<class T> class FooDerived :public Foo<T>
{
};
int main()
{
	FooDerived<int> d(5);
	return 0;
}