#ifndef INPUT_BUFFER_H_
#define INPUT_BUFFER_H_

typedef struct {
  char* buffer;
  size_t buffer_length;
  ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer();

#endif