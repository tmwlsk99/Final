#include <iostream>
#include <time.h>
//linear regression
//gradient descent method


class interpolation
{
public:
	float a = 3;
	float b = 1;
	float c = 1;
	float getY(const float X)
	{
		//return a*X + b;

		return a*X*X + b*X + c;
	}

};
const float learning_rate = 0.000000000000000000000000000000001; //experimentaly used
void main()
{
	float rand_data[100000];
	for (int j = 0; j < 100000; j++)
	{
		rand_data[j] = j;
	}
	float result_data[100000];
	for (int k = 0; k < 100000; k++)
	{
		result_data[k] = 3.0*rand_data[k] * rand_data[k] + rand_data[k] + 1 + rand() / RAND_MAX;
	}
	interpolation study;



	for (int i = 0; i < 100000; i++)
	{

		const float error = study.getY(rand_data[i]) - result_data[i];
		const float sqr_error = error*error;
		//differentiate
		/*	const double d_error_over_d_a = 2.0*-error*study_time[i];
		const double d_error_over_d_b = 2.0*-error*1.0;*/
		const float d_error_over_d_a = 2.0*-error*rand_data[i] * rand_data[i];
		const float d_error_over_d_b = 2.0*-error*rand_data[i];
		const float d_error_over_d_c = 2.0*-error*1.0;

		//study.a -= d_error_over_d_a*learning_rate;
		//study.b -= d_error_over_d_b*learning_rate;
		study.a -= d_error_over_d_a*learning_rate;
		study.b -= d_error_over_d_b*learning_rate;
		study.c -= d_error_over_d_c*learning_rate;
		std::cout << study.a << " " << study.b << " " << study.c << std::endl;

	}


	std::cout << "if x value is 2.5 =" << study.getY(2.5) << std::endl;
}
