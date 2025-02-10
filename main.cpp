#include <stdio.h>
#include <iostream>

template <typename T1, typename T2>
class MinClass {
public:
	T1 num1_;
	T2 num2_;

	MinClass(T1 num1, T2 num2) : num1_(num1), num2_(num2) {}

	T1 Min() {
		return static_cast<T1>(num1_ < num2_ ? num1_ : num2_);
	}
};

int main() {
	MinClass<int, int> minClass(1, 2);
	MinClass<double, double> minClass2(1.1, 2.2);
	MinClass<float, float> minClass3(1.1f, 2.2f);
	MinClass<double, int> minClass4(1, 2.2);
	MinClass<float, int> minClass5(1, 2.2f);
	MinClass<double, float> minClass6(1.1, 2.2f);

	printf("minClass: %d\n", minClass.Min());
	printf("minClass2: %f\n", minClass2.Min());
	printf("minClass3: %f\n", minClass3.Min());
	printf("minClass4: %f\n", minClass4.Min());
	printf("minClass5: %f\n", minClass5.Min());
	printf("minClass6: %f\n", minClass6.Min());


	return 0;
}

