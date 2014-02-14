/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKPICO_VECTOR_H
#define _MOCKPICO_VECTOR_H

#include "pico_vector.h"

void Mockpico_vector_Init(void);
void Mockpico_vector_Destroy(void);
void Mockpico_vector_Verify(void);




#define pico_vector_init_IgnoreAndReturn(cmock_retval) pico_vector_init_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pico_vector_init_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, void* cmock_to_return);
#define pico_vector_init_ExpectAndReturn(vector, capacity, typesize, cmock_retval) pico_vector_init_CMockExpectAndReturn(__LINE__, vector, capacity, typesize, cmock_retval)
void pico_vector_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct pico_vector* vector, size_t capacity, size_t typesize, void* cmock_to_return);
typedef void* (* CMOCK_pico_vector_init_CALLBACK)(struct pico_vector* vector, size_t capacity, size_t typesize, int cmock_num_calls);
void pico_vector_init_StubWithCallback(CMOCK_pico_vector_init_CALLBACK Callback);
#define pico_vector_begin_IgnoreAndReturn(cmock_retval) pico_vector_begin_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pico_vector_begin_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct pico_vector_iterator* cmock_to_return);
#define pico_vector_begin_ExpectAndReturn(vector, cmock_retval) pico_vector_begin_CMockExpectAndReturn(__LINE__, vector, cmock_retval)
void pico_vector_begin_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, const struct pico_vector* vector, struct pico_vector_iterator* cmock_to_return);
typedef struct pico_vector_iterator* (* CMOCK_pico_vector_begin_CALLBACK)(const struct pico_vector* vector, int cmock_num_calls);
void pico_vector_begin_StubWithCallback(CMOCK_pico_vector_begin_CALLBACK Callback);
#define pico_vector_iterator_next_IgnoreAndReturn(cmock_retval) pico_vector_iterator_next_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pico_vector_iterator_next_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, struct pico_vector_iterator* cmock_to_return);
#define pico_vector_iterator_next_ExpectAndReturn(iterator, cmock_retval) pico_vector_iterator_next_CMockExpectAndReturn(__LINE__, iterator, cmock_retval)
void pico_vector_iterator_next_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct pico_vector_iterator* iterator, struct pico_vector_iterator* cmock_to_return);
typedef struct pico_vector_iterator* (* CMOCK_pico_vector_iterator_next_CALLBACK)(struct pico_vector_iterator* iterator, int cmock_num_calls);
void pico_vector_iterator_next_StubWithCallback(CMOCK_pico_vector_iterator_next_CALLBACK Callback);
#define pico_vector_push_back_IgnoreAndReturn(cmock_retval) pico_vector_push_back_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pico_vector_push_back_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, int cmock_to_return);
#define pico_vector_push_back_ExpectAndReturn(vector, data, cmock_retval) pico_vector_push_back_CMockExpectAndReturn(__LINE__, vector, data, cmock_retval)
void pico_vector_push_back_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct pico_vector* vector, void* data, int cmock_to_return);
typedef int (* CMOCK_pico_vector_push_back_CALLBACK)(struct pico_vector* vector, void* data, int cmock_num_calls);
void pico_vector_push_back_StubWithCallback(CMOCK_pico_vector_push_back_CALLBACK Callback);
#define pico_vector_pop_front_IgnoreAndReturn(cmock_retval) pico_vector_pop_front_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pico_vector_pop_front_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, void* cmock_to_return);
#define pico_vector_pop_front_ExpectAndReturn(vector, cmock_retval) pico_vector_pop_front_CMockExpectAndReturn(__LINE__, vector, cmock_retval)
void pico_vector_pop_front_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct pico_vector* vector, void* cmock_to_return);
typedef void* (* CMOCK_pico_vector_pop_front_CALLBACK)(struct pico_vector* vector, int cmock_num_calls);
void pico_vector_pop_front_StubWithCallback(CMOCK_pico_vector_pop_front_CALLBACK Callback);
#define pico_vector_clear_Ignore() pico_vector_clear_CMockIgnore()
void pico_vector_clear_CMockIgnore(void);
#define pico_vector_clear_Expect(vector) pico_vector_clear_CMockExpect(__LINE__, vector)
void pico_vector_clear_CMockExpect(UNITY_LINE_TYPE cmock_line, struct pico_vector* vector);
typedef void (* CMOCK_pico_vector_clear_CALLBACK)(struct pico_vector* vector, int cmock_num_calls);
void pico_vector_clear_StubWithCallback(CMOCK_pico_vector_clear_CALLBACK Callback);
#define pico_vector_destroy_Ignore() pico_vector_destroy_CMockIgnore()
void pico_vector_destroy_CMockIgnore(void);
#define pico_vector_destroy_Expect(vector) pico_vector_destroy_CMockExpect(__LINE__, vector)
void pico_vector_destroy_CMockExpect(UNITY_LINE_TYPE cmock_line, struct pico_vector* vector);
typedef void (* CMOCK_pico_vector_destroy_CALLBACK)(struct pico_vector* vector, int cmock_num_calls);
void pico_vector_destroy_StubWithCallback(CMOCK_pico_vector_destroy_CALLBACK Callback);
#define pico_vector_allocation_strategy_times2_IgnoreAndReturn(cmock_retval) pico_vector_allocation_strategy_times2_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void pico_vector_allocation_strategy_times2_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, void* cmock_to_return);
#define pico_vector_allocation_strategy_times2_ExpectAndReturn(vector, cmock_retval) pico_vector_allocation_strategy_times2_CMockExpectAndReturn(__LINE__, vector, cmock_retval)
void pico_vector_allocation_strategy_times2_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, struct pico_vector* vector, void* cmock_to_return);
typedef void* (* CMOCK_pico_vector_allocation_strategy_times2_CALLBACK)(struct pico_vector* vector, int cmock_num_calls);
void pico_vector_allocation_strategy_times2_StubWithCallback(CMOCK_pico_vector_allocation_strategy_times2_CALLBACK Callback);

#endif
