// @(#)root/tmva $Id$
// Author: Saurav Shekhar 01/08/17

/*************************************************************************
 * Copyright (C) 2017, Saurav Shekhar                                    *
 * All rights reserved.                                                  *
 *                                                                       *
 * For the licensing terms see $ROOTSYS/LICENSE.                         *
 * For the list of contributors see $ROOTSYS/README/CREDITS.             *
 *************************************************************************/

////////////////////////////////////////////////////////////////////
//Testing RNNLayer forward pass for Reference implementation         //
////////////////////////////////////////////////////////////////////

#include <iostream>
#include "TMVA/DNN/Architectures/Cpu.h"
#include "TestRecurrentForwardPass.h"
#include "TMath.h"
//#include "gtest/gtest.h"
//#include "gmock/gmock.h"

using namespace TMVA::DNN;
using namespace TMVA::DNN::RNN;

//TEST(RNNTest, ForwardPass)
//{
// EXPECT_EQ(testForwardPass<TReference<double>>(3, 8, 100, 50), 0.0);
//}

int main() {

   using Scalar_t = Double_t;

   gRandom->SetSeed(12345);
   TCpu<double>::SetRandomSeed(gRandom->Integer(TMath::Limits<UInt_t>::Max()));

   std::cout << "Testing RNN Forward pass\n";

   // timesteps, batchsize, statesize, inputsize
   std::cout << testForwardPass<TCpu<Scalar_t>>(2, 1, 1, 3)  << "\n";
   //std::cout << testForwardPass<TCpu<Scalar_t>>(1, 8, 100, 50)  << "\n";
   //std::cout << testForwardPass<TCpu<Scalar_t>>(5, 9, 128, 64)  << "\n";

   return 0;
}
