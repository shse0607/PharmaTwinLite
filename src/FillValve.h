#ifndef FILLVALVE_H
#define FILLVALVE_H 

class FillValve 
{
private: // Private member variables
  bool openState;
  double flowRate;

public: // Public member functions
  FillValve(double flow); // initialize fill valve with specified flow rate

    void open(); // open the fill valve

    void close(); // close the fill valve

    bool isValveOpen() const; // check if the valve is open

    double getFlowRate() const; // get the flow rate of the valve
};

#endif // FILLVALVE_H