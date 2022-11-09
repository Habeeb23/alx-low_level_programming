#include "main.h"
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

<<<<<<< HEAD
		unsigned int i;



			for (i = 0; i < n; i++)

						*(dest + i) =  *(src + i);



				return (dest);

}
=======
	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);
>>>>>>> f3458fa02a67d6b33e8c9608d935eaa0e1ddd071

	return (dest);
}
