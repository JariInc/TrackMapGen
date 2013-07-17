#ifndef IRACINGBINARYTELEMETRY_H
#define IRACINGBINARYTELEMETRY_H

#include <stdio.h>
#include "irsdk_defines.h"

irsdk_header ibt_header;
irsdk_diskSubHeader ibt_diskSubHeader;

FILE ibt_open(char filename[]);
void ibt_read_headers(FILE fh);

#endif // IRACINGBINARYTELEMETRY_H
