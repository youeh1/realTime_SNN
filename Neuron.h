#ifndef __NEURON_H__
#define __NEURON_H__

#include<iostream>
#include<vector>

using namespace std;

class neuron{
public:
  neuron(){
    voltage.push_back(0);
    spikenum.push_back(0);
  };
  neuron(float v,int sn){
  voltage.push_back(v);
  spikenum.push_back(sn);
  }

  void updateVoltage(float v){
    voltage.push_back(v);
  }
  void updateSpike(int sn){
    spikenum.push_back(sn);
  }

  void getVoltage() const {
    std::cout<<"voltage: "<< *(voltage.end()-1)<<std::endl;}
  void getSpikenum() const {
    std::cout<<"spikes: "<< *(spikenum.end()-1)<<std::endl;}
private:
    vector<float> voltage;
    vector<int> spikenum;
};
#endif
