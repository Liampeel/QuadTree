#include <stdbool.h>
#include "makeNodes.h"
#ifndef __VALUETREE__H
#define __VALUETREE__H

double dataFunction( double x, double y, int choice );

bool indicator( Node *node, double tolerance, int choice );

#endif
