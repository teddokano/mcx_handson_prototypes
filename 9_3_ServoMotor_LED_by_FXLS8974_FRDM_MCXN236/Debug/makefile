################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include source/accelerometer/subdir.mk
-include source/SoftPWM/subdir.mk
-include source/subdir.mk
-include _r01lib_irq/subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++M_DEPS)),)
-include $(C++M_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(CCM_DEPS)),)
-include $(CCM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXXM_DEPS)),)
-include $(CXXM_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := 9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236
BUILD_ARTIFACT_EXTENSION := axf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: 9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.axf

# Tool invocations
9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.axf: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU C++ Linker'
	arm-none-eabi-c++ -nostdlib -L"/Users/tedd/dev/mcuxpresso/mcx_handson_prototypes/_r01lib_frdm_mcxn236/Debug" -Xlinker -Map="9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -Xlinker --cref -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -T 9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236_Debug.ld -u _printf_float -u _scanf_float -o "9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.axf" $(OBJS) $(USER_OBJS) $(LIBS) -l_r01lib_frdm_mcxn236
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) 9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.axf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.axf"; # arm-none-eabi-objcopy -v -O binary "9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.axf" "9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.bin" ; # checksum -p MCXN236 -d "9_3_ServoMotor_LED_by_FXLS8974_FRDM_MCXN236.bin";
	-@echo ' '

.PHONY: all clean dependents main-build post-build

-include ../makefile.targets
