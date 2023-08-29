#ifndef _STRING_H_
#define _STRING_H_

void *my_memchr(const void *dest, unsigned int value , unsigned int size) ;

int my_memcmp(const void *ptr1, const void *ptr2, unsigned int size) ;

void *my_memcpy(void *dest,void *source , unsigned int size ) ;

void *my_memmove(void *str1, const void *str2, int n) ;

void *my_memset(void *dest,unsigned char value,unsigned char size) ;

char *my_strcat(char *dest, const char *source );

int my_strlen( const char *str ) ;

char *my_strncat(char *dest, const char *source , unsigned int size);

char *my_strchr(const char *dest, unsigned int value ) ;

int my_strcmp(const char *ptr1, const char *ptr2) ;

int my_strncmp(const char *ptr1, const char *ptr2 , unsigned int size) ;

int my_strcoll(const char *ptr1, const char *ptr2) ;

char *my_strcpy(char *dest,const char *source ) ;

char *my_strncpy(char *dest,const char *source , unsigned int size ) ;

int my_strcspn(const char *dest,const char *source ) ;

char *my_strpbrk(const char *dest, const char *source ) ;

char *my_strrchr(const char *dest, unsigned int value ) ;

int my_strspn(const char *dest, const char *source ) ;

char *my_strstr(const char *dest, const char *source ) ;

char *my_strtok(char *dest, const char *source ) ;

int my_strxfrm(char *dest, const char *source , unsigned int size) ;


#endif // _STRING_H_
