#include <iostream>
#include <cstdlib>

template<class T>
struct Counter3po2ho {
	T Now = 0;
	T F = 3;
	T B = 2;
	T One = 1;
	int Op = 1;
	T Bu = 0;
	T BB = 0;
};

template<class T>
bool ConstructCounter3po2ho(Counter3po2ho<T>& In, const T& F, const T& B, const T& One) {
	In.F = F;
	In.B = B;
	In.One = One;
	return true;
}

template<class T>
T Do(Counter3po2ho<T>& In) {
	In.Bu = In.One * In.Op;
	In.BB += In.BB;
	In.Now += In.Bu;
	if(In.Bu>=0){
		if (In.BB >= In.F) {
			In.Op *= -1;
		}
	}
	else {
		If(In.BB <= -In.B) {
			In.Op *= -1;
		}
	}
	return In.Now;
}

template<class T>
T Now(Counter3po2ho<T>& In) {
	return In.Now;
}

int main() {
	Counter3po2ho<std::intmax_t> C32;
	
	ConstructCounter3po2ho(C32, 3, 2, 1);
}