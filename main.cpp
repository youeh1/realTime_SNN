#include<stdio.h>
#include<stdlib.h>
#include"constants.h"
#include<iostream>
#include"channels.h"
#include<fstream>

// #include"Neuron.h"

using namespace std;


// 0.1ms timestep simulation
// injection current update?

int main(void){

  int stimtime = 1000/dt; // 1000ms dt =0.1
  float *voltage = new float[stimtime];
  float injection,dvdt,iK,iNa;
  voltage[0] = -72.0;

  // writing a txt file so that julia can read this file to plot a graph

  ofstream data("data.txt",ios::out);

  for (int i=0;i<stimtime-1;i++){

    if(i>2000 && i<5000){
      injection = 100.0;
    }
    else{
      injection = 0.0;
    }
    iNa = iNa_leak(voltage[i]);
    iK = iK_leak(voltage[i]);

    dvdt = (injection -(iNa+iK))/ci;

    voltage[i+1] = voltage[i] + dvdt*dt;
    cout<<voltage[i];
    data<<voltage[i]<<endl;


  }
  data<<endl;
  data.close();
  delete[] voltage;

  cout<<"now reading the data.bin"<< sizeof(voltage)<<endl;




  return EXIT_SUCCESS;
}
