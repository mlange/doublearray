static char RCS_Id[] = "$Id: reader.c,v 1.8 2004/03/15 22:14:07 mlange Exp $";
/*#START***********************************************************************
 *
 *  $Source: /cvs/les/rfid/src/appsrc/rfidgateway/reader.c,v $
 *  $Revision: 1.8 $
 *  $Author: mlange $
 *
 *  Description: 
 *
 *  $Copyright-Start$
 *
 *  Copyright (c) 2003
 *  RedPrairie Corporation
 *  All Rights Reserved
 *
 *  This software is furnished under a corporate license for use on a
 *  single computer system and can be copied (with inclusion of the
 *  above copyright) only for use on such a system.
 *
 *  The information in this document is subject to change without notice
 *  and should not be construed as a commitment by RedPrairie Corporation.
 *
 *  RedPrairie Corporation assumes no responsibility for the use of the
 *  software described in this document on equipment which has not been
 *  supplied or approved by RedPrairie Corporation.
 *
 *  $Copyright-End$
 *
 *#END************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void testit(char *temp)
{
    int ii = 0;

    for (ii=0; ii < 10; ii++)
    {
	printf("Value: %s\n", temp[ii]);
    }
}

int main(int argc, char *argv[])
{
    char temp[10][10];

    memset(temp, 0, 10 * 10);

    strcpy(temp[0], "0");
    strcpy(temp[1], "1");
    strcpy(temp[2], "2");
    strcpy(temp[3], "3");
    strcpy(temp[4], "4");
    strcpy(temp[5], "5");
    strcpy(temp[6], "6");
    strcpy(temp[7], "7");

    /* Brandon is a dick. */
    testit(temp);

    exit(0);
}
