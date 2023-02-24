int getUserNum() {
	int number;

	std::cin >> number;

	return number;
}

int calculate(int a, int b) {
	return (a * a) + (a * b) + (-b * a) + (-b * b);
}
