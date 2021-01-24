################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ..\makefile.init

RM := -del 

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include core\core\subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ..\makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
AR += \
C:\WorkSpace\johny1\Value_and_lcd_Test\Release\arduino.ar \

ELF += \
Value_and_lcd_Test.elf \

HEX += \
Value_and_lcd_Test.hex \


# All Target
all: Value_and_lcd_Test

# Tool invocations
Value_and_lcd_Test: $(HEX)
	@echo 'Building target: $@'
	@echo 'Printing size:'
	"C:\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino5/bin/avr-size" -A "C:\WorkSpace\johny1\Value_and_lcd_Test\Release/Value_and_lcd_Test.elf"
	@echo 'Finished building target: $@'
	@echo ' '

C:\WorkSpace\johny1\Value_and_lcd_Test\Release\arduino.ar: $(AR_OBJ)
	@echo 'Starting archiver'
	"C:\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino5/bin/avr-gcc-ar" rcs     C:\WorkSpace\johny1\Value_and_lcd_Test\Release/arduino.ar $(AR_OBJ)
	@echo 'Finished building: $@'
	@echo ' '

Value_and_lcd_Test.elf: $(LINK_OBJ) $(AR)
	@echo 'Starting combiner'
	"C:\Sloeber\arduinoPlugin\packages\arduino\tools\avr-gcc\7.3.0-atmel3.6.1-arduino5/bin/avr-gcc" -Wall -Wextra -Os -g -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=atmega328p  -o "C:\WorkSpace\johny1\Value_and_lcd_Test\Release/Value_and_lcd_Test.elf"   $(LINK_OBJ)   C:\WorkSpace\johny1\Value_and_lcd_Test\Release/arduino.ar  "-LC:\WorkSpace\johny1\Value_and_lcd_Test\Release" -lm
	@echo 'Finished building: $@'
	@echo ' '

Value_and_lcd_Test.hex: $(ELF)
	@echo 'Do all objcopy commands'
	${A.RECIPE.OBJCOPY.EEP.PATTERN}
	${A.RECIPE.OBJCOPY.HEX.PATTERN}
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(PDE_DEPS)$(C_DEPS)$(AR)$(CC_DEPS)$(AR_OBJ)$(C++_DEPS)$(LINK_OBJ)$(CXX_DEPS)$(ASM_DEPS)$(HEX)$(INO_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(ELF)$(CPP_DEPS)
	-@echo ' '

.PHONY: all clean dependents

-include ..\makefile.targets
