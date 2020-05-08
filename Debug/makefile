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
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
DMA_Audio.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
DMA_Audio.list \

OBJCOPY_BIN += \
DMA_Audio.bin \


# All Target
all: DMA_Audio.elf secondary-outputs

# Tool invocations
DMA_Audio.elf: $(OBJS) $(USER_OBJS) C:\Users\jone1\STM32CubeIDE\test_workspace\DMA_Audio\STM32F303VCTX_FLASH.ld
	arm-none-eabi-gcc -o "DMA_Audio.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"C:\Users\jone1\STM32CubeIDE\test_workspace\DMA_Audio\STM32F303VCTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="DMA_Audio.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

DMA_Audio.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "DMA_Audio.list"
	@echo 'Finished building: $@'
	@echo ' '

DMA_Audio.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "DMA_Audio.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
