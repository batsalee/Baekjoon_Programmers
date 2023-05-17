#include <iostream>

int main() {
	std::string subject_name;
	double credit;
	std::string grade;

	double sum_credit = 0, sum_results = 0;
	for (int i = 0; i < 20; i++) {
		std::cin >> subject_name >> credit >> grade;
		if(grade != "P") sum_credit += credit;

		if (grade == "A+") sum_results += (credit * 4.5);
		else if (grade == "A0") sum_results += (credit * 4.0);
		else if (grade == "B+") sum_results += (credit * 3.5);
		else if (grade == "B0") sum_results += (credit * 3.0);
		else if (grade == "C+") sum_results += (credit * 2.5);
		else if (grade == "C0") sum_results += (credit * 2.0);
		else if (grade == "D+") sum_results += (credit * 1.5);
		else if (grade == "D0") sum_results += (credit * 1.0);		
	}	
	
	std::cout << std::fixed;
	std::cout.precision(6);
	std::cout << (double)sum_results / sum_credit;

	return 0;
}