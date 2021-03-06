#pragma once
#include "Layer.h"
#include "Matrix.h"
#include "DEFINE_INT.h"
class NeuralNetwork
{
private:
  INT_MNC i_X;
  INT_MNC i_Y;
  INT_MNC i_Z;

public:
  unsigned char layer_count;
  Layer **layers = nullptr;
  void init(const INT_MNC& inX, const INT_MNC& inY, const INT_MNC& inZ, uint16_t l_c);
  ~NeuralNetwork();
  Matrix3D guess(Matrix3D &in);
};
