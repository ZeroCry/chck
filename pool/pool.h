#ifndef __chck_pool__
#define __chck_pool__

#ifndef size_t
#  include <stddef.h> /* for size_t */
#endif

typedef struct _chckPool chckPool;

chckPool* chckPoolNew(const char *name, size_t memberSize);
void chckPoolFree(chckPool *pool);
void chckPoolFlush(chckPool *pool);
const char* chckPoolGetName(const chckPool *pool);
void* chckPoolAdd(chckPool *pool, size_t size);
void chckPoolRemove(chckPool *pool, void *ref);
void* chckPoolIter(const chckPool *pool, size_t *iter);

#endif /* __chck_pool__ */

/* vim: set ts=8 sw=3 tw=0 :*/