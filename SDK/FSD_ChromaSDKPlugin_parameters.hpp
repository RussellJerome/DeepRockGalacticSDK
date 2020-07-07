#pragma once

// DeepRockGalactic SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FSD_ChromaSDKPlugin_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Unload
struct UChromaSDKPluginAnimation1DObject_Unload_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Stop
struct UChromaSDKPluginAnimation1DObject_Stop_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.PlayWithOnComplete
struct UChromaSDKPluginAnimation1DObject_PlayWithOnComplete_Params
{
	struct FScriptDelegate*                            OnComplete;                                               // (Parm, ZeroConstructor)
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Play
struct UChromaSDKPluginAnimation1DObject_Play_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.Load
struct UChromaSDKPluginAnimation1DObject_Load_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsPlaying
struct UChromaSDKPluginAnimation1DObject_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.IsLoaded
struct UChromaSDKPluginAnimation1DObject_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject.GetFrames
struct UChromaSDKPluginAnimation1DObject_GetFrames_Params
{
	TArray<struct FChromaSDKColorFrame1D>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Unload
struct UChromaSDKPluginAnimation2DObject_Unload_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Stop
struct UChromaSDKPluginAnimation2DObject_Stop_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.PlayWithOnComplete
struct UChromaSDKPluginAnimation2DObject_PlayWithOnComplete_Params
{
	struct FScriptDelegate*                            OnComplete;                                               // (Parm, ZeroConstructor)
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Play
struct UChromaSDKPluginAnimation2DObject_Play_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.Load
struct UChromaSDKPluginAnimation2DObject_Load_Params
{
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsPlaying
struct UChromaSDKPluginAnimation2DObject_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.IsLoaded
struct UChromaSDKPluginAnimation2DObject_IsLoaded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject.GetFrames
struct UChromaSDKPluginAnimation2DObject_GetFrames_Params
{
	TArray<struct FChromaSDKColorFrame2D>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetMouseLedColor
struct UChromaSDKPluginBPLibrary_SetMouseLedColor_Params
{
	EChromaSDKMouseLed*                                led;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FChromaSDKColors>                    Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FChromaSDKColors>                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.SetKeyboardKeyColor
struct UChromaSDKPluginBPLibrary_SetKeyboardKeyColor_Params
{
	EChromaSDKKeyboardKey*                             Key;                                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FChromaSDKColors>                    Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FChromaSDKColors>                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsPlatformWindows
struct UChromaSDKPluginBPLibrary_IsPlatformWindows_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.IsInitialized
struct UChromaSDKPluginBPLibrary_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxRow
struct UChromaSDKPluginBPLibrary_GetMaxRow_Params
{
	EChromaSDKDevice2DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxLeds
struct UChromaSDKPluginBPLibrary_GetMaxLeds_Params
{
	EChromaSDKDevice1DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.GetMaxColumn
struct UChromaSDKPluginBPLibrary_GetMaxColumn_Params
{
	EChromaSDKDevice2DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.DebugToString
struct UChromaSDKPluginBPLibrary_DebugToString_Params
{
	struct FChromaSDKGuid*                             EffectId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors2D
struct UChromaSDKPluginBPLibrary_CreateRandomColors2D_Params
{
	EChromaSDKDevice2DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FChromaSDKColors>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateRandomColors1D
struct UChromaSDKPluginBPLibrary_CreateRandomColors1D_Params
{
	EChromaSDKDevice1DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FLinearColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors2D
struct UChromaSDKPluginBPLibrary_CreateColors2D_Params
{
	EChromaSDKDevice2DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FChromaSDKColors>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.CreateColors1D
struct UChromaSDKPluginBPLibrary_CreateColors1D_Params
{
	EChromaSDKDevice1DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FLinearColor>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKUnInit
struct UChromaSDKPluginBPLibrary_ChromaSDKUnInit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKSetEffect
struct UChromaSDKPluginBPLibrary_ChromaSDKSetEffect_Params
{
	struct FChromaSDKGuid*                             EffectId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKInit
struct UChromaSDKPluginBPLibrary_ChromaSDKInit_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKDeleteEffect
struct UChromaSDKPluginBPLibrary_ChromaSDKDeleteEffect_Params
{
	struct FChromaSDKGuid*                             EffectId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectStatic
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectStatic_Params
{
	EChromaSDKDeviceEnum*                              Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLinearColor*                               Color;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FChromaSDKEffectResult                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectNone
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectNone_Params
{
	EChromaSDKDeviceEnum*                              Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FChromaSDKEffectResult                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom2D
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom2D_Params
{
	EChromaSDKDevice2DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FChromaSDKColors>*                   Colors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FChromaSDKEffectResult                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ChromaSDKPlugin.ChromaSDKPluginBPLibrary.ChromaSDKCreateEffectCustom1D
struct UChromaSDKPluginBPLibrary_ChromaSDKCreateEffectCustom1D_Params
{
	EChromaSDKDevice1DEnum*                            Device;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FLinearColor>*                       Colors;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FChromaSDKEffectResult                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
