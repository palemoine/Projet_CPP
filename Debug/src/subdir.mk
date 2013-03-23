################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Arbre.cpp \
../src/Caverne.cpp \
../src/Element.cpp \
../src/Grille.cpp \
../src/Mobile.cpp \
../src/Monde.cpp \
../src/Orc.cpp \
../src/Position.cpp \
../src/Ressource.cpp \
../src/Troll.cpp 

OBJS += \
./src/Arbre.o \
./src/Caverne.o \
./src/Element.o \
./src/Grille.o \
./src/Mobile.o \
./src/Monde.o \
./src/Orc.o \
./src/Position.o \
./src/Ressource.o \
./src/Troll.o 

CPP_DEPS += \
./src/Arbre.d \
./src/Caverne.d \
./src/Element.d \
./src/Grille.d \
./src/Mobile.d \
./src/Monde.d \
./src/Orc.d \
./src/Position.d \
./src/Ressource.d \
./src/Troll.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


