#ifndef ARMPMU_LIB_H
#define ARMPMU_LIB_H

#if defined(__GNUC__) && defined(__ARM_ARCH_7A__)
static inline uint32_t rdtsc(void)
{
        uint32_t r = 0;
        asm volatile("mrc p15, 0, %0, c9, c13, 0" : "=r"(r) );
        return r;
}
#elif defined(__GNUC__) && defined(__ARM_ARCH_8A__)
static inline uint64_t rdtsc(void)
{
	uint64_t r = 0;
	asm volatile("mrs %0, cntvct_el0" : "=r"(r) );
	return r;
}	
#error Unsupported architecture/compiler!
#endif

#endif /* ARMPMU_LIB_H */
