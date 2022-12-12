#include <iostream>
#include <string>
#include <nlp/nlp.h>

using namespace std;
using namespace nlp;

int main()
{
    // Create a new instance of the NLProcessor class
    NLProcessor processor;

    // Train the NLProcessor on a dataset of common questions and answers
    processor.train("datasets/faq.txt");

    string input;

    cout << "AI Chatbot: Hi there! What can I help you with today?" << endl;

    getline(cin, input);

    // Use the NLProcessor to process the user's input and generate a response
    string response = processor.process(input);

    cout << "AI Chatbot: " << response << endl;

    return 0;
}