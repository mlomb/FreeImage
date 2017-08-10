#ifndef ANDROID_SWAB_H
#define ANDROID_SWAB_H

// Missing swab function in Android
#if ANDROID
	static void swab(const void *from, void *to, ssize_t n)
	{
		if (n < 0)
			return;

		for (ssize_t i = 0; i < (n / 2) * 2; i += 2)
		{
#ifdef __arch__swab16
			*((uint16_t*)to + i) = __arch__swab16(*((uint16_t*)from + i));
#else
			uint16_t val = *((uint16_t*)from + i);
			uint16_t hi = (val & 0xFF) << 8;
			uint16_t lo = (val >> 8) & 0xFF;
			*((uint16_t*)to + i) = (hi | lo);
#endif
		}
	}
#endif

#endif