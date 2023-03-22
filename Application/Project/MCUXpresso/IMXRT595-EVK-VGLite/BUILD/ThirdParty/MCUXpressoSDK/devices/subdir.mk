################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/system_MIMXRT595S_cm33.c 

C_DEPS += \
./ThirdParty/MCUXpressoSDK/devices/system_MIMXRT595S_cm33.d 

OBJS += \
./ThirdParty/MCUXpressoSDK/devices/system_MIMXRT595S_cm33.o 


# Each subdirectory must supply rules for building sources it contributes
ThirdParty/MCUXpressoSDK/devices/system_MIMXRT595S_cm33.o: C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/system_MIMXRT595S_cm33.c ThirdParty/MCUXpressoSDK/devices/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__NEWLIB__ -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DCPU_MIMXRT595SFFOC_cm33 -DBOOT_HEADER_ENABLE=1 -DFSL_SDK_DRIVER_QUICK_ACCESS_ENABLE=1 -DSSD1963_DATA_WITDH=8 -DFLEXIO_MCULCD_DATA_BUS_WIDTH=8 -DBOARD_ENABLE_PSRAM_CACHE=0 -DCUSTOM_VGLITE_MEMORY_CONFIG=0 -DSDK_OS_FREE_RTOS -DSERIAL_PORT_TYPE_UART=1 -DSDK_I2C_BASED_COMPONENT_USED=1 -DVG_BLIT_WORKAROUND=1 -DEW_USE_VGLITE_INDEX8=1 -DEW_USE_OPERATING_SYSTEM=1 -DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 -DEW_SURFACE_ROTATION=0 -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../Application/GeneratedCode" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../Application/Source" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../TargetSpecific" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../TargetSpecific/Drivers" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/CMSIS/Core/Include" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/devices/MIMXRT595S" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/drivers" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/drivers/cm7" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/utilities" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/utilities/debug_console" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/devices/MIMXRT595S/utilities/str" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/GCC/ARM_CM4F" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty\MCUXpressoSDK\rtos\freertos\freertos_kernel\portable\GCC\ARM_CM33_NTZ\non_secure" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/portable/MemMang" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/rtos/freertos/freertos_kernel/include" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/serial_manager" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video/display" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video/display/fbdev" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video/display/rm67162" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video/display/mipi_dsi_cmd" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video/display/dbi" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video/display/dc" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty\MCUXpressoSDK\components\video\display\dc\ssd1963" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video/display/dc/lcdifv2" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/video/display/dc/dsi_cmd" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty\MCUXpressoSDK\components\ssd1963" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/components/uart" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/middleware/vglite/inc" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/middleware/vglite/VGLite" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/middleware/vglite/VGLite/rtos" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/middleware/vglite/VGLiteKernel" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty/MCUXpressoSDK/middleware/vglite/VGLiteKernel/rtos" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../ThirdParty\MCUXpressoSDK\components\ft3267" -I"C:\WorkSpace\Documentation\SC1\NXP\IMXRT595-EVK-VGLite\TargetSpecific\Drivers" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../PlatformPackage/RTE" -I"C:/WorkSpace/Documentation/SC1/NXP/IMXRT595-EVK-VGLite/Application/Project/MCUXpresso/IMXRT595-EVK-VGLite/../../../../PlatformPackage/RGB565" -O0 -fno-common -g3 -mcpu=cortex-m33 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m33 -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -D__NEWLIB__ -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-ThirdParty-2f-MCUXpressoSDK-2f-devices

clean-ThirdParty-2f-MCUXpressoSDK-2f-devices:
	-$(RM) ./ThirdParty/MCUXpressoSDK/devices/system_MIMXRT595S_cm33.d ./ThirdParty/MCUXpressoSDK/devices/system_MIMXRT595S_cm33.o

.PHONY: clean-ThirdParty-2f-MCUXpressoSDK-2f-devices

