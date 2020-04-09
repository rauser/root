# Copyright (C) 1995-2019, Rene Brun and Fons Rademakers.
# All rights reserved.
#
# For the licensing terms see $ROOTSYS/LICENSE.
# For the list of contributors see $ROOTSYS/README/CREDITS.

############################################################################
# CMakeLists.txt file for building ROOT hist/unfold package
############################################################################

ROOT_STANDARD_LIBRARY_PACKAGE(Unfold
  HEADERS
    TUnfold.h
    TUnfoldBinning.h
    TUnfoldBinningXML.h
    TUnfoldDensity.h
    TUnfoldSys.h
  SOURCES
    src/TUnfoldV17.cxx
    src/TUnfoldBinningV17.cxx
    src/TUnfoldBinningXMLV17.cxx
    src/TUnfoldDensityV17.cxx
    src/TUnfoldSysV17.cxx
  DICTIONARY_OPTIONS
    -writeEmptyRootPCM
  DEPENDENCIES
    Hist
    XMLParser
    Matrix
)
