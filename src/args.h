#ifndef ARGS_H
#define ARGS_H
#include <stdio.h>
#include <getopt.h>
#include "pear.h"
#include "../include/pear/pear.h"

/** @file args.h
    @brief Header file for command-line arguments

    Header file containing the data structure that is used for storing the
    user-defined command-line arguments */

/** @brief User-defined arguments data structure
  *
  * Contains all values of optional and mandatory arguments entered
  * by the user when executing PAIR. It also contains default values
  * for the parameters that were not specified.
  */
#include "user_args.h"

void usage (void);
int decode_switches (int argc, char * argv[], struct user_args * sw);
#endif
