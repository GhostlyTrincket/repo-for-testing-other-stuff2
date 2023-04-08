#include <iostream>
#include <iomanip>
#include "userInput.h"

constexpr double calcAvrg(double score, double examsByYear) {
//formula: (value1 + value2 + value3 + valueN) / N
	return score / examsByYear;
}

double getTotalGrade(int testAmount) {
	double totalScore = 0;

	for(int currTest = 1; currTest <= testAmount; ++currTest) {
		std::cout << "Your grade in the " << currTest << "th test.\n";
		double testScore = getScore();

		totalScore += testScore;
	}

	return totalScore;
}

void showScore(double gradeSum, double averagScore) {
	std::cout << "With the given score, your grade is: " << gradeSum << '\n';
	std::cout << std::setprecision(2);
	std::cout << "With a average of " << averagScore << '\n';
}

int init() {
//i cound't reduce this function to less than 10 lines, and this version is already trimmed...
	while(true) {
		std::cout << "Would you say to me how many tests will happen at your school?\n";
		int exams = getTest();

		if(exams == 0) {
			std::cout << "Error. It is impossible to have no exams in a letive year.\n";
			return 1;
		}

		double gradeSum = getTotalGrade(exams);
		double finalScore = calcAvrg(gradeSum,exams);

		showScore(gradeSum,finalScore);

		std::cout << "Would you like to exit? [y/n].\n";
		char exitChoice = getInput();

		if(exitChoice == 'y') {
			return 0;
		}
	}
	return 0;
}
