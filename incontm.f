c ******************************************************************************
c A library that enables the use of the <std:vector> C++ construct in Fortran.
c Ioannis Nompelis <nompelis@nobelware.com>
c ******************************************************************************

      MODULE INC_Fortran
      Implicit None

      Real*4,external :: inc_float_get
      Real*8,external :: inc_double_get
      Integer*4,external :: inc_int_get
      Integer*8,external :: inc_long_get


      END MODULE


