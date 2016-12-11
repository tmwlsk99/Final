#include <iostream>
//linear regression
//gradient descent method
//neural network


class neural_network1
{
public:
	double a0 = 0;
	double b0 = 0;
	double getY0(const double X0)
	{
		//return a*X + b;

		return a0*X0 + b0;
	}

};

class neural_network2
{
public:
	double a1 = 0;
	double b1 = 0;
	double getY1(const double X1)
	{
		//return a*X + b;

		return a1*X1 + b1;
	}

};
const double learning_rate = 0.01; //experimentaly used
void main()
{

	neural_network1 my_n1;
	neural_network2 my_n2;
	double input[5] = { 0.1, 0.2, 0.3, 0.4, 0.5 };
	double output[5] = { 4,5,6,7,8 };
	//my_n2.getY1(my_n1.getY0(input[1]))

	for (int r = 0; r < 1000; r++)
	{

		for (int i = 0; i < 5; i++)
		{
			//X0=input  X1=my_n1.getY0(intput...)
			//a0 a1 X0 + a1 b0 + b1
			const double error = output[i] - my_n2.getY1(my_n1.getY0(input[i]));
			const double sqr_error = 0.5*error*error;
			//differentiate

			const double d_error_over_d_a0 = -error*my_n2.a1*input[i];
			const double d_error_over_d_b0 = -error*my_n2.a1;
			const double d_error_over_d_a1 = -error*(my_n1.a0*input[i] + my_n1.b0);
			const double d_error_over_d_b1 = -error*1.0;


			my_n1.a0 -= d_error_over_d_a0*learning_rate;
			my_n1.b0 -= d_error_over_d_b0*learning_rate;
			my_n2.a1 -= d_error_over_d_a1*learning_rate;
			my_n2.b1 -= d_error_over_d_b1*learning_rate;


		}
	}
	std::cout << " my_n2.getY1(my_n1.getY0(2.5))" << my_n2.getY1(my_n1.getY0(2.5)) << std::endl;

}
