/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#include	"r01lib.h"
#include	"led/PCA9955B.h"
#include	<math.h>

I2C			i2c( A4, A5 );	//	SDA, SCL
PCA9955B	drv( i2c );

#define		PERIOD	100

int main( void )
{
	printf( "***** Hello, PCA9955B! *****\r\n" );
	printf( "pi     = %f\r\n", M_PI   );
	printf( "PERIOD = %d\r\n", PERIOD );

	drv.begin( 1.0, PCA9955B::ARDUINO_SHIELD );

	float	a, b, c, d, e;


	FILE	*fp;
	if ( NULL == (fp	= fopen( "test.csv", "w" )) )
	{
		printf( "file open error\r\n" );
		return 0;
	}

	while ( true )
	{
		for ( int i = 0; i < PERIOD; i++ )
		{
			a	= 0.5 + 0.5 * sin( i * ((2.0 * M_PI + (0.0 / 3.0 * M_PI)) / PERIOD) );
			b	= 0.5 + 0.5 * sin( i * ((2.0 * M_PI + (1.0 / 3.0 * M_PI)) / PERIOD) );
			c	= 0.5 + 0.5 * sin( i * ((2.0 * M_PI + (2.0 / 3.0 * M_PI)) / PERIOD) );

			fprintf( fp, "%i, %f, %f, %f, %f\r\n", i, a, b, c, d );

			drv.pwm( 0, c );
			drv.pwm( 1, d );
			wait( 0.01 );
		}
	}
}
