#ifndef __CONSTANT_H__
#define __CONSTANT_H__

#include<stdio.h>

// global constants

// time (ms)
const float dt = 0.1;

// membrane capacitance (pF)
const float ci = 290.0; //(nF)

// nerst potential of each ion (mV)
const float ENa = 45.0;
const float Ek = -105.0;
const float EIh = -43.0;

// conductance of leak channels for resting membrane potential (nS)
const float gleakNa = 8.0;
const float gleakK = 15.0;

// conductance of Ih channels
const float gIh = 20.0;

// conductance of IA channels
const float gA1 = 1200;
const float gA2 = 7.5;

// conductance of K2 channels
const float gK2a = 39.0;
const float gK2b= 26.0;

// boltzmann steady state

// A channel
const float IA_in[3] = {-78.0,6.0,1};
const float IA1_ac[3] = {-60,-8.5,4};
const float IA2_ac[3] = {-36,-20,4};

// T channel
const float IT_ac[3] = {-57.0,-6.2,2};
const float IT_in[3] = {-81.0,4.0,1};

// HCN channel
const float Ih_ac[3] = {-75.0,5.5,1};

// K2 channel
const float IK2_in[3] = {-58.0,10.6,1};
const float IK2_ac[3] = {-43.0,-17.0,1};

#endif
