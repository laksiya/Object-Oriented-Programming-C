#pragma once
class Dummy {
public:
	int *num;
	Dummy() {
		num = new int(0);
	}

	Dummy(const Dummy &a):Dummy() {
		*num = *a.num;
	}
	
	~Dummy() {
		delete num;
	}
	Dummy &operator=(Dummy a) {
		*num = *a.num;
		return *this;
	}
};


void dummyTest();