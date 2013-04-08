#include <stdio.h>

#include "user.h"
#include "userdb.h"
#include "derpcon.h"

int main( argc, argv )
    int const argc;
    char const * const * const argv;
{
    FILE *f;

    f = fopen( "INPUT.TXT", "r" );

    userdb * OBook;

    OBook = userdb_load( f );

    userdb_show( OBook );



    fclose( f );

    printf( "[%d]\n", DERPCON(
        userdb_find_by_id( OBook, 2002 ),
        userdb_find_by_id( OBook, 1010 )
    ));

    userdb_destroy( OBook );

    return 0;
}