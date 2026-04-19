#include "Counter.h"

Counter::Counter(int startValue) {
	value = startValue;
}

void Counter::increment() {
	value++;
}

void Counter::decrement() {
	value--;
}

int Counter::get_value() const {
	return value;
}