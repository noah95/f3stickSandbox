/************************************************************************//**
 * @file    dac.h
 * @author  Noah Huetter
 * @version 
 * @date    2015-16-25
 * @brief   DAC-handling module
 ****************************************************************************/
 #ifndef dac_h
 #define dac_h

/****************************************************************************
 * INCLUDE FILES
 ****************************************************************************/
#include <stdint.h>
#include <stdbool.h>

/****************************************************************************
 * STRUCTURE DEFINITONS
 -----------------------------------------------------------------------*//**
 * @addtogroup IO
 * @{
 ****************************************************************************/
/****************************************************************************
 * EXPORTED DEFINITIONS
 ****************************************************************************/
#define DAC_OUTPUT_BUF_SIZE	1024


/***************************************************************************
 * EXPORTED TYPE DEFINITIONS
 ***************************************************************************/



/****************************************************************************
 * END OF GROUP STRUCTURE DEFINITONS
 -----------------------------------------------------------------------*//**
 * @}
 ****************************************************************************/
/****************************************************************************
 * EXPORTED DATA
 ****************************************************************************/



/***************************************************************************
 * EXPORTED FUNCTIONS
 ***************************************************************************/
void DAC_fInit(void);



 #endif
/****************************************************************************
 * END OF FILE
 ****************************************************************************/