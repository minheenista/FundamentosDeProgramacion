#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Arreglos_Tarea1.o \
	${OBJECTDIR}/Arreglos_Tarea2.o \
	${OBJECTDIR}/CadenasYArrays.o \
	${OBJECTDIR}/ContarLetras.o \
	${OBJECTDIR}/Conversiones.o \
	${OBJECTDIR}/Ejemplo\ If.o \
	${OBJECTDIR}/EjemploWhile.o \
	${OBJECTDIR}/EjerciciosArreglos1.o \
	${OBJECTDIR}/EjerciciosArreglos2.o \
	${OBJECTDIR}/EjerciciosArreglos3.o \
	${OBJECTDIR}/EjerciciosArreglos4.o \
	${OBJECTDIR}/Factorial.o \
	${OBJECTDIR}/Ficheros.o \
	${OBJECTDIR}/Funciones.o \
	${OBJECTDIR}/Funciones2.o \
	${OBJECTDIR}/FuncionesHeader.o \
	${OBJECTDIR}/Hanoi.o \
	${OBJECTDIR}/Headers.o \
	${OBJECTDIR}/If\ 3\ numeros.o \
	${OBJECTDIR}/If\ 4\ Numeros.o \
	${OBJECTDIR}/RecursividadFibonacci.o \
	${OBJECTDIR}/Tablas\ De\ Multiplicar.o \
	${OBJECTDIR}/TablasDeMultiplicar_For.o \
	${OBJECTDIR}/Tarea\ Operaciones.o \
	${OBJECTDIR}/TareaTablasDeMultiplicar.o \
	${OBJECTDIR}/WhileFibonacci.o \
	${OBJECTDIR}/apuntadores.o \
	${OBJECTDIR}/arreglos.o \
	${OBJECTDIR}/ficheros2.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentosdeprogramacion.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentosdeprogramacion.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentosdeprogramacion ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Arreglos_Tarea1.o: Arreglos_Tarea1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglos_Tarea1.o Arreglos_Tarea1.c

${OBJECTDIR}/Arreglos_Tarea2.o: Arreglos_Tarea2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Arreglos_Tarea2.o Arreglos_Tarea2.c

${OBJECTDIR}/CadenasYArrays.o: CadenasYArrays.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CadenasYArrays.o CadenasYArrays.c

${OBJECTDIR}/ContarLetras.o: ContarLetras.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ContarLetras.o ContarLetras.c

${OBJECTDIR}/Conversiones.o: Conversiones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Conversiones.o Conversiones.c

.NO_PARALLEL:${OBJECTDIR}/Ejemplo\ If.o
${OBJECTDIR}/Ejemplo\ If.o: Ejemplo\ If.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ejemplo\ If.o Ejemplo\ If.c

${OBJECTDIR}/EjemploWhile.o: EjemploWhile.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EjemploWhile.o EjemploWhile.c

${OBJECTDIR}/EjerciciosArreglos1.o: EjerciciosArreglos1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EjerciciosArreglos1.o EjerciciosArreglos1.c

${OBJECTDIR}/EjerciciosArreglos2.o: EjerciciosArreglos2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EjerciciosArreglos2.o EjerciciosArreglos2.c

${OBJECTDIR}/EjerciciosArreglos3.o: EjerciciosArreglos3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EjerciciosArreglos3.o EjerciciosArreglos3.c

${OBJECTDIR}/EjerciciosArreglos4.o: EjerciciosArreglos4.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/EjerciciosArreglos4.o EjerciciosArreglos4.c

${OBJECTDIR}/Factorial.o: Factorial.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Factorial.o Factorial.c

${OBJECTDIR}/Ficheros.o: Ficheros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ficheros.o Ficheros.c

${OBJECTDIR}/Funciones.o: Funciones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funciones.o Funciones.c

${OBJECTDIR}/Funciones2.o: Funciones2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Funciones2.o Funciones2.c

${OBJECTDIR}/FuncionesHeader.o: FuncionesHeader.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FuncionesHeader.o FuncionesHeader.c

${OBJECTDIR}/Hanoi.o: Hanoi.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Hanoi.o Hanoi.c

${OBJECTDIR}/Headers.o: Headers.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Headers.o Headers.c

.NO_PARALLEL:${OBJECTDIR}/If\ 3\ numeros.o
${OBJECTDIR}/If\ 3\ numeros.o: If\ 3\ numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/If\ 3\ numeros.o If\ 3\ numeros.c

.NO_PARALLEL:${OBJECTDIR}/If\ 4\ Numeros.o
${OBJECTDIR}/If\ 4\ Numeros.o: If\ 4\ Numeros.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/If\ 4\ Numeros.o If\ 4\ Numeros.c

${OBJECTDIR}/RecursividadFibonacci.o: RecursividadFibonacci.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/RecursividadFibonacci.o RecursividadFibonacci.c

.NO_PARALLEL:${OBJECTDIR}/Tablas\ De\ Multiplicar.o
${OBJECTDIR}/Tablas\ De\ Multiplicar.o: Tablas\ De\ Multiplicar.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tablas\ De\ Multiplicar.o Tablas\ De\ Multiplicar.c

${OBJECTDIR}/TablasDeMultiplicar_For.o: TablasDeMultiplicar_For.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TablasDeMultiplicar_For.o TablasDeMultiplicar_For.c

.NO_PARALLEL:${OBJECTDIR}/Tarea\ Operaciones.o
${OBJECTDIR}/Tarea\ Operaciones.o: Tarea\ Operaciones.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tarea\ Operaciones.o Tarea\ Operaciones.c

${OBJECTDIR}/TareaTablasDeMultiplicar.o: TareaTablasDeMultiplicar.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TareaTablasDeMultiplicar.o TareaTablasDeMultiplicar.c

${OBJECTDIR}/WhileFibonacci.o: WhileFibonacci.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/WhileFibonacci.o WhileFibonacci.c

${OBJECTDIR}/apuntadores.o: apuntadores.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/apuntadores.o apuntadores.c

${OBJECTDIR}/arreglos.o: arreglos.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/arreglos.o arreglos.c

${OBJECTDIR}/ficheros2.o: ficheros2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ficheros2.o ficheros2.c

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
