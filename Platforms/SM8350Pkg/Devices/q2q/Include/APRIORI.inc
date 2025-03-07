APRIORI DXE {
    # First, install the PCD driver and call DxeInit
    INF MdeModulePkg/Core/Dxe/DxeMain.inf
    # INF Binaries/q2q/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
    INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

    # INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
    # INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
    INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

    # Next, install cpu protocol and enable the interrupt controller
    INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
    INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

	# Core Drivers
    INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
    INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
    INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

    FILE DRIVER = F541D663-4A48-40AA-AABF-FF158CCAE34C {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SmemDxe/SmemDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SmemDxe/SmemDxe.efi
      SECTION UI = "SmemDxe"
    }

    FILE DRIVER = 8E9BD160-B184-11DF-94E2-0800200C9A66 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.efi
      SECTION UI = "DALSys"
    }

    FILE DRIVER = AF9763A2-033B-4109-8E17-56A98D380C92 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/HWIODxe/HWIODxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/HWIODxe/HWIODxe.efi
      SECTION UI = "HWIODxeDriver"
    }

    FILE DRIVER = 10E193DF-9966-44E7-B17C-59DD831E20FC {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.efi
      SECTION UI = "ChipInfo"
    }

    FILE DRIVER = B105211B-BBBD-4ADD-A3B0-D1CF4A52154C {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.efi
      SECTION UI = "PlatformInfoDxeDriver"
    }

    FILE DRIVER = 9A00771F-36D4-4DD5-8916-C48ED9B16B86 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.efi
      SECTION UI = "HALIOMMU"
    }

    FILE DRIVER = E43128A8-8692-42B6-8AFA-676158578D18 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/ULogDxe/ULogDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/ULogDxe/ULogDxe.efi
      SECTION UI = "ULogDxe"
    }

    FILE DRIVER = ABA01FF8-2CCB-4E12-8B2E-CD3F4A742993 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.efi
      SECTION UI = "CmdDbDxe"
    }

    FILE DRIVER = 0401B830-BFF9-44A2-A5F6-95734A33C017 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.efi
      SECTION UI = "PwrUtilsDxe"
    }

    FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219711 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/NpaDxe/NpaDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/NpaDxe/NpaDxe.efi
      SECTION UI = "NpaDxe"
    }

    FILE DRIVER = CB29F4D1-7F37-4692-A416-93E82E219766 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/RpmhDxe/RpmhDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/RpmhDxe/RpmhDxe.efi
      SECTION UI = "RpmhDxe"
    }

    FILE DRIVER = 8BD3B475-401A-4B0B-9315-EDEE61A1EAE5 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/VcsDxe/VcsDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/VcsDxe/VcsDxe.efi
      SECTION UI = "VcsDxe"
    }

    FILE DRIVER = 4DB5DEA6-5302-4D1A-8A82-677A683B0D29 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/ClockDxe/ClockDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/ClockDxe/ClockDxe.patched.efi
      SECTION UI = "ClockDxe"
    }

    FILE DRIVER = 5824F9DE-17D2-4B1F-A5FE-5EB77FA53093 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/ICBDxe/ICBDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/ICBDxe/ICBDxe.efi
      SECTION UI = "ICBDxe"
    }

    FILE DRIVER = 9C1EB71F-DD6C-4ED5-9F6A-5CC0CA789F16 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.efi
      SECTION UI = "ShmBridgeDxeLA"
    }

    FILE DRIVER = 2D7A83E3-E343-4FFB-9109-631F2EE11694 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/TzDxe/ScmDxeLA.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/TzDxe/ScmDxeLA.efi
      SECTION UI = "ScmDxeLA"
    }

    FILE DRIVER = 8681CC5A-0DF6-441E-B4B8-E915C538F067 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/TLMMDxe/TLMMDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/TLMMDxe/TLMMDxe.efi
      SECTION UI = "DALTLMM"
    }

    FILE DRIVER = 04DE8591-D2B3-4077-BBBE-B12070094EB6 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/I2CDxe/I2CDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/I2CDxe/I2CDxe.efi
      SECTION UI = "I2C"
    }

    FILE DRIVER = 2A7B4BEF-80CD-49E1-B473-374BA4D673FC {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SPMIDxe/SPMIDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SPMIDxe/SPMIDxe.efi
      SECTION UI = "SPMI"
    }

    FILE DRIVER = 5776232E-082D-4B75-9A0E-FE1D13F7A5D9 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/PmicDxe/PmicDxeLa.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/PmicDxe/PmicDxeLa.efi
      SECTION UI = "PmicDxe"
    }

    FILE DRIVER = 6B38F7B4-AD98-40e9-9093-ACA2B5A253C4 {
      SECTION PE32 = Binaries/q2q/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.efi
      SECTION UI = "DiskIoDxe"
    }

	  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
    INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
    INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

    FILE DRIVER = F10F76DB-42C1-533F-34A8-69BE24653110 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SdccDxe/SdccDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SdccDxe/SdccDxe.efi
      SECTION UI = "SdccDxe"
    }

    FILE DRIVER = 0D35CD8E-97EA-4F9A-96AF-0F0D89F76567 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/UFSDxe/UFSDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/UFSDxe/UFSDxe.patched.efi
      SECTION UI = "UFSDxe"
    }

    INF MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
    INF FatPkg/EnhancedFatDxe/Fat.inf

    FILE DRIVER = 6925FAD3-E243-4B69-AD61-3F978C8ABC60 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/TzDxe/TzDxeLA.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/TzDxe/TzDxeLA.efi
      SECTION UI = "TzDxeLA"
    }

    FILE DRIVER = 0C60E64E-6587-4B3A-BD51-1147F2CC9C0B {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/BoardInfoDxe/BoardInfoDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/BoardInfoDxe/BoardInfoDxe.efi
      SECTION UI = "BoardInfo"
    }

	  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

    FILE DRIVER = 040E1E61-0AFB-411B-9EC9-00F3FC59CC13 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.patched.efi
      SECTION UI = "QcomWDogDxe"
    }

    FILE DRIVER = 7DB0793A-4402-4BE1-906E-D0FABAD2707E {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.efi
      SECTION UI = "DDRInfoDxe"
    }

    FILE DRIVER = 3AE17DB7-3CC5-4B89-9304-9549211057EF {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.efi
      SECTION UI = "ResetRuntimeDxe"
    }

    #FILE DRIVER = BFAB1BE9-653F-4624-AE2D-7B7F00CC91F3 {
    #  SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.depex
    #  SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/CcicDxe/CcicDxe.efi
    #  SECTION UI = "Ccic"
    #}

    #FILE DRIVER = 2CC73155-A1F9-4C4B-88E2-CAF9390E126A {
    #  SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.depex
    #  SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/MuicDxe/MuicDxe.efi
    #  SECTION UI = "Muic"
    #}

    FILE DRIVER = A93C89C8-5F8A-11EB-AE93-0242AC130002 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/GpioExpanderDxe/GpioExpanderDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/GpioExpanderDxe/GpioExpanderDxe.efi
      SECTION UI = "Expander"
    }

    FILE DRIVER = 3C7596FA-0058-4496-A648-6D14BE4023B2 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SamsungDxe/ChgDxe/ChgDxe.efi
      SECTION UI = "Chg"
    }

    FILE DRIVER = 1C04F529-0612-4319-9315-B2E75C16810A {
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.patched.efi
      SECTION UI = "FeatureEnablerDxe"
    }

