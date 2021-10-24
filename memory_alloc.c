#include <unistd.h>
int brk(void *end_data_segment);
void *sbrk(intptr_t increment);
