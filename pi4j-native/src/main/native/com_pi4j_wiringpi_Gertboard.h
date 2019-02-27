/*
 * #%L
 * **********************************************************************
 * ORGANIZATION  :  Pi4J
 * PROJECT       :  Pi4J :: JNI Native Library
 * FILENAME      :  com_pi4j_wiringpi_Gertboard.h
 * 
 * This file is part of the Pi4J project. More information about
 * this project can be found here:  http://www.pi4j.com/
 * **********************************************************************
 * %%
 * Copyright (C) 2012 - 2019 Pi4J
 * %%
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Lesser Public License for more details.
 * 
 * You should have received a copy of the GNU General Lesser Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/lgpl-3.0.html>.
 * #L%
 */
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_pi4j_wiringpi_Gertboard */

#ifndef _Included_com_pi4j_wiringpi_Gertboard
#define _Included_com_pi4j_wiringpi_Gertboard
#ifdef __cplusplus
extern "C" {
#endif
#undef com_pi4j_wiringpi_Gertboard_SPI_ADC_SPEED
#define com_pi4j_wiringpi_Gertboard_SPI_ADC_SPEED 1000000L
#undef com_pi4j_wiringpi_Gertboard_SPI_DAC_SPEED
#define com_pi4j_wiringpi_Gertboard_SPI_DAC_SPEED 1000000L
#undef com_pi4j_wiringpi_Gertboard_SPI_A2D
#define com_pi4j_wiringpi_Gertboard_SPI_A2D 0L
#undef com_pi4j_wiringpi_Gertboard_SPI_D2A
#define com_pi4j_wiringpi_Gertboard_SPI_D2A 1L
/*
 * Class:     com_pi4j_wiringpi_Gertboard
 * Method:    gertboardAnalogWrite
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_pi4j_wiringpi_Gertboard_gertboardAnalogWrite
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_pi4j_wiringpi_Gertboard
 * Method:    gertboardAnalogRead
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gertboard_gertboardAnalogRead
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_pi4j_wiringpi_Gertboard
 * Method:    gertboardSPISetup
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gertboard_gertboardSPISetup
  (JNIEnv *, jclass);

/*
 * Class:     com_pi4j_wiringpi_Gertboard
 * Method:    gertboardAnalogSetup
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_pi4j_wiringpi_Gertboard_gertboardAnalogSetup
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