!if $(USE_DISPLAYDXE) == 1
    FILE DRIVER = 4138022F-06C7-4F79-9C94-7E33B511A4E7 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/DisplayDxe/DisplayDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/DisplayDxe/DisplayDxe.efi
      SECTION UI = "DisplayDxe"
    }
!else
	  INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

    FILE DRIVER = E2534A24-1D9A-4A54-AAEC-BE8836D0F45D {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.efi
      SECTION UI = "FvDxe"
    }

    FILE DRIVER = 8CF9C920-D5E6-4DAC-BEF9-6E6A4EEC7ADD {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.efi
      SECTION UI = "PILProxyDxe"
    }

    FILE DRIVER = 1D317734-4083-47C6-83EA-E3A42F2A6Bff {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/PILDxe/PILDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/PILDxe/PILDxe.efi
      SECTION UI = "PILDxe"
    }

    FILE DRIVER = 5D787B6C-6254-43F5-A7A8-CB25329CF97E {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SPSSDxe/SPSSDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SPSSDxe/SPSSDxe.efi
      SECTION UI = "SPSSDxe"
    }

    FILE DRIVER = 42031F68-1F0B-429B-93F1-0EB0CF89DDBF {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/IPCCDxe/IPCCDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/IPCCDxe/IPCCDxe.efi
      SECTION UI = "IPCCDxe"
    }

    FILE DRIVER = 7942A7EB-B7D5-4E2E-B908-831E4DE55b58 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/GLinkDxe/GLinkDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/GLinkDxe/GLinkDxe.efi
      SECTION UI = "GlinkDxe"
    }

    INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
    INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

    FILE DRIVER = FCABE6A7-7953-4A84-B7EC-D29E89B62E87 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.efi
      SECTION UI = "EmbeddedMonotonicCounter"
    }

	INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
    INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
    INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
    INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
    INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

    FILE DRIVER = ed15ffd5-bc96-4107-9118-95366600188e {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/FontDxe/FontDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/FontDxe/FontDxe.efi
      SECTION UI = "FontDxe"
    }

    #FILE DRIVER = 5A50AA81-C3AE-4608-A0E3-41A2E69BAF94 {
    #  SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/QcomBds/QcomBds.depex
    #  SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/QcomBds/QcomBds.efi
    #  SECTION UI = "QcomBds"
    #}

    INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

    FILE DRIVER = 7A32BD23-F735-4F57-AA1A-447D2FE3BE0D {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SPIDxe/SPIDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SPIDxe/SPIDxe.efi
      SECTION UI = "SPI"
    }

    # 6D4A9CF7-CC0C-42B0-AA89-F6A6A8D99273

    FILE DRIVER = 11faed4c-b21f-4d88-8e48-c4c28a1e50df {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.efi
      SECTION UI = "UsbPwrCtrlDxe"
    }

    FILE DRIVER = 94f8a6a7-dc34-4101-88c1-99179cceae83 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.efi
      SECTION UI = "UsbfnDwc3Dxe"
    }

    FILE DRIVER = BEB12BEE-F6E1-11E1-9FB8-6C626DE4AEB1 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.efi
      SECTION UI = "XhciPciEmulation"
    }

    FILE DRIVER = b7f50e91-a759-412c-ade4-dcd03e7f7c28 {
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/XhciDxe/XhciDxe.efi
      SECTION UI = "XhciDxe"
    }

    FILE DRIVER = 240612b7-a063-11d4-9a3a-0090273fc14d {
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.efi
      SECTION UI = "UsbBusDxe"
    }

    FILE DRIVER = 2d2e62cf-9ecf-43b7-8219-94e7fc713dfe {
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.efi
      SECTION UI = "UsbKbDxe"
    }

    FILE DRIVER = 9fb4b4a7-42c0-4bcd-8540-9bcc6711f83e {
      SECTION PE32 =  Binaries/q2q/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.efi
      SECTION UI = "UsbMassStorageDxe"
    }

    FILE DRIVER = cd823a4d-7dec-4531-ae5d-4134fa4127b8 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.patched.efi
      SECTION UI = "UsbConfigDxe"
    }

    FILE DRIVER = 5bd181db-0487-4f1a-ae73-820e165611b3 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.efi
      SECTION UI = "ButtonsDxe"
    }

