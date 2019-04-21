#ifndef __NEURON_H__
#define __NEURON_H__

#include"channels.h"
#include<iostream>
#include<vector>

using namespace std;

class neuron{
public:
  // constructor
  neuron();
  neuron(float v,int sn);

  // methods
  void updateVoltage(float v){
    voltages.push_back(v);
  }
  void updateSpike(int sn){
    spikenums.push_back(sn);
  }

  void getVoltage() const {
    std::cout<<"voltage: "<< *(voltages.end()-1)<<std::endl;}
  void getSpikenum() const {
    std::cout<<"spikes: "<< *(spikenums.end()-1)<<std::endl;}

  void membrane_voltage(float curr){
    voltage = *(voltages.end()-1);
    sodium = iNa_leak(voltage);
    potassium = iK_leak(voltage);
    dvdt = (curr-(sodium + potassium))/ci;
    voltage_new = voltage +dvdt*dt;

    updateVoltage(voltage_new);
  }


private:
    vector<float> voltages;
    vector<int> spikenums;
    float voltage;
    float sodium;
    float potassium;
    float dvdt;
    float voltage_new;
};

// constructor
neuron::neuron(){
  voltages.push_back(0);
  spikenums.push_back(0);
}

neuron::neuron(float v,int sn){
  voltages.push_back(v);
  spikenums.push_back(sn);
}





#endif
