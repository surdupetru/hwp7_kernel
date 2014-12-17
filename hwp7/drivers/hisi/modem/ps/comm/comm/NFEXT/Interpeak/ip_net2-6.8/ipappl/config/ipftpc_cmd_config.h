/*
 ******************************************************************************
 *                     HEADER FILE
 *
 *   Document no: @(#) $Name: VXWORKS_ITER18A_FRZ10 $ $RCSfile: ipftpc_cmd_config.h,v $ $Revision: 1.7 $
 *   $Source: /home/interpeak/CVSRoot/ipappl/config/ipftpc_cmd_config.h,v $
 *   $State: Exp $ $Locker:  $
 *
 *   INTERPEAK_COPYRIGHT_STRING
 *   Design and implementation by Ulf Olofsson <ulf@interpeak.se>
 ******************************************************************************
 */
#ifndef IPFTPC_CMD_CONFIG_H
#define IPFTPC_CMD_CONFIG_H

/*
 ****************************************************************************
 * 1                    DESCRIPTION
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 2                    CONFIGURATION
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 3                    INCLUDE FILES
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 4                    DEFINES
 ****************************************************************************
 */

/* Command buffer size */
#define IPFTPC_CMDBUFSIZE IP_PATH_MAX

/* Max no of arguments for FTP command */
#define IPFTPC_MAX_ARGS 10

/* Max length of username and password */
#define IPFTPC_MAX_USERNAME 32
#define IPFTPC_MAX_PASSWORD 32

/* Argument delimiters */
#define IPFTPC_WHITESPACE " \t\r\n"

/* Version */
#define IPFTPC_VERSIONSTR "1.1.3"

/*
 ****************************************************************************
 * 5                    TYPES
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 6                    FUNCTIONS
 ****************************************************************************
 */

#endif

/*
 ****************************************************************************
 *                      END OF FILE
 ****************************************************************************
 */
