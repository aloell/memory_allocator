#include <stdio.h>

extern int mm_init (void);
extern void *mm_malloc (size_t size);
extern void mm_free (void *ptr);
extern int mm_check(void);
extern void mm_status(void);
// Extra credit
extern void* mm_realloc(void* ptr, size_t size);
