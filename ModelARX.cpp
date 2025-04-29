#include "ModelARX.h"
#include "m_Define.h"

using namespace std;


ModelARX::ModelARX(
  const vector<double>& denominatorA,
  const vector<double>& numeratorB, 
  int transportDelay = 1, 
  double standardDeviation = 0.0
) 
{
    set_TransportDelay(transportDelay);       
    set_NumeratorB(numeratorB);                   
    set_DenominatorA(denominatorA);              
    set_StandardDeviation(standardDeviation); 
}


void ModelARX::set_NumeratorB(const vector<double>& numeratorB) {
    this->numeratorB = numeratorB; // inserting values into atribute (vector)
    queueIN.resize(numeratorB.size() + transportDelay, 0);
}


void ModelARX::set_DenominatorA(const vector<double>& denominatorA) {
    this->denominatorA = denominatorA; // inserting values into atribute (vector)
    queueOUT.resize(denominatorA.size() + 1, 0);
}


void ModelARX::set_TransportDelay(int transportDelay) {
    if (transportDelay <= 0)
        cerr << "Non-positive transport delay";
    else
        this->transportDelay = transportDelay;
}


void ModelARX::set_StandardDeviation(double standardDeviation) {
    if (standardDeviation < 0.0)
        cerr << "Negative value for standard deviation";
    else
        this->standardDeviation = standardDeviation;
}



double ModelARX::simulate(double u) {};

