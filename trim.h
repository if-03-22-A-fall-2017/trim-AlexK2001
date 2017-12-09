/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
#include <string.h>
#ifndef ___TRIM_H
#define ___TRIM_H
#define STRLEN 100
 void trim 	( 	const char *  	source,
    char *  	trimmed_string);

     char* fill_trimmed_string(const char *source, char *trimmed_string);
     int ending_position(const char *source);
    int blanks_at_the_beginning(const char *source);
    #endif
