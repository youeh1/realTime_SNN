#include<stdio.h>
#include<stdlib.h>
#include"constants.h"
#include<iostream>

#include"Neuron.h"

using namespace std;




int main(void){

    neuron facial = neuron(-70.0,20);
    neuron facial2;

    facial.getVoltage();
    facial.getSpikenum();

    cout<<"excitatory inputs"<<endl;
    facial.updateVoltage(-20.0);
    facial.updateSpike(30);

    facial.getVoltage();
    facial.getSpikenum();

    facial2.getVoltage();
    facial2.getSpikenum();

    facial2.updateVoltage(-5.0);
    facial2.updateSpike(8);

    facial2.getVoltage();
    facial2.getSpikenum();
  return EXIT_SUCCESS;
}
