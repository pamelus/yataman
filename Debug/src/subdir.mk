################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Yataman.cpp \
../src/YatamanWindow.cpp 

OBJS += \
./src/Yataman.o \
./src/YatamanWindow.o 

CPP_DEPS += \
./src/Yataman.d \
./src/YatamanWindow.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/wx-2.8 -I/usr/lib/wx/include/gtk2-unicode-release-2.8 -O1 -g3 -Wall -c -fmessage-length=0 -D_FILE_OFFSET_BITS=64 -D_LARGE_FILES -D__WXGTK__ -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


