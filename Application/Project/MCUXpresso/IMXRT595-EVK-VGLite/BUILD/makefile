################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang/subdir.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/subdir.mk
-include ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/subdir.mk
-include ThirdParty/MCUXpressoSDK/middleware/vglite/VGLiteKernel/rtos/subdir.mk
-include ThirdParty/MCUXpressoSDK/middleware/vglite/VGLiteKernel/subdir.mk
-include ThirdParty/MCUXpressoSDK/middleware/vglite/VGLite/rtos/subdir.mk
-include ThirdParty/MCUXpressoSDK/middleware/vglite/VGLite/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/utilities/str/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/utilities/debug_console/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/drivers/subdir.mk
-include ThirdParty/MCUXpressoSDK/devices/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/video/display/rm67162/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/video/display/mipi_dsi_cmd/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/video/display/fbdev/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/video/display/dc/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/video/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/uart/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/serial_manager/subdir.mk
-include ThirdParty/MCUXpressoSDK/components/ft3267/subdir.mk
-include TargetSpecific/Drivers/subdir.mk
-include TargetSpecific/subdir.mk
-include PlatformPackage/RTE/subdir.mk
-include Application/Source/subdir.mk
-include Application/GeneratedCode/subdir.mk
-include subdir.mk
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := EmbeddedWizard-IMXRT595-EVK-VGLite
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all:
	+@$(MAKE) --no-print-directory main-build && $(MAKE) --no-print-directory post-build

# Main-build Target
main-build: EmbeddedWizard-IMXRT595-EVK-VGLite.elf

# Tool invocations
EmbeddedWizard-IMXRT595-EVK-VGLite.elf: $(OBJS) $(USER_OBJS) makefile $(OPTIONAL_TOOL_DEPS)
	@echo 'Building target: $@'
	@echo 'Invoking: MCU Linker'
	arm-none-eabi-gcc -nostdlib -L"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../PlatformPackage/RTE" -L"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../PlatformPackage/RGB565" -Xlinker -Map="EmbeddedWizard-IMXRT595-EVK-VGLite.map" -Xlinker --gc-sections -Xlinker -print-memory-usage -Xlinker --sort-section=alignment -Xlinker --cref -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -T IMXRT595-EVK-VGLite_BUILD.ld -o "EmbeddedWizard-IMXRT595-EVK-VGLite.elf" $(OBJS) $(USER_OBJS) $(LIBS) -lewgfx-m33-gcc -lewrte-m33-gcc
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) EmbeddedWizard-IMXRT595-EVK-VGLite.elf
	-@echo ' '

post-build:
	-@echo 'Performing post-build steps'
	-arm-none-eabi-size "EmbeddedWizard-IMXRT595-EVK-VGLite.elf"; # arm-none-eabi-objcopy -v -O binary "EmbeddedWizard-IMXRT595-EVK-VGLite.elf" "EmbeddedWizard-IMXRT595-EVK-VGLite.bin" ; # checksum -p MIMXRT595S -d "EmbeddedWizard-IMXRT595-EVK-VGLite.bin";
	-@echo ' '

.PHONY: all clean dependents main-build post-build

-include ../makefile.targets
