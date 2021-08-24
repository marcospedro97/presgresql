#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include "input_buffer.h"

int main()
{
  InputBuffer* input_buffer = new_input_buffer();
  for (;;)
  {
    printf("%s",input_buffer->buffer);
  }
}