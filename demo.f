
      Program main

      Use INC_Fortran

      Implicit None
      Real*4 :: r
      Real*8 :: d
      integer*4 :: i
      integer*8 :: l
      Integer*4 :: ihandle,index


      call inc_double_init( 10 )
      ihandle = 1
      d = 1.0d0
      call inc_double_store( ihandle, d )
      PRINT*,'Double stored: ',d
      d = 2.0d0
      PRINT*,'Double changed: ',d
      index = 0
      d = inc_double_get( ihandle, index )
      PRINT*,'Double retrieved: ',d
      call inc_double_dump()

      call inc_float_init( 10 )
      ihandle = 1
      r = 1.0
      call inc_float_store( ihandle, r )
      PRINT*,'Float stored: ',r
      r = 2.0
      PRINT*,'Float changed: ',r
      index = 0
      r = inc_float_get( ihandle, index )
      PRINT*,'Float retrieved: ',r
      call inc_float_dump()

      call inc_int_init( 10 )
      ihandle = 1
      i = 100
      call inc_int_store( ihandle, i )
      PRINT*,'Int stored: ',i
      i = 200
      PRINT*,'Int changed: ',i
      index = 0
      i = inc_int_get( ihandle, index )
      PRINT*,'Int retrieved: ',i
      call inc_int_dump()

      call inc_long_init( 10 )
      ihandle = 1
      l = 10000
      call inc_long_store( ihandle, l )
      PRINT*,'Long stored: ',l
      l = 20000
      PRINT*,'Long changed: ',l
      index = 0
      l = inc_long_get( ihandle, index )
      PRINT*,'Long retrieved: ',l
      call inc_long_dump()


      end

