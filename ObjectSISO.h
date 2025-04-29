#pragma once
//#include <cstdint>
//#include <string>

/**
 * @brief
 * Abstract class
 * No constructor
 * Virtual destructor
 * No executable code - No CPP file
 * Paret class for any object that has SISO characteristic.
 */
class ObjectSISO {
public:
    /**
     * @brief Simulates class/objects calculations. Takes 1 input and outputs 1 varariable - SISO.
     * @param x Input Value.
     * @return Output Value.
     */
    virtual double symuluj(double x) = 0;
    
    /**
     * @brief Virtual destructor.
     */
    virtual ~ObjectSISO() {}

};
