/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>
#include "shortcut.h"

void  trim(const char *source, char *trimmed_string)
{
  trimmed_string = fill_trimmed_string(source, trimmed_string);
}
char* fill_trimmed_string(const char *source, char *trimmed_string)
{
    int insertPosition = 0;
    int max_len = ending_position(source);
    int readPosition = blanks_at_the_beginning(source);
      for (; readPosition < max_len; readPosition++)
      {
          trimmed_string[insertPosition] = source[readPosition];
          insertPosition++;
      }
      trimmed_string[insertPosition] = '\0';
      return trimmed_string;
}
int blanks_at_the_beginning(const char *source)
{
  int readPosition = 0;
  while(source[readPosition]== ' ')
  {
    readPosition++;
  }
  return readPosition;
}
int ending_position(const char *source)
{
  int max_len = strlen(source);
  while(source[max_len-1] == ' ')
  {
    max_len--;
  }
  return max_len;
}
