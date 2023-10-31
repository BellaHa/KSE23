#pragma once
#include <vector>

enum DATATYPE { Social, Sensor };
enum ALG {Alg1, Alg2, ream, SGr, SampleRstream, Tang, Tang2, eApproPlush, Testmpi, DS, RS, Gr };

class Constants {
public:
  Constants();
  ~Constants();

  static ALG ALGORITHM;
  static DATATYPE DATA;
  static int NUM_THREAD;
  static double BUDGET;
  static int K;
  static int M;
  static double EPS;
  static double EPS_TAG;
  static double ALPHA;
  static double BETA;
  static double RHO;
  static double DELTA;         // for streaming algorithm
  static int NO_DENOISE_STEPS; // steps for eps' = 0 reach epsilon
};
