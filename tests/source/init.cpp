#include <testclass.hpp>
#include <catch.hpp>

Complex<int> x { 10, 15 };
Complex<int> y { 2 , 5 };
Complex<int> comp{};

SCENARIO ("constructorTest"){
	double Real = x.getReal();
	double Imag = x.getIm();
	REQUIRE (Real == 10);
	REQUIRE (Imag == 15);
}

SCENARIO ("Addition"){
	comp.add(x,y);
	double Real = comp.getReal();
	double Imag = comp.getIm();
	REQUIRE (Real == 12);
	REQUIRE (Imag == 20);
}

SCENARIO ("Sub"){
	comp.sub(x,y);
	double Real = comp.getReal();
	double Imag = comp.getIm();
	REQUIRE (Real == 8);
	REQUIRE (Imag == 10);
}

SCENARIO ("MultiNum"){
	comp.mult(x,2)
	double Real = comp.getReal();
	double Imag = comp.getIm();
	REQUIRE (Real == 20);
	REQUIRE (Imag == 30);
}

SCENARIO ("DivNum"){
	comp.div(x,5);
	double Real = comp.getReal();
	double Imag = comp.getIm();
	REQUIRE (Real == 2);
	REQUIRE (Imag == 3);
}

SCENARIO ("DivNumZero","[!mayfail]"){
	comp.div(x,0);
	double Real = comp.getReal();
	double Imag = comp.getIm();
	REQUIRE (Real == 0);
	REQUIRE (Imag == 0);
}

SCENARIO("MultiComplex"){
	comp.multC(x,y)
	double Real = comp.getReal();
	double Imag = comp.getIm();
	REQUIRE (Real == -55);
	REQUIRE (Imag == 80);
}
