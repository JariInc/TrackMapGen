#include "iracingbinarytelemetry.h"

FILE ibt_open(char filename[]) {
    FILE *file = fopen(filename, "rb");
    return file;
}

void ibt_read_headers(FILE fh) {
    fread(&ibt_header, 1, sizeof(ibt_header), fh);
    fread(&ibt_diskSubHeader, 1, sizeof(ibt_diskSubHeader), fh);
}
