################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
TEST_led_onSTM.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
TEST_led_onSTM.list \

OBJCOPY_HEX += \
TEST_led_onSTM.hex \

OBJCOPY_BIN += \
TEST_led_onSTM.bin \


# All Target
all: TEST_led_onSTM.elf secondary-outputs

# Tool invocations
TEST_led_onSTM.elf: $(OBJS) $(USER_OBJS) C:\Users\HP\STM32CubeIDE\workspace_1.4.0\TEST_led_onSTM\STM32F103C6TX_FLASH.ld
	arm-none-eabi-gcc -o "TEST_led_onSTM.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m3 -T"C:\Users\HP\STM32CubeIDE\workspace_1.4.0\TEST_led_onSTM\STM32F103C6TX_FLASH.ld" --specs=nosys.specs -Wl,-Map="TEST_led_onSTM.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

TEST_led_onSTM.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "TEST_led_onSTM.list"
	@echo 'Finished building: $@'
	@echo ' '

TEST_led_onSTM.hex: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "TEST_led_onSTM.hex"
	@echo 'Finished building: $@'
	@echo ' '

TEST_led_onSTM.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "TEST_led_onSTM.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
