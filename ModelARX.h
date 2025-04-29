// Updated to:
// Instruction 1 - WORKING ON
#pragma once

#include <iostream>
#include <queue>
#include <random>
//#include <fstream>
//#include <cstring>
#include <cassert>

#include "ObjectSISO.h"

using namespace std;


/*  * @brief Class of model ARX (AutoRegressive with eXogenous inputs). The PLANT of the Automatic Control System*/
class ModelARX : public ObjectSISO {
private:

		
/** @brief Numerator polynomial B. */
    vector<double> numeratorB;
    
/** @brief Denominator polynomial A. */
    vector<double> denominatorA;
    
/** @brief Transport Delay. */
    int transportDelay;
    
/** @brief Standard Deviation. */
    double standardDeviation;
    
/** @brief Two-way queue: Input Values + Transport Delay. */
    deque<double> queueIN;
    
/** @brief Two-way queue: Output Values.*/
    deque<double> queueOUT;

public:
    /**
     * @brief Constructor of class ModelARX.
     * @param numeratorB Numerator Polynomial B.
     * @param denominatorA Denominator Polynomial A.
     * @param transportDelay Transport Delay.
     * @param standardDeviation Standard deviation.
     */
    ModelARX(const vector<double>& numeratorB, const vector<double>& denominatorA, int transportDelay, double standardDeviation);


// Setters
    /**
     * @brief Sets Numerator Polynomial B.
     * @param numeratorB Numerator Polynomial B.
     */
    void set_NumeratorB(const vector<double>& numeratorB);

    /**
     * @brief Sets Denominator Polynomial A.
     * @param denominatorA Denominator Polynomial A.
     */
    void set_DenominatorA(const vector<double>& denominatorA);

    /**
     * @brief Sets Transport Delay.
     * @param transportDelay  Transport Delay.
     */
    void set_TransportDelay(int transportDelay);

    /**
     * @brief Sets Standard Deviation.
     * @param standardDeviation Standard Deviation.
     */
    void set_StandardDeviation(double standardDeviation);    


//Methods
    double simulate(double u) override;    
};