## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018 - 2019, Bingxing Wang. All rights reserved.
#  Copyright (c) 2022, Xilin Wu. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

[Defines]
  # Platform Defines
  USE_DISPLAYDXE              = 1

[LibraryClasses.common]
  PlatformMemoryMapLib|SM6125Pkg/Devices/laurel_sprout/Library/PlatformMemoryMapLib/PlatformMemoryMapLib.inf

[PcdsFixedAtBuild.common]
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000         # Starting address
  !if $(RAM_SIZE) == 6
    gArmTokenSpaceGuid.PcdSystemMemorySize|0x180000000        # 6GB Size
  !else
  !if $(RAM_SIZE) == 4
    gArmTokenSpaceGuid.PcdSystemMemorySize|0x100000000        # 4GB Size
  !else
  !error "Invaild Mem Size! Use 6 or 4."
  !endif
  !endif

  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x5FF8C000

  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x5FF90000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000      # 256K stack

  # Simple FrameBuffer
  gQcomTokenSpaceGuid.PcdMipiFrameBufferWidth|720
  gQcomTokenSpaceGuid.PcdMipiFrameBufferHeight|1560
  gQcomTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32

  # Simple Init
  gSimpleInitTokenSpaceGuid.PcdGuiDefaultDPI|300

  # Device Info
  gSM6125TokenSpaceGuid.PcdSmbiosSystemVendor|"Xiaomi"
  gSM6125TokenSpaceGuid.PcdSmbiosSystemModel|"Mi A3"
  gSM6125TokenSpaceGuid.PcdSmbiosSystemRetailModel|"laurel_sprout"
  gSM6125TokenSpaceGuid.PcdSmbiosSystemRetailSku|"Mi_A3_laurel_sprout"
  gSM6125TokenSpaceGuid.PcdSmbiosBoardModel|"Mi A3"

[PcdsDynamicDefault.common]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|720
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|1560
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|720
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|1560
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|150
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|150
