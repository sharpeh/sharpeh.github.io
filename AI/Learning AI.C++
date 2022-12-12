#include <iostream>
#include <vector>

#include "Eigen/Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;

// This function trains a linear regression model on the given data
void train_model(const MatrixXd& X, const VectorXd& y) {
  // Use the normal equation to find the optimal values of the model's parameters
  VectorXd theta = (X.transpose() * X).inverse() * X.transpose() * y;

  // Print the model's parameters to the console
  std::cout << "Theta: " << theta << std::endl;
}

int main() {
  // Load the data
  MatrixXd X = MatrixXd::Random(100, 3);
  VectorXd y = VectorXd::Random(100);

  // Train the model on the data
  train_model(X, y);

  return 0;
}
