#include <stdio.h>
#include "String.h"

void *my_memchr(const void *dest, unsigned int value , unsigned int size)
{
    char *temp_ptr=dest ;
    unsigned int i ;

    if( (NULL == dest)   )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        for( i=0 ; i<size ; i++)
        {
            if( *temp_ptr == value )
            {
                return temp_ptr  ;
            }
            else
            {
                temp_ptr++ ;
            }
        }

    }
    return 0 ;
}


int my_memcmp(const void *ptr1, const void *ptr2, unsigned int size)
{
    unsigned char *temp_ptr1=ptr1 ;
    unsigned char *temp_ptr2=ptr2 ;
    unsigned int i , returnval=0 ;

    if( (NULL == ptr1)  ||  (NULL==ptr2) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
       if( temp_ptr1 == temp_ptr2)
       {
           returnval=0 ;
       }

       else
       {
           for( i=0 ; i<size ; i++)
           {
                if( *temp_ptr1 == *temp_ptr2 )
                {
                    returnval=0 ;
                }
                else
                {
                    returnval = (*temp_ptr1 < *temp_ptr2) ? -1 : 1 ;
                    break ;
                }
                temp_ptr1++ ;
                temp_ptr2++ ;
           }

       }
    }

    return returnval ;
}


void *my_memcpy(void *dest,void *source , unsigned int size )
{
    unsigned char *temp_ptr1=dest ;
    unsigned char *temp_ptr2=source;
    unsigned int i=0 ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        for( i=0 ; i<size ; i++ )
        {
            *temp_ptr1++ = *temp_ptr2++ ;
        }
    }
}


void *my_memmove(void *str1, const void *str2, int n)
{
    unsigned char *tempdest = str1;
    unsigned char *tempsrc = str2;
    unsigned char counter =0;
    if((NULL == tempsrc) || (NULL == tempdest))
    {
        printf("ERROR !");
    }
    else
    {
        for(counter=0; counter < n; counter++)
        {
            *tempdest = *tempsrc;
            tempdest++;
            tempsrc++;
        }
    }
    return str1;
}


void *my_memset(void *dest,unsigned char value,unsigned char size)
{
    unsigned char *temp_ptr=dest ;
    unsigned int i=0 ;

    if( NULL == dest )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        for( i=0 ; i<size ; i++ )
        {
            *temp_ptr++ = value ;
        }
    }
}


char *my_strcat(char *dest, const char *source )
{
    char *ptr = dest ;
    char length_dest = strlen(dest) ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        dest += length_dest ;

        while( *dest++ = *source++ )
        {}

    }
    return ptr ;
}


int my_strlen( const char *str )
{
    unsigned int count=0 ;

    while( *str != '\0')
    {
        count++ ;
        str++ ;
    }
    return count ;
}



char *my_strncat(char *dest, const char *source , unsigned int size)
{
    char *ptr = dest ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        dest += my_strlen(dest) ;

        while( size-- )
        {
            *dest++ = *source++ ;
        }

    }
    return ptr ;
}


char *my_strchr(const char *dest, unsigned int value )
{
    my_memchr(dest,value,my_strlen(dest)) ;
}


int my_strcmp(const char *ptr1, const char *ptr2)
{
    my_memcmp(ptr1,ptr2,my_strlen(ptr1)) ;
}


int my_strncmp(const char *ptr1, const char *ptr2 , unsigned int size)
{
    my_memcmp(ptr1,ptr2,size) ;
}


int my_strcoll(const char *ptr1, const char *ptr2)
{
    my_memcmp(ptr1,ptr2,my_strlen(ptr1)) ;
}


char *my_strcpy(char *dest,const char *source )
{
    my_memcpy(dest,source,my_strlen(source)+1 ) ;
}


char *my_strncpy(char *dest,const char *source , unsigned int size )
{
    unsigned char *temp_ptr1=dest ;
    unsigned char *temp_ptr2=source;
    unsigned int i=0 ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        for( i=0 ; i<size ; i++ )
        {
            *temp_ptr1++ = *temp_ptr2++ ;
        }
    }
}


int my_strcspn(const char *dest,const char *source )
{
    unsigned char *temp_ptr1=dest ;
    unsigned char *temp_ptr2=source ;
    unsigned char length_source=strlen(source) ;
    unsigned int i ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        for( i=0 ; i<my_strlen(dest) ; i++ )
        {
            while( (*temp_ptr1 != *temp_ptr2)  &&  (length_source--) )
            {
                temp_ptr2++ ;
            }
            if(*temp_ptr1 == *temp_ptr2)
            {
                break;
            }
            else
            {
                temp_ptr1++ ;
                temp_ptr2=source ;
                length_source=strlen(source) ;
            }
        }
        return i ;
    }

}


