################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Section\ 1/print-lines-longer_than.c 

OBJS += \
./src/Section\ 1/print-lines-longer_than.o 

C_DEPS += \
./src/Section\ 1/print-lines-longer_than.d 


# Each subdirectory must supply rules for building sources it contributes
src/Section\ 1/print-lines-longer_than.o: ../src/Section\ 1/print-lines-longer_than.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Section 1/print-lines-longer_than.d" -MT"src/Section\ 1/print-lines-longer_than.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


