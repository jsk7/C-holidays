################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Section\ 1/reverse.c 

OBJS += \
./src/Section\ 1/reverse.o 

C_DEPS += \
./src/Section\ 1/reverse.d 


# Each subdirectory must supply rules for building sources it contributes
src/Section\ 1/reverse.o: ../src/Section\ 1/reverse.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Section 1/reverse.d" -MT"src/Section\ 1/reverse.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


