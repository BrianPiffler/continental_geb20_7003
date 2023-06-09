#ifndef __S2_CG_EIB_IO_V4_1_H__
#define __S2_CG_EIB_IO_V4_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_CG_EIB_IO_V4_1_TRIGGER_DIG_INPUT 0


/*
* ANALOG_INPUT
*/


#define __S2_CG_EIB_IO_V4_1_RX_BUFFER_INPUT 0
#define __S2_CG_EIB_IO_V4_1_RX_BUFFER_MAX_LEN 255
CREATE_STRING_STRUCT( S2_CG_EIB_IO_V4_1, __RX, __S2_CG_EIB_IO_V4_1_RX_BUFFER_MAX_LEN );
#define __S2_CG_EIB_IO_V4_1_EIB_CMD_BUFFER_INPUT 1
#define __S2_CG_EIB_IO_V4_1_EIB_CMD_BUFFER_MAX_LEN 255
CREATE_STRING_STRUCT( S2_CG_EIB_IO_V4_1, __EIB_CMD, __S2_CG_EIB_IO_V4_1_EIB_CMD_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_CG_EIB_IO_V4_1_TX_STRING_OUTPUT 0
#define __S2_CG_EIB_IO_V4_1_EIB_FB_STRING_OUTPUT 1


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/
CREATE_INTARRAY1D( S2_CG_EIB_IO_V4_1, __SEND_ADR, 100 );;
CREATE_INTARRAY1D( S2_CG_EIB_IO_V4_1, __POLL_ADR, 50 );;
CREATE_INTARRAY1D( S2_CG_EIB_IO_V4_1, __IN, 130 );;


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_CG_EIB_IO_V4_1_MSG_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_CG_EIB_IO_V4_1, __MSG, __S2_CG_EIB_IO_V4_1_MSG_STRING_MAX_LEN );
#define __S2_CG_EIB_IO_V4_1_SEND_PARM_ARRAY_NUM_ELEMS 100
#define __S2_CG_EIB_IO_V4_1_SEND_PARM_ARRAY_NUM_CHARS 28
CREATE_STRING_ARRAY( S2_CG_EIB_IO_V4_1, __SEND_PARM, __S2_CG_EIB_IO_V4_1_SEND_PARM_ARRAY_NUM_ELEMS, __S2_CG_EIB_IO_V4_1_SEND_PARM_ARRAY_NUM_CHARS );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_CG_EIB_IO_V4_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __WAITING;
   unsigned short __ACTION;
   unsigned short __PROC_CMD;
   unsigned short __PROC_RX;
   unsigned short __NAK_COUNT;
   unsigned short __SEND_IN;
   unsigned short __SEND_OUT;
   unsigned short __POLL_IN;
   unsigned short __POLL_OUT;
   DECLARE_INTARRAY( S2_CG_EIB_IO_V4_1, __SEND_ADR );
   DECLARE_INTARRAY( S2_CG_EIB_IO_V4_1, __POLL_ADR );
   DECLARE_INTARRAY( S2_CG_EIB_IO_V4_1, __IN );
   DECLARE_STRING_STRUCT( S2_CG_EIB_IO_V4_1, __MSG );
   DECLARE_STRING_ARRAY( S2_CG_EIB_IO_V4_1, __SEND_PARM );
   DECLARE_STRING_STRUCT( S2_CG_EIB_IO_V4_1, __RX );
   DECLARE_STRING_STRUCT( S2_CG_EIB_IO_V4_1, __EIB_CMD );
};

START_NVRAM_VAR_STRUCT( S2_CG_EIB_IO_V4_1 )
{
};

DEFINE_WAITEVENT( S2_CG_EIB_IO_V4_1, WAIT_CMD );
DEFINE_WAITEVENT( S2_CG_EIB_IO_V4_1, WAIT_RX );


#endif //__S2_CG_EIB_IO_V4_1_H__

