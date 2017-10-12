#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

void multiply_matrices(MatrixXf &m1, MatrixXf &m2, MatrixXf &m3){
	
	int rows, cols;
	rows = m1.rows();
	cols = m2.cols();

	if (m1.cols() != m2.rows())
	{
		std::cout<< "The matrices can't be multiplied, check the dims"<<"\n";
		exit(1);
	}
	
	m3 = m1*m2;
}



int main(int argc, char const *argv[])
{
	// Eigen::MatrixXd m  = Eigen::MatrixXd::Random(3,3);
	// m =  (m + Eigen::MatrixXd::Constant(3,3,1.2))*50; // Constant(rows, cols, value)
	// std::cout << m << std::endl;

	
	// m3 = m*m1;
	// std::cout<< m.rows() << " " <<m.cols() << "\n";
	// std::cout << "Transpose of m " << m.transpose() << "\n";
	MatrixXf m = MatrixXf::Random(3,3);
	MatrixXf m1 = MatrixXf::Random(3,5);
	m = (m + MatrixXf::Constant(3,3,1.1))*50;
	m1 = (m1 + MatrixXf::Constant(3,5,1.2))*50;
	MatrixXf res(m.rows(), m1.cols());
	multiply_matrices(m, m1, res);
	std::cout << "Matrix multiplication: "<< res <<"\n";
	return 0;
}