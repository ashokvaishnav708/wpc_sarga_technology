################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include emlib/subdir.mk
-include Drivers/si4x55/subdir.mk
-include Drivers/subdir.mk
-include CMSIS/ezr32hg/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: top.axf

# Tool invocations
top.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g -gdwarf-2 -mcpu=cortex-m0plus -mthumb -T "top.ld" -Xlinker --gc-sections -Xlinker -Map="top.map" --specs=nano.specs -o top.axf "./src/main.o" "./emlib/em_assert.o" "./emlib/em_cmu.o" "./emlib/em_dma.o" "./emlib/em_emu.o" "./emlib/em_gpio.o" "./emlib/em_int.o" "./emlib/em_pcnt.o" "./emlib/em_prs.o" "./emlib/em_rtc.o" "./emlib/em_system.o" "./emlib/em_timer.o" "./emlib/em_usart.o" "./Drivers/display.o" "./Drivers/displayls013b7dh03.o" "./Drivers/displaypalemlib.o" "./Drivers/dmactrl.o" "./Drivers/dmadrv.o" "./Drivers/ezradio_api_lib.o" "./Drivers/ezradio_auto_ack_plugin.o" "./Drivers/ezradio_comm.o" "./Drivers/ezradio_crcerror_plugin.o" "./Drivers/ezradio_direct_receive_plugin.o" "./Drivers/ezradio_direct_transmit_plugin.o" "./Drivers/ezradio_hal.o" "./Drivers/ezradio_plugin_manager.o" "./Drivers/ezradio_pn9_plugin.o" "./Drivers/ezradio_receive_plugin.o" "./Drivers/ezradio_transmit_plugin.o" "./Drivers/ezradio_unmod_carrier_plugin.o" "./Drivers/gpiointerrupt.o" "./Drivers/retargetio.o" "./Drivers/retargettextdisplay.o" "./Drivers/rtcdriver.o" "./Drivers/spidrv.o" "./Drivers/textdisplay.o" "./Drivers/udelay.o" "./Drivers/ustimer.o" "./Drivers/si4x55/ezradio_api_lib_add.o" "./CMSIS/ezr32hg/startup_ezr32hg.o" "./CMSIS/ezr32hg/system_ezr32hg.o" -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: top.hex'
	arm-none-eabi-objcopy -O ihex "top.axf" "top.hex"
	@echo ' '

	@echo 'Building bin file: top.bin'
	arm-none-eabi-objcopy -O binary "top.axf" "top.bin"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "top.axf"
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C_DEPS)$(EXECUTABLES) top.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
