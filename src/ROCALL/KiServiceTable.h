    /*
     * ReactOS system call definitions
     * Source: ReactOS source code
     * Author: Timo Kreuzer <timo.kreuzer@reactos.org>
     * License: MIT (see LICENSE file in the root of this repository)
     */
    ServiceMacro("AcceptConnectPort", 6)
    ServiceMacro("AccessCheck", 8)
    ServiceMacro("AccessCheckAndAuditAlarm", 11)
    ServiceMacro("AccessCheckByType", 11)
    ServiceMacro("AccessCheckByTypeAndAuditAlarm", 16)
    ServiceMacro("AccessCheckByTypeResultList", 11)
    ServiceMacro("AccessCheckByTypeResultListAndAuditAlarm", 16)
    ServiceMacro("AccessCheckByTypeResultListAndAuditAlarmByHandle", 17)
    ServiceMacro("AddAtom", 3)
    ServiceMacro("AddBootEntry", 2)
    ServiceMacro("AddDriverEntry", 2)
    ServiceMacro("AdjustGroupsToken", 6)
    ServiceMacro("AdjustPrivilegesToken", 6)
    ServiceMacro("AlertResumeThread", 2)
    ServiceMacro("AlertThread", 1)
    ServiceMacro("AllocateLocallyUniqueId", 1)
    ServiceMacro("AllocateUserPhysicalPages", 3)
    ServiceMacro("AllocateUuids", 4)
    ServiceMacro("AllocateVirtualMemory", 6)
    ServiceMacro("ApphelpCacheControl", 2)
    ServiceMacro("AreMappedFilesTheSame", 2)
    ServiceMacro("AssignProcessToJobObject", 2)
    ServiceMacro("CallbackReturn", 3)
    ServiceMacro("CancelDeviceWakeupRequest", 1)
    ServiceMacro("CancelIoFile", 2)
    ServiceMacro("CancelTimer", 2)
    ServiceMacro("ClearEvent", 1)
    ServiceMacro("Close", 1)
    ServiceMacro("CloseObjectAuditAlarm", 3)
    ServiceMacro("CompactKeys", 2)
    ServiceMacro("CompareTokens", 3)
    ServiceMacro("CompleteConnectPort", 1)
    ServiceMacro("CompressKey", 1)
    ServiceMacro("ConnectPort", 8)
    ServiceMacro("Continue", 2)
    ServiceMacro("CreateDebugObject", 4)
    ServiceMacro("CreateDirectoryObject", 3)
    ServiceMacro("CreateEvent", 5)
    ServiceMacro("CreateEventPair", 3)
    ServiceMacro("CreateFile", 11)
    ServiceMacro("CreateIoCompletion", 4)
    ServiceMacro("CreateJobObject", 3)
    ServiceMacro("CreateJobSet", 3)
    ServiceMacro("CreateKey", 7)
    ServiceMacro("CreateMailslotFile", 8)
    ServiceMacro("CreateMutant", 4)
    ServiceMacro("CreateNamedPipeFile", 14)
    ServiceMacro("CreatePagingFile", 4)
    ServiceMacro("CreatePort", 5)
    ServiceMacro("CreateProcess", 8)
    ServiceMacro("CreateProcessEx", 9)
    ServiceMacro("CreateProfile", 9)
    ServiceMacro("CreateSection", 7)
    ServiceMacro("CreateSemaphore", 5)
    ServiceMacro("CreateSymbolicLinkObject", 4)
    ServiceMacro("CreateThread", 8)
    ServiceMacro("CreateTimer", 4)
    ServiceMacro("CreateToken", 13)
    ServiceMacro("CreateWaitablePort", 5)
    ServiceMacro("DebugActiveProcess", 2)
    ServiceMacro("DebugContinue", 3)
    ServiceMacro("DelayExecution", 2)
    ServiceMacro("DeleteAtom", 1)
    ServiceMacro("DeleteBootEntry", 1)
    ServiceMacro("DeleteDriverEntry", 1)
    ServiceMacro("DeleteFile", 1)
    ServiceMacro("DeleteKey", 1)
    ServiceMacro("DeleteObjectAuditAlarm", 3)
    ServiceMacro("DeleteValueKey", 2)
    ServiceMacro("DeviceIoControlFile", 10)
    ServiceMacro("DisplayString", 1)
    ServiceMacro("DuplicateObject", 7)
    ServiceMacro("DuplicateToken", 6)
    ServiceMacro("EnumerateBootEntries", 2)
    ServiceMacro("EnumerateDriverEntries", 2)
    ServiceMacro("EnumerateKey", 6)
    ServiceMacro("EnumerateSystemEnvironmentValuesEx", 3)
    ServiceMacro("EnumerateValueKey", 6)
    ServiceMacro("ExtendSection", 2)
    ServiceMacro("FilterToken", 6)
    ServiceMacro("FindAtom", 3)
    ServiceMacro("FlushBuffersFile", 2)
    ServiceMacro("FlushInstructionCache", 3)
    ServiceMacro("FlushKey", 1)
    ServiceMacro("FlushVirtualMemory", 4)
    ServiceMacro("FlushWriteBuffer", 0)
    ServiceMacro("FreeUserPhysicalPages", 3)
    ServiceMacro("FreeVirtualMemory", 4)
    ServiceMacro("FsControlFile", 10)
    ServiceMacro("GetContextThread", 2)
    ServiceMacro("GetDevicePowerState", 2)
    ServiceMacro("GetPlugPlayEvent", 4)
    ServiceMacro("GetWriteWatch", 7)
    ServiceMacro("ImpersonateAnonymousToken", 1)
    ServiceMacro("ImpersonateClientOfPort", 2)
    ServiceMacro("ImpersonateThread", 3)
    ServiceMacro("InitializeRegistry", 1)
    ServiceMacro("InitiatePowerAction", 4)
    ServiceMacro("IsProcessInJob", 2)
    ServiceMacro("IsSystemResumeAutomatic", 0)
    ServiceMacro("ListenPort", 2)
    ServiceMacro("LoadDriver", 1)
    ServiceMacro("LoadKey", 2)
    ServiceMacro("LoadKey2", 3)
    ServiceMacro("LoadKeyEx", 4)
    ServiceMacro("LockFile", 10)
    ServiceMacro("LockProductActivationKeys", 2)
    ServiceMacro("LockRegistryKey", 1)
    ServiceMacro("LockVirtualMemory", 4)
    ServiceMacro("MakePermanentObject", 1)
    ServiceMacro("MakeTemporaryObject", 1)
    ServiceMacro("MapUserPhysicalPages", 3)
    ServiceMacro("MapUserPhysicalPagesScatter", 3)
    ServiceMacro("MapViewOfSection", 10)
    ServiceMacro("ModifyBootEntry", 1)
    ServiceMacro("ModifyDriverEntry", 1)
    ServiceMacro("NotifyChangeDirectoryFile", 9)
    ServiceMacro("NotifyChangeKey", 10)
    ServiceMacro("NotifyChangeMultipleKeys", 12)
    ServiceMacro("OpenDirectoryObject", 3)
    ServiceMacro("OpenEvent", 3)
    ServiceMacro("OpenEventPair", 3)
    ServiceMacro("OpenFile", 6)
    ServiceMacro("OpenIoCompletion", 3)
    ServiceMacro("OpenJobObject", 3)
    ServiceMacro("OpenKey", 3)
    ServiceMacro("OpenMutant", 3)
    ServiceMacro("OpenObjectAuditAlarm", 12)
    ServiceMacro("OpenProcess", 4)
    ServiceMacro("OpenProcessToken", 3)
    ServiceMacro("OpenProcessTokenEx", 4)
    ServiceMacro("OpenSection", 3)
    ServiceMacro("OpenSemaphore", 3)
    ServiceMacro("OpenSymbolicLinkObject", 3)
    ServiceMacro("OpenThread", 4)
    ServiceMacro("OpenThreadToken", 4)
    ServiceMacro("OpenThreadTokenEx", 5)
    ServiceMacro("OpenTimer", 3)
    ServiceMacro("PlugPlayControl", 3)
    ServiceMacro("PowerInformation", 5)
    ServiceMacro("PrivilegeCheck", 3)
    ServiceMacro("PrivilegeObjectAuditAlarm", 6)
    ServiceMacro("PrivilegedServiceAuditAlarm", 5)
    ServiceMacro("ProtectVirtualMemory", 5)
    ServiceMacro("PulseEvent", 2)
    ServiceMacro("QueryAttributesFile", 2)
    ServiceMacro("QueryBootEntryOrder", 2)
    ServiceMacro("QueryBootOptions", 2)
    ServiceMacro("QueryDebugFilterState", 2)
    ServiceMacro("QueryDefaultLocale", 2)
    ServiceMacro("QueryDefaultUILanguage", 1)
    ServiceMacro("QueryDirectoryFile", 11)
    ServiceMacro("QueryDirectoryObject", 7)
    ServiceMacro("QueryDriverEntryOrder", 2)
    ServiceMacro("QueryEaFile", 9)
    ServiceMacro("QueryEvent", 5)
    ServiceMacro("QueryFullAttributesFile", 2)
    ServiceMacro("QueryInformationAtom", 5)
    ServiceMacro("QueryInformationFile", 5)
    ServiceMacro("QueryInformationJobObject", 5)
    ServiceMacro("QueryInformationPort", 5)
    ServiceMacro("QueryInformationProcess", 5)
    ServiceMacro("QueryInformationThread", 5)
    ServiceMacro("QueryInformationToken", 5)
    ServiceMacro("QueryInstallUILanguage", 1)
    ServiceMacro("QueryIntervalProfile", 2)
    ServiceMacro("QueryIoCompletion", 5)
    ServiceMacro("QueryKey", 5)
    ServiceMacro("QueryMultipleValueKey", 6)
    ServiceMacro("QueryMutant", 5)
    ServiceMacro("QueryObject", 5)
    ServiceMacro("QueryOpenSubKeys", 2)
    ServiceMacro("QueryOpenSubKeysEx", 4)
    ServiceMacro("QueryPerformanceCounter", 2)
    ServiceMacro("QueryQuotaInformationFile", 9)
    ServiceMacro("QuerySection", 5)
    ServiceMacro("QuerySecurityObject", 5)
    ServiceMacro("QuerySemaphore", 5)
    ServiceMacro("QuerySymbolicLinkObject", 3)
    ServiceMacro("QuerySystemEnvironmentValue", 4)
    ServiceMacro("QuerySystemEnvironmentValueEx", 5)
    ServiceMacro("QuerySystemInformation", 4)
    ServiceMacro("QuerySystemTime", 1)
    ServiceMacro("QueryTimer", 5)
    ServiceMacro("QueryTimerResolution", 3)
    ServiceMacro("QueryValueKey", 6)
    ServiceMacro("QueryVirtualMemory", 6)
    ServiceMacro("QueryVolumeInformationFile", 5)
    ServiceMacro("QueueApcThread", 5)
    ServiceMacro("RaiseException", 3)
    ServiceMacro("RaiseHardError", 6)
    ServiceMacro("ReadFile", 9)
    ServiceMacro("ReadFileScatter", 9)
    ServiceMacro("ReadRequestData", 6)
    ServiceMacro("ReadVirtualMemory", 5)
    ServiceMacro("RegisterThreadTerminatePort", 1)
    ServiceMacro("ReleaseMutant", 2)
    ServiceMacro("ReleaseSemaphore", 3)
    ServiceMacro("RemoveIoCompletion", 5)
    ServiceMacro("RemoveProcessDebug", 2)
    ServiceMacro("RenameKey", 2)
    ServiceMacro("ReplaceKey", 3)
    ServiceMacro("ReplyPort", 2)
    ServiceMacro("ReplyWaitReceivePort", 4)
    ServiceMacro("ReplyWaitReceivePortEx", 5)
    ServiceMacro("ReplyWaitReplyPort", 2)
    ServiceMacro("RequestDeviceWakeup", 1)
    ServiceMacro("RequestPort", 2)
    ServiceMacro("RequestWaitReplyPort", 3)
    ServiceMacro("RequestWakeupLatency", 1)
    ServiceMacro("ResetEvent", 2)
    ServiceMacro("ResetWriteWatch", 3)
    ServiceMacro("RestoreKey", 3)
    ServiceMacro("ResumeProcess", 1)
    ServiceMacro("ResumeThread", 2)
    ServiceMacro("SaveKey", 2)
    ServiceMacro("SaveKeyEx", 3)
    ServiceMacro("SaveMergedKeys", 3)
    ServiceMacro("SecureConnectPort", 9)
    ServiceMacro("SetBootEntryOrder", 2)
    ServiceMacro("SetBootOptions", 2)
    ServiceMacro("SetContextThread", 2)
    ServiceMacro("SetDebugFilterState", 3)
    ServiceMacro("SetDefaultHardErrorPort", 1)
    ServiceMacro("SetDefaultLocale", 2)
    ServiceMacro("SetDefaultUILanguage", 1)
    ServiceMacro("SetDriverEntryOrder", 2)
    ServiceMacro("SetEaFile", 4)
    ServiceMacro("SetEvent", 2)
    ServiceMacro("SetEventBoostPriority", 1)
    ServiceMacro("SetHighEventPair", 1)
    ServiceMacro("SetHighWaitLowEventPair", 1)
    ServiceMacro("SetInformationDebugObject", 5)
    ServiceMacro("SetInformationFile", 5)
    ServiceMacro("SetInformationJobObject", 4)
    ServiceMacro("SetInformationKey", 4)
    ServiceMacro("SetInformationObject", 4)
    ServiceMacro("SetInformationProcess", 4)
    ServiceMacro("SetInformationThread", 4)
    ServiceMacro("SetInformationToken", 4)
    ServiceMacro("SetIntervalProfile", 2)
    ServiceMacro("SetIoCompletion", 5)
    ServiceMacro("SetLdtEntries", 6)
    ServiceMacro("SetLowEventPair", 1)
    ServiceMacro("SetLowWaitHighEventPair", 1)
    ServiceMacro("SetQuotaInformationFile", 4)
    ServiceMacro("SetSecurityObject", 3)
    ServiceMacro("SetSystemEnvironmentValue", 2)
    ServiceMacro("SetSystemEnvironmentValueEx", 5)
    ServiceMacro("SetSystemInformation", 3)
    ServiceMacro("SetSystemPowerState", 3)
    ServiceMacro("SetSystemTime", 2)
    ServiceMacro("SetThreadExecutionState", 2)
    ServiceMacro("SetTimer", 7)
    ServiceMacro("SetTimerResolution", 3)
    ServiceMacro("SetUuidSeed", 1)
    ServiceMacro("SetValueKey", 6)
    ServiceMacro("SetVolumeInformationFile", 5)
    ServiceMacro("ShutdownSystem", 1)
    ServiceMacro("SignalAndWaitForSingleObject", 4)
    ServiceMacro("StartProfile", 1)
    ServiceMacro("StopProfile", 1)
    ServiceMacro("SuspendProcess", 1)
    ServiceMacro("SuspendThread", 2)
    ServiceMacro("SystemDebugControl", 6)
    ServiceMacro("TerminateJobObject", 2)
    ServiceMacro("TerminateProcess", 2)
    ServiceMacro("TerminateThread", 2)
    ServiceMacro("TestAlert", 0)
    ServiceMacro("TraceEvent", 4)
    ServiceMacro("TranslateFilePath", 4)
    ServiceMacro("UnloadDriver", 1)
    ServiceMacro("UnloadKey", 1)
    ServiceMacro("UnloadKey2", 2)
    ServiceMacro("UnloadKeyEx", 2)
    ServiceMacro("UnlockFile", 5)
    ServiceMacro("UnlockVirtualMemory", 4)
    ServiceMacro("UnmapViewOfSection", 2)
    ServiceMacro("VdmControl", 2)
    ServiceMacro("WaitForDebugEvent", 4)
    ServiceMacro("WaitForMultipleObjects", 5)
    ServiceMacro("WaitForSingleObject", 3)
    ServiceMacro("WaitHighEventPair", 1)
    ServiceMacro("WaitLowEventPair", 1)
    ServiceMacro("WriteFile", 9)
    ServiceMacro("WriteFileGather", 9)
    ServiceMacro("WriteRequestData", 6)
    ServiceMacro("WriteVirtualMemory", 5)
    ServiceMacro("YieldExecution", 0)
    ServiceMacro("CreateKeyedEvent", 4)
    ServiceMacro("OpenKeyedEvent", 3)
    ServiceMacro("ReleaseKeyedEvent", 4)
    ServiceMacro("WaitForKeyedEvent", 4)
    ServiceMacro("QueryPortInformationProcess", 0)
    ServiceMacro("GetCurrentProcessorNumber", 0)
    ServiceMacro("WaitForMultipleObjects32", 5)
