#ifndef STORAGE_VERSION_ENTRY
#define STORAGE_VERSION_ENTRY(X)
#endif

#ifndef STORAGE_VERSION_LAST
#define STORAGE_VERSION_LAST(X) STORAGE_VERSION_ENTRY(X)
#endif

STORAGE_VERSION_ENTRY(1)
STORAGE_VERSION_ENTRY(2)
STORAGE_VERSION_ENTRY(3)
STORAGE_VERSION_ENTRY(4)
STORAGE_VERSION_ENTRY(5)
STORAGE_VERSION_LAST(6)

#undef STORAGE_VERSION_ENTRY
#undef STORAGE_VERSION_LAST
