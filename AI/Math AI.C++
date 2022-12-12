#include <iostream>
#include <string>
#include <math/math.h>
#include <ml/ml.h>
#include <net/net.h>

using namespace std;
using namespace math;
using namespace ml;
using namespace net;

int main()
{
    // Create a new instance of the MathSolver class
    MathSolver solver;

    // Train the MathSolver using a dataset of math problems and solutions
    solver.train("datasets/math_problems.txt");

    // Prompt the user for a math problem to solve
    cout << "Enter a math problem (e.g. 2 + 2): ";

    string input;
    getline(cin, input);

    // Use the MathSolver to solve the math problem
    double result = solver.solve(input);

    // If the MathSolver was unable to solve the problem, use the internet to find the solution
    if (isnan(result))
    {
        cout << "I'm sorry, but I'm unable to solve that problem. Let me look it up on the internet..." << endl;

        // Use the NetClient to search the internet for the solution to the math problem
        NetClient client;
        string solution = client.search(input);

        cout << "According to the internet, the solution is: " << solution << endl;
    }
    else
    {
        cout << "The result is: " << result << endl;
    }

    return 0;
}

