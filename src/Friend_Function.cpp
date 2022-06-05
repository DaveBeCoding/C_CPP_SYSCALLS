#include <iostream>

class Reality {
private:
	int a;

public:
	Reality() { a = 0; }
	friend class Perspective; // Friend Class
};

class Perspective {
private:
	int b;

public:
	void showA(Reality& x)
	{
		// Since "Perspective" is friend of "Reality", it can access
		// private members of "Reality"
		std::cout << "Reality::a=" << x.a;
	}
};

int main()
{
	Reality a;
	Perspective b;
	b.showA(a);
	return 0;
}

