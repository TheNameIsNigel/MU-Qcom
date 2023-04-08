## @file
#
#  Copyright (c) 2011-2015, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2016, Intel Corporation. All rights reserved.
#  Copyright (c) 2018 - 2019, Bingxing Wang. All rights reserved.
#  Copyright (c) 2022, Xilin Wu. All rights reserved.
#  Copyright (c) 2023, Samsung Electronics. All rights reserved.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
#
##

[LibraryClasses.common]
  PlatformMemoryMapLib|<SOC Codename>Pkg/Devices/<Device Codename>/Library/PlatformMemoryMapLib/PlatformMemoryMapLib.inf

[PcdsFixedAtBuild.common]
  gArmTokenSpaceGuid.PcdSystemMemoryBase|0x80000000       # Starting address
  gArmTokenSpaceGuid.PcdSystemMemorySize|0x300000000              # 12GB Size

  gArmTokenSpaceGuid.PcdCpuVectorBaseAddress|0x9FF8C000

  gEmbeddedTokenSpaceGuid.PcdPrePiStackBase|0x9FF90000
  gEmbeddedTokenSpaceGuid.PcdPrePiStackSize|0x00040000

  # Simple FrameBuffer
  gQcomTokenSpaceGuid.PcdMipiFrameBufferWidth|1440
  gQcomTokenSpaceGuid.PcdMipiFrameBufferHeight|3216
  gQcomTokenSpaceGuid.PcdMipiFrameBufferPixelBpp|32

  # Simple Init
  gSimpleInitTokenSpaceGuid.PcdGuiDefaultDPI|320

  # Device Info
  gSM8350TokenSpaceGuid.PcdSmbiosSystemVendor|"OnePlus"
  gSM8350TokenSpaceGuid.PcdSmbiosSystemModel|"OnePlus 9 Pro"
  gSM8350TokenSpaceGuid.PcdSmbiosSystemRetailModel|"lemonadep"
  gSM8350TokenSpaceGuid.PcdSmbiosSystemRetailSku|"OnePlus_9_Pro_lemonadep"
  gSM8350TokenSpaceGuid.PcdSmbiosBoardModel|"OnePlus 9 Pro"

[PcdsDynamicDefault.common]
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoHorizontalResolution|1440
  gEfiMdeModulePkgTokenSpaceGuid.PcdVideoVerticalResolution|3216
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoHorizontalResolution|1440
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupVideoVerticalResolution|3216
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutRow|150
  gEfiMdeModulePkgTokenSpaceGuid.PcdSetupConOutColumn|150