char *my_strpbrk(const char *dest, const char *source )
{
    unsigned char *temp_ptr1=dest ;
    unsigned char *temp_ptr2=source ;
    unsigned char length_source=strlen(source) ;
    unsigned int i ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        for( i=0 ; i<my_strlen(dest) ; i++ )
        {
            while( (*temp_ptr1 != *temp_ptr2)  &&  (length_source--) )
            {
                temp_ptr2++ ;
            }
            if(*temp_ptr1 == *temp_ptr2)
            {
                return temp_ptr1 ;
            }
            else
            {
                temp_ptr1++ ;
                temp_ptr2=source ;
                length_source=strlen(source) ;
            }
        }
        return NULL ;
    }
}


char *my_strrchr(const char *dest, unsigned int value )
{
    unsigned char *temp_ptr1=dest ;
    unsigned int i ;
    unsigned char *final_address=NULL ;

    if( NULL == dest  )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        for( i=0 ; i<my_strlen(dest) ; i++ )
        {
            if( *temp_ptr1 == value )
            {
                final_address=temp_ptr1 ;
            }
            temp_ptr1++ ;
        }
        return final_address ;
    }
}


int my_strspn(const char *dest, const char *source )
{
    unsigned char *temp_ptr1=dest ;
    unsigned char *temp_ptr2=source ;
    unsigned int i,count=0 ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        if( *temp_ptr1 == *temp_ptr2)
        {
            while( *temp_ptr1 == *temp_ptr2 )
            {
                count++ ;
                temp_ptr1++ ;
                temp_ptr2++ ;
            }
        }
    }
    return count ;
    }

    char *my_strstr(const char *dest, const char *source )
{
    unsigned char *temp_ptr1=dest ;
    unsigned char *temp_ptr2=source ;
    unsigned int count1 , count2 ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        for( count1=0 ; count1<my_strlen(dest) ; count1++ )
        {
            if( *temp_ptr1 == *temp_ptr2 )
            {
                for( count2=0 ; count2<my_strlen(source) ; count2++)
                {
                    if(*temp_ptr1 == *temp_ptr2 )
                    {
                        temp_ptr1++ ;
                        temp_ptr2++ ;
                        count1++ ;
                        if(*temp_ptr2=='\0')
                        {
                            temp_ptr1 -= my_strlen(source) ;
                            return temp_ptr1 ;
                        }
                    }
                    else
                    {
                        temp_ptr2 = source ;
                        break ;
                    }
                }

            }
            temp_ptr1++ ;
        }
        return ("(null)") ;
    }
}


char *my_strtok(char *dest, const char *source )
{
    unsigned char *temp_ptr1=dest ;
    unsigned char *temp_ptr2=source ;
    static unsigned char *address ;
    static unsigned int count1  ;
    unsigned char  *ret  = "Null" ;

    if( ( (NULL == dest)  ||  (NULL==source) ) &&  (temp_ptr1=dest)  )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        if(NULL==dest)
        {
            temp_ptr1=address ;
            dest=address ;
            while(   address != NULL )
            {
                 count1++ ;
            while( (*temp_ptr1 != *temp_ptr2)  &&  (*temp_ptr2 != '\0') )
            {
                temp_ptr2++ ;
            }
            if( (*temp_ptr1 == *temp_ptr2)   )
            {
                if( *temp_ptr1 != '\0')
                {
                    address=temp_ptr1+1 ;
                }
                else
                {
                    address = NULL ;
                }
                *temp_ptr1 = '\0' ;
                return dest ;
            }
            else
            {
                temp_ptr1++ ;
                temp_ptr2=source ;
            }


            }
        return ret ;
        }


        else
        {
            for( count1=0 ; count1<strlen(dest) ; count1++ )
        {
            while( (*temp_ptr1 != *temp_ptr2)  &&  (*temp_ptr2 != '\0') )
            {
                temp_ptr2++ ;
            }
            if(*temp_ptr1 == *temp_ptr2)
            {
                address=temp_ptr1+1 ;
                *temp_ptr1 = '\0' ;
                return dest ;
            }
            else
            {
                temp_ptr1++ ;
                temp_ptr2=source ;
            }
        }
        return NULL ;
        }

    }
}


int my_strxfrm(char *dest, const char *source , unsigned int size)
{
    unsigned char *temp_ptr1=dest ;
    unsigned char *temp_ptr2=source ;
    unsigned int i , returnval=0 ;

    if( (NULL == dest)  ||  (NULL==source) )
    {
        printf("Error !!! \n") ;
    }

    else
    {
        while( *temp_ptr1 != '\0' )
        {
            *temp_ptr1 = NULL ;
            *temp_ptr1++ ;
        }

        unsigned char *temp_ptr1=dest ;

        for( i=0 ; i<size ; i++ )
        {
            *temp_ptr1++ = *temp_ptr2++ ;
        }
    }

    return my_strlen(temp_ptr2) ;
}