!if $(USE_DISPLAYDXE) == 1
    FILE DRIVER = 1B52138D-3FA3-4E50-B958-20887353F809 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/CPRDxe/CPRDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/CPRDxe/CPRDxe.efi
      SECTION UI = "CPRDxe"
    }
!endif

    FILE DRIVER = 569ea0de-b557-4043-84cf-01103fe516e5 {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/GpiDxe/GpiDxe.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/GpiDxe/GpiDxe.efi
      SECTION UI = "GpiDxe"
    }

    FILE DRIVER = 5f0937cd-73f9-445e-b320-bb6fd5d3cbde {
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/UCDxe/UCDxe.efi
      SECTION UI = "UCDxe"
    }

    FILE DRIVER = b0d3689e-11f8-43c6-8ece-023a29cec35b {
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/RNGDxe/RngDxe.efi
      SECTION UI = "RngDxe"
    }

    FILE DRIVER = 6696936D-3637-467C-87CB-14EA8248948C {
      SECTION DXE_DEPEX = Binaries/q2q/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.depex
      SECTION PE32 = Binaries/q2q/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.efi
      SECTION UI = "SimpleTextInOutSerial"
    }
    
    INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
    INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf

    FILE DRIVER = cccb0c28-4b24-11d5-9a5a-0090273fc14d {
      SECTION PE32 = Binaries/q2q/MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.efi
      SECTION UI = "GraphicsConsoleDxe"
    }

    # INF Binaries/q2q/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
    # INF Binaries/q2q/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
    # INF Binaries/q2q/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf
}
