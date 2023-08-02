#include <stdio.h>
#include <stdbool.h>

char* strrev(char* str) {
    size_t lidx = strlen(str) - 1;
    for (size_t i = 0, j = lidx; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}

char* itoa(int n, char* buffer, char base) {
    /* Check if zero, if it is, just the buffer with 0 */
    char* save = buffer;
    if(n == 0) {
        *buffer++ = '0';
        *buffer = '\0';
        return buffer;
    }
    /* Check if the number is a negative, is so, set negative and convert the number to a positive */
    bool neg = false;
    if(n < 0) {
        neg = true;
        n *= -1;
    }
    /* Continue the conversion */
    do {
        *buffer = n % base + '0';
        buffer++;
        n /= base;
    } while (n != 0);
    /* Check if it was negative, if so add a negative to the buffer */
    if(neg) {
        *buffer++ = '-';
    }
    *buffer = '\0';
    /* Finally reverse the string and return it*/
    return strrev(save);
}
char* utoa(unsigned int n, char* buffer, char base) {
    /* Check if zero, if it is, just the buffer with 0 */
    char* save = buffer;
    if(n == 0) {
        *buffer++ = '0';
        *buffer = '\0';
        return buffer;
    }
    /* Continue the conversion */
    do {
        *buffer = n % base + '0';
        buffer++;
        n /= base;
    } while (n != 0);
    *buffer = '\0';
    /* Finally reverse the string and return it*/
    return strrev(save);
}
char* uxtoa(unsigned int n, char* buffer, char offset) {
    /* Check if zero, if it is, just the buffer with 0 */
    char* save = buffer;
    if(n == 0) {
        *buffer++ = '0';
        *buffer = '\0';
        return buffer;
    }
    /* Continue the conversion */
    do {
        unsigned int digit = n % 16;
        if (digit > 9) {
            *buffer = offset + (digit - 10);
        } else {
            *buffer = digit + '0';
        }
        buffer++;
        n /= 16;
    } while (n != 0);
    *buffer = '\0';
    /* Finally reverse the string and return it*/
    return strrev(save);
}
int vfprintf(FILE* restrict stream, const char* restrict format, va_list args) {
    int bytes_written = 0;
    char number_buffer[21];
    while(*format) {
        if(*format == '%') {
            format++;
            switch (*format) {
            case 's':
                bytes_written += fputs(va_arg(args, const char*), stream); format++;
                break;
            case 'd':
            case 'i':
                bytes_written += fputs(itoa(va_arg(args, int), number_buffer, 10), stream); format++;
                break;
            case 'u':
                bytes_written += fputs(utoa(va_arg(args, unsigned int), number_buffer, 10), stream); format++;
                break;
            case 'o':
                bytes_written += fputs(utoa(va_arg(args, unsigned int), number_buffer, 8), stream); format++;
                break;
            case 'x':
                bytes_written += fputs(uxtoa(va_arg(args, unsigned int), number_buffer, 'a'), stream); format++;
                break;
            case 'X':
                bytes_written += fputs(uxtoa(va_arg(args, unsigned int), number_buffer, 'A'), stream); format++;
                break;
            case 'c':
                bytes_written += fputc((unsigned char)va_arg(args, int), stream); format++;
                break;
            default:
                bytes_written += fputc('%', stream); format++;
                break;
            }
        } else {
            bytes_written += fputc(*format, stream); format++;
        }
    }
    return bytes_written;
}